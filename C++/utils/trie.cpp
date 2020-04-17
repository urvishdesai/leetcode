class TrieNode{
public:
	TrieNode* next[26];
	bool is_word;
	TrieNode(bool b = false){
		memset(next, 0, sizeof(next));
		is_word = b;
	}
};

class Trie{
public:
	TrieNode* root;
	Trie(){
		root = new TrieNode;
	}

	void insert(string str){
		TrieNode* p = root;
		for (int i = 0; i < str.size(); i++){
			if(p->next[s[i] - 'a'] == nullptr)
				p->next[s[i] - 'a'] = new TrieNode();
			p = p->next[s[i] - 'a'];
		}
		p->is_word = true;
	}

	bool exists(string str){
		TrieNode* p = root;
		for (int i = 0; i < str.size(); i++){
			int idx = str[i] - 'a';
			if(!p->next[idx])
				return false;
			p = p->next[idx];
		}
		if(p && p->is_word)
			return true;
	}

	vector<string> search(string pre){
		TrieNode* p = root;
		vector<string> res;
		for (int i = 0; i < pre.size(), p; i++){
			p = p->next[pre[i] - 'a'];
		}
		dfs (p, res, pre);
	}

	void dfs(TrieNode* root, vector<string>& res, string pre){
		if(root->is_word){
			res.push_back(pre);
			return;
		}

		for (int i = 0; i < 26; i++){
			if(p->next[i]){
				dfs(p->next[i], res, pre + (char)(i+'a'));
			}
		}
	}
};