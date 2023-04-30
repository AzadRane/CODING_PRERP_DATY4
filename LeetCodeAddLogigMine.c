/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){

struct ListNode *l3; 
struct ListNode *f=NULL,*l=NULL,*p1,*p2;

p1=l1;
p2=l2;

static int rem = 0;

while(p1!=NULL)
{

  struct ListNode temp =  (struct ListNode*)malloc(sizeof(struct ListNode));
   
  if(f==NULL)
  {
    f=temp;
    int sumnno = p1->val + p2->val;
    rem=sumno/10;
    ans=sum%10;
    
  }


  

  





}





}