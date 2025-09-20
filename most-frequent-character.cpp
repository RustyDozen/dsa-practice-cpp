class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        int arr[26] = {0};
        for (int i = 0; i < s.size(); i++) {
            int number = s[i] - 'a';
            arr[number]++;
        }
        int maxi = -1;
        int ans = -1;
        for (int i = 0; i < 26; i++) {
            if (maxi < arr[i]) {
                ans = i;
                maxi = arr[i];
            }
        }
        return 'a' + ans;
    }
};