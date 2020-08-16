class Solution {
public:
    ListNode* getListNode(vector<ListNode*>& lists){
        ListNode* target = new ListNode(INT_MAX);
        int index;

        for(int i = 0; i < lists.size(); ++i){
            if(lists[i] && lists[i] -> val <= target -> val){
                target = lists[i];
                index = i;
            }
        }
        lists[index] = lists[index] -> next;
        return target;
    }
    
    bool isValid(vector<ListNode*>& lists){
        for(int i = 0; i < lists.size(); ++i){
            if(lists[i] != NULL){
                return true;
            }
        }
        return false;
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        ListNode* res = new ListNode(0);
        ListNode* index = res;
        
        
        while(isValid(lists)){
            index -> next = getListNode(lists);
            index = index -> next;
        }
        return res -> next;
    }
};