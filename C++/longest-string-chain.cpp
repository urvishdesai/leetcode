// 1048. Longest String Chain
/*
Given a list of words, each word consists of English lowercase letters.

Let's say word1 is a predecessor of word2 if and only if we can add exactly one letter anywhere in word1 to make it equal to word2.  For example, "abc" is a predecessor of "abac".

A word chain is a sequence of words [word_1, word_2, ..., word_k] with k >= 1, where word_1 is a predecessor of word_2, word_2 is a predecessor of word_3, and so on.

Return the longest possible length of a word chain with words chosen from the given list of words.

 

Example 1:

Input: ["a","b","ba","bca","bda","bdca"]
Output: 4
Explanation: one of the longest word chain is "a","ba","bda","bdca".
 

Note:

1 <= words.length <= 1000
1 <= words[i].length <= 16
words[i] only consists of English lowercase letters.
*/
// #string, #recursion, #memoization, #optimization

class Solution {
public:
    int longestStrChain(vector<string>& words) {
        unordered_map<string, int> hash;
        for (int i = 0; i < words.size(); i++){
            hash[words[i]] = -1;
        }
        int maxlen = INT_MIN;
        for (int i = 0; i < words.size(); i++){
            int len = helper(words[i], hash);
            // cout << words[i] << " " << len << endl;
            maxlen = max(maxlen, len);
        }
        return maxlen;
    }
    int helper(string str, unordered_map<string, int>& hash){
        if(hash.find(str) == hash.end())
           return 0;
        if(hash[str] != -1)
            return hash[str];
        if(str.length() == 1){
            hash[str] = 1;
            return hash[str];
        }
        int len = 0;
        for (int i = 0; i < str.size(); i++){
            string newstr = str.substr(0, i) + str.substr(i+1);
            len = max(len, helper(newstr, hash));
        }
        hash[str] = len + 1;
        return hash[str];
    }
};