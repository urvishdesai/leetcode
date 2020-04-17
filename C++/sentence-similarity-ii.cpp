// 737. Sentence Similarity II
/**
Given two sentences words1, words2 (each represented as an array of strings), and a list of similar word pairs pairs, determine if two sentences are similar.

For example, words1 = ["great", "acting", "skills"] and words2 = ["fine", "drama", "talent"] are similar, if the similar word pairs are pairs = [["great", "good"], ["fine", "good"], ["acting","drama"], ["skills","talent"]].

Note that the similarity relation is transitive. For example, if "great" and "good" are similar, and "fine" and "good" are similar, then "great" and "fine" are similar.

Similarity is also symmetric. For example, "great" and "fine" being similar is the same as "fine" and "great" being similar.

Also, a word is always similar with itself. For example, the sentences words1 = ["great"], words2 = ["great"], pairs = [] are similar, even though there are no specified similar word pairs.

Finally, sentences can only be similar if they have the same number of words. So a sentence like words1 = ["great"] can never be similar to words2 = ["doubleplus","good"].

Note:

The length of words1 and words2 will not exceed 1000.
The length of pairs will not exceed 2000.
The length of each pairs[i] will be 2.
The length of each words[i] and pairs[i][j] will be in the range [1, 20].
**/
// #union-find, #passbyreference, #unordered_map, #modular

class Solution {
public:
    bool areSentencesSimilarTwo(vector<string>& words1, vector<string>& words2, vector<vector<string>>& pairs) {
        if(words1.size() != words2.size())
            return false;
        
        unordered_map<string, string> str_map;
        for (auto pair:pairs){
            wunion(str_map, pair[0], pair[1]);
        }
        for (int i = 0; i < words1.size(); i++){
            if(wfind(str_map, words1[i]) != wfind(str_map, words2[i]))
                return false;
        }
        return true;
    }
private:
    void wunion(unordered_map<string, string>& str_map, string w1, string w2){
        w1 = wfind(str_map, w1);
        w2 = wfind(str_map, w2);
        if(w1 != w2){
            str_map[w1] = w2;
        }
    }
    
    string wfind(unordered_map<string, string>& str_map, string word){
        if(str_map.find(word) == str_map.end())
            str_map[word] = word;
        return str_map[word] == word ? word : wfind(str_map, str_map[word]);
    }
};