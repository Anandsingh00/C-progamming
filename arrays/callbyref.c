#include<stdio.h>
int  main(){
     int i;
    int marks[]={65,55,75,85,95,85,65};

    for(i=0;i<=6;i++){
        display(&marks[i]);
    }
    return 0;
}
    void display(int *n){
        // * is the value at that address operator
        printf("%d ",*n);
    }