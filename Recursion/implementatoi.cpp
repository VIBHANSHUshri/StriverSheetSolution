#include <string>
#include <climits>

class Solution {
public:
    int solve(std::string s, int i, int answer, int sign) {
        // Base case: stop when we reach a non-digit character or the end of the string
        if (i >= s.length() || !isdigit(s[i])) {
            return answer * sign;
        }

        // Add current digit to the answer
        int digit = s[i] - '0';

        // Check for overflow before adding the digit
        if (answer > (INT_MAX - digit) / 10) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }
        

        answer = answer * 10 + digit;

        // Continue with the next character
        return solve(s, i+1, answer, sign);
    }

    int handleSignAndWhitespace(std::string s, int i, int sign) {
        // Skip leading whitespaces
        if (i < s.length() && s[i] == ' ') {
            return handleSignAndWhitespace(s, ++i, sign);
        }

        // Handle optional sign
        if (i < s.length() && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Start parsing the number
        return solve(s, i, 0, sign);
    }

    int myAtoi(std::string s) {
        return handleSignAndWhitespace(s, 0, 1);
    }
};
