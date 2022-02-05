#include <bits/stdc++.h>

// #include <cstdlib>
// int main()
// {
//     int startAt, moveCost, pushCost, targetSeconds;
//     scanf("%d%d%d", &startAt, &moveCost, &pushCost);
//     targetSeconds = atoi(stdin);
//     int minimumCost = INT_MAX;
//     for (int digit = startAt; digit <= targetSeconds; digit++)
//     {
//         int minutes = digit / 10;
//         int seconds = digit % 10;
//         if (minutes <= 59 && seconds <= 59)
//         {
//             minimumCost = pushCost + moveCost;
//         }
//         else if (minutes <= 59 && seconds > 59)
//         {
//             minimumCost = moveCost + pushCost;
//         }
//         else if (seconds <= 59)
//         {
//             minimumCost = pushCost + moveCost;
//         }
//     }
//     std::cout << "The minimum cost to set the target seconds of cooking time is " << minimumCost << "." << std::endl;
//     return 0;
// }

class Solution
{
public:
    int minCostSetTime(int startAt, int moveCost, int pushCost, int targetSeconds)
    {

        int minimumCost = INT_MAX;
        for (int digit = startAt; digit <= targetSeconds; digit++)
        {
            int minutes = digit / 10;
            int seconds = digit % 10;
            if (minutes <= 59 && seconds <= 59)
            {
                minimumCost = pushCost + moveCost;
            }
            else if (minutes <= 59 && seconds > 59)
            {
                minimumCost = moveCost + pushCost;
            }
            else if (seconds <= 59)
            {
                minimumCost = pushCost + moveCost;
            }
        }
        return minimumCost;
    }
};

int main(
    int argc,
    char const *argv[])
{
    Solution solution;
    int startAt, moveCost, pushCost, targetSeconds;
    scanf("%d%d%d", &startAt, &moveCost, &pushCost);
    targetSeconds = atoi(argv[1]);
    solution.minCostSetTime(startAt, moveCost, pushCost, targetSeconds);
    return 0;
}

#include <iostream>
#include <cstdlib>
int main()
{
    int startAt, moveCost, pushCost, targetSeconds;
    scanf("%d", &startAt);
    targetSeconds = atoi(stdin);
    int minimumCost = INT_MAX;
    for (int digit = startAt; digit <= targetSeconds; digit++)
    {
        int minutes = digit / 10;
        int seconds = digit % 10;
        if (minutes <= 59 && seconds <= 59)
        {
            minimumCost = pushCost + moveCost;
        }
        else if (minutes <= 59 && seconds > 59)
        {
            minimumCost = moveCost + pushCost;
        }
        else if (seconds <= 59)
        {
            minimumCost = pushCost + moveCost;
        }
    }
    std::cout << "The minimum cost to set the target seconds of cooking time is " << minimumCost << "." << std::endl;
    return 0;
}

#include <iostream> #include <cstdlib>
int main()
{
    int startAt, moveCost, pushCost, targetSeconds;
    scanf("%d", &startAt);
    targetSeconds = atoi(stdin);
    int minimumCost = INT_MAX;
    for (int digit = startAt; digit <= targetSeconds; digit++)
    {
        int minutes = digit / 10;
        int seconds = digit % 10;
        if (minutes <= 59 && seconds <= 59)
        {
            minimumCost = pushCost + moveCost;
        }
        else if (minutes <= 59 && seconds > 59)
        {
            minimumCost = moveCost + pushCost;
        }
        else if (seconds <= 59)
        {
            minimumCost = pushCost + moveCost;
        }
    }
    std::cout << "The minimum cost to set the target seconds of cooking time is " << minimumCost << "." << std::endl;
    return 0;
}