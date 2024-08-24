#include<stdio.h>
#include<stdlib.h>

int findfrequency(char *str,char tar){
    int f=0;
    while(*str!='0'){
        if(*str == tar||*str == tar + 32||*str == tar - 32)
        f++;
        str++;
    }
    return f;
}

int main(){
    char str[100],ch;
    printf("Enter the string: ");
    gets(str);
    printf("Enter the elements to find frequency : ");
    scanf("%c",&ch);
    printf("Frequency of %c is %d.",ch,findfrequency(str,ch));
    return 0;
}