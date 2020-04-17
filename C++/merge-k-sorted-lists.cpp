

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Compare {
public:
    bool operator()(const ListNode* i, const ListNode* j){
        return (i->val > j->val);
    }    
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Compare> minheap;
        for (int i = 0; i < lists.size(); i++){
            if(lists[i])
                minheap.push(lists[i]);
        }
        ListNode* prehead = new ListNode(-1);
        ListNode* head = prehead;
        while(!minheap.empty()){
            head->next = minheap.top();
            head = head->next;
            if(head->next)
                minheap.push(head->next);
            minheap.pop();
        }
        return prehead->next;
    }
};