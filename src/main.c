#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode* next;
};
// figure out why intellisence not working

int main() {

    struct ListNode head;
    head.val = 1;
    struct ListNode node2;
    node2.val = 2;
    node2.next = NULL;
    head.next = &node2;


    printf("%i", head.next->val);


    return 0;

    
}

