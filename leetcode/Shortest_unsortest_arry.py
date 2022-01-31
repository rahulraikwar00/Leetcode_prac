# # Given an integer array nums, you need to find one continuous subarray that if you only sort this subarray in ascending order, then the whole array will be sorted in ascending order.

# class Solution:
#     def findUnsortedSubarray(self, nums):
#         """
#         :type nums: List[int]
#         :rtype: int
#         """
#         if not nums:
#             return 0
#         n = len(nums)
#         left = 0
#         right = n - 1
#         while left < right:
#             if nums[left] <= nums[left + 1]:
#                 left += 1
#         else:
#             break
#     while left < right:
#         if nums[right] >= nums[right - 1]:
#             right -= 1
#         else:
#             break
#     if left == right:
#         return 0
#     else:
#         return right - left + 1

from typing import List

print(list(map(int, list(str((1233))))))

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:

        num = int("".join(map(str, digits))) + 1
        return [int(x) for x in str(num)]

# obj = Solution().plusOne([1, 2, 3])
