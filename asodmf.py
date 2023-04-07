# from typing import List


# def evenOddBit(n) -> List[int]:
#     count1 = 0
#     count2 = 0
#     print(str(bin(n))[2::])
#     for i,j in enumerate(str(bin(n))[2::]):
#         print(i,j)
#         if (j == 1):
#             print("asdf")
#             if i % 2:
#                 count1 += 1
#             else:
#                 count2 += 1
#     return [count1, count2]


# print(evenOddBit(17))



def min_edges_to_collect_all_coins(n, edges, coins):
    # Initialize the dp array
    dp = [[float('inf')] * 3 for _ in range(n)]

    # Define a recursive function to compute dp[u][k]
    def dfs(u, parent):
        dp[u][coins[u]] = 0
        for v in edges[u]:
            if v != parent:
                dfs(v, u)
                for k in range(3):
                    for k2 in range(3):
                        cost = 1 if k + k2 - coins[u] + coins[v] <= 2 else 2
                        dp[u][k + k2 - coins[u] + coins[v]] = min(dp[u][k + k2 - coins[u] + coins[v]], dp[v][k] + cost)

    # Compute the dp array for each node as the root
    for u in range(n):
        dfs(u, -1)

    # Find the minimum number of edges required to collect all the coins
    ans = float('inf')
    for u in range(n):
        for v in edges[u]:
            if v > u:
                ans = min(ans, dp[u][2] + dp[v][0] + 1)

    return ans
