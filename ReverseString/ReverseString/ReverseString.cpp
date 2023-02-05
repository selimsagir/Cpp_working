#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        if (n <= 0) return "";
        string curr = "1";
        for (int i = 2; i <= n; i++) {
            string next = "";
            int count = 1;
            char say = curr[0];
            for (int j = 1; j < curr.length(); j++) {
                if (curr[j] == say) {
                    count++;
                }
                else {
                    next += to_string(count) + say;
                    count = 1;
                    say = curr[j];
                }
            }
            next += to_string(count) + say;
            curr = next;
        }
        return curr;
    }
};

int main() {
    Solution solution;
    cout << solution.countAndSay(4) << endl;
    return 0;
}
