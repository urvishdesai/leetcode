// 425. Word Squares
/*
Given a set of words (without duplicates), find all word squares you can build from them.

A sequence of words forms a valid word square if the kth row and column read the exact same string, where 0 ≤ k < max(numRows, numColumns).

For example, the word sequence ["ball","area","lead","lady"] forms a word square because each word reads the same both horizontally and vertically.

b a l l
a r e a
l e a d
l a d y
Note:
There are at least 1 and at most 1000 words.
All words will have the exact same length.
Word length is at least 1 and at most 5.
Each word contains only lowercase English alphabet a-z.
Example 1:

Input:
["area","lead","wall","lady","ball"]

Output:
[
  [ "wall",
    "area",
    "lead",
    "lady"
  ],
  [ "ball",
    "area",
    "lead",
    "lady"
  ]
]

Explanation:
The output consists of two word squares. The order of output does not matter (just the order of words in each word square matters).
Example 2:

Input:
["abat","baba","atan","atal"]

Output:
[
  [ "baba",
    "abat",
    "baba",
    "atan"
  ],
  [ "baba",
    "abat",
    "baba",
    "atal"
  ]
]

Explanation:
The output consists of two word squares. The order of output does not matter (just the order of words in each word square matters).
*/
// #prefix, #hashmap, #unordered_map, #unordered_set, #recursion, #backtracking, #trie, #optimization

class Solution {
public:
    vector<vector<string>> wordSquares(vector<string>& words) {
        int len = words[0].length();
        unordered_map<string, unordered_set<string> > prefix;
        for (auto word: words){
            for (int i = 0; i < word.length(); i++){
                prefix[word.substr(0, i)].insert(word);
            }
        }
        vector<vector<string> > res;
        vector<string> square;
        build(res, square, 0, len, prefix);
        return res;
    }
    void build(vector<vector<string>>& res, vector<string>& square, int row, int& len, unordered_map<string, unordered_set<string> >& prefix){
        if(row == len){
            res.push_back(square);
            return;
        }
        string pre = "";
        for (auto word:square)
            pre += word[row];
        for (auto word: prefix[pre]){
            square.push_back(word);
            build(res, square, row + 1, len, prefix);
            square.pop_back();
        }
    }
};