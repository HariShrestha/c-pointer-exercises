//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// This function prints contents of linked list starting from
// the given node
void printList(struct Node *n)
{
    while (n != NULL)
    {
        printf(" %d \n", n->data);
        n = n->next;
    }
}
void run_linked_list() {
    {
        struct Node* head = NULL;
        struct Node* second = NULL;
        struct Node* third = NULL;
        struct Node* fourth = NULL;
        struct Node* tail = NULL;

        // allocate 3 nodes in the heap
        head  = (struct Node*)malloc(sizeof(struct Node));
        second = (struct Node*)malloc(sizeof(struct Node));
        third = (struct Node*)malloc(sizeof(struct Node));
        fourth = (struct Node*)malloc(sizeof(struct Node));
        tail  = (struct Node*)malloc(sizeof(struct Node));

        head->data = 1; //assign data in first node
        head->next = second; // Link first node with second

        second->data = 2; //assign data to second node
        second->next = third;

        third->data = 3; //assign data to second node
        third->next = fourth;

        fourth->data = 4; //assign data to second node
        fourth->next = tail;



        tail->data = 5; //assign data to third node
        tail->next = head;

        printList(head);

    }}