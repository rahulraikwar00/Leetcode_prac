class Solution {
public:
    char findTheDifference(string s, string t) {
        int arr[26];
        char charr;
        // fill the array with 1
        fill(arr, arr + 26, 1);
        for (auto i : s)
        {
            // cout << i << " " </< 'a' - i << endl;
            arr[i - 'a']++;
        }
        for (auto i : t)
        {

            arr[i - 'a']--;
            if (arr[i - 'a'] == 0)
            {
                charr = i;
            }
        }
        return charr;
    }
};