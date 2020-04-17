#ifndef TreeNode_h
#define TreeNode_h

class TreeNode{
	int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
};

#endif	/* TreeNode_h */