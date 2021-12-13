#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode createListNode(int val, struct ListNode *next) {
    struct ListNode node;
    node.val = val;
    node.next = next;
    return node;
}

struct ListNode getListNode(int index, struct ListNode *head) {
    struct ListNode *temp = head;

for (int i = 0; i < index; i++)
{   
    if(temp == NULL) {
        break;
    }
    temp = temp->next;
}
    return *temp;

}

void printNodesValues(struct ListNode *head) {
    struct ListNode *temp = head;
    while (temp != NULL)
    {
        printf("Node value = %d\n", temp->val);
        temp = temp->next;

    }
}


int main() {


    struct ListNode node1 = createListNode(1, NULL);
    struct ListNode node2 = createListNode(2, NULL);
    node1.next = &node2;
    struct ListNode node3 = createListNode(3, NULL);
    node2.next = &node3;




    // struct ListNode head;
    // head.val = 1;
    // struct ListNode node2;
    // node2.val = 2;
    // node2.next = NULL;
    // head.next = &node2;

    // printf("%i", head.next->val);
    printNodesValues(&node1);

        printf("%d\n", getListNode(2, &node1).val);

    printf("\n");


    return 0;

    
}

