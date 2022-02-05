from typing import List


class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        ls = nums
        n = pivot
        l1 = []
        l2 = []
        count = 0
        for i in ls:
            if i == n:
                count += 1
            elif i < n:
                l1.append(i)
            elif i > n:
                l2.append(i)
        ls = l1 + [n] * count + l2
        return ls


# [9,5,3,10,10,12,14]
# [[9, 5, 10, 3, 10, 12, 14]]
if __name__ == "__main__":
    s = Solution()
    print(s.pivotArray([-3,4,3,2], 2))
