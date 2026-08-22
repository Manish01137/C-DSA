#include<iostream>
using namespace std; 
class Solution{
    TreeNode* solve(ListNode* head){
        if(head==NULL){
            return NULL;
        }
        if(head->next == NULL){
            return new TreeNode(head->val)
        }
         ListNode* slow = head;
         ListNode* fast = head;
         ListNode* prev = NULL;

         // find middle
         while(fast!=NULL && fast->next!=NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
         }
         prev->next = NULL;

         // slow = middle
         TreeNode* root = new TreeNode(slow->val);
         // left half
         root->left = solve(head);
         // right half
         root->right = solve(slow->next);
         return root;

    }

}
TreeNode* sortedListToBST(ListNode* head){
    return solve(head);
};
int main(){

    return 0;
}