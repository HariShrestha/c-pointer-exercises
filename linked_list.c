//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void run_linked_list() {
    printf("Running linked list\n");

    // YOUR CODE HERE
    struct node {
        int data;
        int key;
        struct node *next;
    };

    struct node *head = NULL;
    struct node *current = NULL;

    struct node *ptr = head;
    printf("\n[ ");


   while(ptr != NULL) {
        printf("(%d,%d) ", ptr->key, ptr->data);
        ptr = ptr->next;
    }
    struct node *link = (struct node*) malloc(sizeof(struct node));

    link->key = 10;
    link->data = 20;

    link->key = 10;
    link->data = 20;

    //point it to old first node
    link->next = head;

    //point first to new first node
    head = link;


}