#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        float price;
        int noOfPages;
    }a,b,c;
    a.noOfPages = 100;
    a.price =441.5;
    strcpy(a.name,"Secret Seven");

    b.noOfPages = 200;
    b.price =101.5;
    strcpy(b.name,"Silent five");


    printf("%d\n",a.noOfPages);
    printf("%f\n",a.price);
    printf("%s\n",a.name);

    printf("%d\n",b.noOfPages);
    printf("%f\n",b.price);
    printf("%s",b.name);
    return 0;
}