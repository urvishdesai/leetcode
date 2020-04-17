// 415. Add Strings
/**
Given two non-negative integers num1 and num2 represented as string, return the sum of num1 and num2.

Note:

The length of both num1 and num2 is < 5100.
Both num1 and num2 contains only digits 0-9.
Both num1 and num2 does not contain any leading zero.
You must not use any built-in BigInteger library or convert the inputs to integer directly.
**/
// #string, #reverse, #optimization, #reversetraversal, 

class Solution {
public:
    string addStrings(string num1, string num2) {
        string res = "";
        int carry = 0;
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        while(i >= 0 && j >= 0){
            res += (char)(((num1[i] - '0') + (num2[j] - '0') + carry) % 10 + '0');
            carry = ((num1[i] - '0') + (num2[j] - '0') + carry) / 10;
            i--;
            j--;
        }
        while(i >= 0){
            res += (char)(((num1[i] - '0') + carry) % 10 + '0');
            carry = ((num1[i] - '0') + carry) / 10;
            i--;
        }
        while(j >= 0){
            res += (char)(((num2[j] - '0') + carry) % 10 + '0');
            carry = ((num2[j] - '0') + carry) / 10;
            j--;
        }
        if(carry > 0)
            res += (char)(carry + '0');
        reverse(res.rbegin(), res.rend());
        return res;
    }
};