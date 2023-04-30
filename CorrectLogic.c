 struct ListNode* l3 = malloc(sizeof(struct ListNode));
    struct ListNode* head = l3;
    int test = l1->val + l2->val;
    do{
        l3->val = test%10;
        test = ((l1->next!=NULL)?l1->next->val:0)+((l2->next!=NULL)?l2->next->val:0) + test/10;
        l3 = l3->next = (l1->next!=NULL || l2->next!=NULL || test != 0)?malloc(sizeof(struct ListNode)):NULL;
        l1 = l1->next!=NULL?l1->next:l1;
        l2 = l2->next!=NULL?l2->next:l2;
    }while(l3->next!=NULL);
    return head;
    