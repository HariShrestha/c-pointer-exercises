//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>
#include <stdlib.h>





void run_monolithic_array() {
    printf("Running monolithic array\n");

    struct numbers {
        int num;
        char name[14];
    };
    struct numbers* num_t;
    num_t = (struct numbers*)malloc(10*sizeof(struct numbers));

    for(int i = 0; i < 10; i++){
        struct numbers a = { i, "student" };

        num_t[i] = a;
        printf("number %d %s\n", num_t[i].num, num_t[i].name);


    }




}