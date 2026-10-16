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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr||head->next==nullptr) return nullptr;
        ListNode* temp = head;
        int n=0;
        while(temp){
            temp = temp->next;
            n++;
        }
        int toDelete = n/2;
        int count=0;
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while(curr){
            if(count==toDelete){
                prev->next = curr->next;
                curr->next = nullptr;
                break;
            }
            prev = curr;
            curr = curr->next;
            count++;
        }return head;
    }
};