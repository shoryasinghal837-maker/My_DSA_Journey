/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int count=0;
        ListNode* temp = list1;
        ListNode*a_ptr_list1;
        ListNode*b_ptr_list1;
        while(temp){
            if(count==a-1){
                a_ptr_list1 = temp;
            }
            if(count==b+1){
                b_ptr_list1 = temp;
            }count++;
            temp = temp->next;
        }
        ListNode* endOflist2=list2;
        ListNode* startOfList2=list2;
        while(endOflist2->next){
            endOflist2 = endOflist2->next;
        }
        a_ptr_list1->next = startOfList2;
        endOflist2->next = b_ptr_list1;
        return list1;
    }
};