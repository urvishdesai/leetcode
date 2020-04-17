#ifndef ListNode_h
#define ListNode_h

class ListNode{
	ListNode* next;
    int value;
    ListNode(int x) : value(x), next(nullptr){}
};

#endif	/* ListNode_h */