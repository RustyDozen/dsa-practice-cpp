class Solution {
private:
    bool checkEqual(int a[26], int b[26]) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};
        for (int i = 0; i < s1.length(); i++) {
            int number = s1[i] - 'a';
            count1[number]++;
        }
        int i = 0;
        int count2[26] = {0};
        while (i < s1.length() && i < s2.length()) {
            int number = s2[i] - 'a';
            count2[number]++;
            i++;
        }
        if (checkEqual(count1, count2)) {
            return true;
        }
        while (i < s2.length()) {
            char newChar = s2[i];
            int number = newChar - 'a';
            count2[number]++;
            char oldChar = s2[i - s1.length()];
            number = oldChar - 'a';
            count2[number]--;
            i++;
            if (checkEqual(count1, count2)) {
                return true;
            }
        }
        return false;
    }
};