//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>
struct Numbers{
    int num;

};




void run_local_array() {
    printf("Running local array\n");


    // YOUR CODE HERE
    struct Numbers pd[10];
    for(int i = 0; i < 10; i++){
        struct Numbers a = { i };
        pd[i] = a;
        printf("number %d\n ", pd[i].num);


    }


}