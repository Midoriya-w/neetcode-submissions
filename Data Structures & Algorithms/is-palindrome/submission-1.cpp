class Solution {
public:
    bool isPalindrome(string s) {
        string org = "";
        string rev = "";

        // Keep only letters and digits, convert to lowercase
        for (char c : s) {
            if (isalnum(c)) {
                org += tolower(c);
            }
        }

        // Reverse the cleaned string
        for (int i = org.length() - 1; i >= 0; i--) {
            rev += org[i];
        }

        return org == rev;
    }
};