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
    ListNode* removeNodes(ListNode* head) {
    if(head->next==nullptr)return head;
    
    ListNode* revi=rev(head);
    int maxi=revi->val;

    ListNode* prev=revi;
    ListNode* temp=revi->next;

    while(temp){
        maxi=max(temp->val,maxi);
        if(maxi>temp->val){
            prev->next=temp->next;
            temp=prev->next;
        }
        else{
            prev=temp;
            temp=temp->next;
        }

    } 
      revi=rev(revi);
      return revi;
    }

    ListNode* rev(ListNode* head){
      ListNode* prev=head;
      ListNode* temp=head->next;
      head->next=nullptr;

      while(temp){
        ListNode* node=temp->next;
        temp->next=prev;
        prev=temp;
        temp=node;
      }
      return prev;
    }

};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna