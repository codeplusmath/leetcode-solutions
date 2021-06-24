#include <string.h>
#include <iostream>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int mostleft = 0, mostright = 0;
        for (int i = 0; i < s.length(); i++) {
            int current_left = i, current_right = i;
           
            while (current_right + 1 < s.length() && s[current_right + 1] == s[current_left]) current_right++;
            i = current_right;  

            while (current_left - 1 >= 0 && current_right + 1 < s.length() && s[current_left - 1] == s[current_right + 1]) {
                current_right++;
                current_left--;
            }

            if (current_right - current_left + 1 > mostright - mostleft + 1) {
              mostleft = current_left;
              mostright = current_right;
            }
        }
        return s.substr(mostleft, mostright - mostleft + 1);
    }
};


static const int _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
