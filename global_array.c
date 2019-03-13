//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>
struct Numbers{
    int num;

    };
struct Numbers pd[10];


void run_global_array() {
    printf("Running global array\n");

    for(int i = 0; i < 10; i++){
        struct Numbers a = { i };
        pd[i] = a;
        printf("number %d\n ", pd[i].num);


    }




    // YOUR CODE HERE

}