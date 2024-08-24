#include<stdio.h>
#include<string.h>
int main(){
   char s1[20] = "anand raj ";
    char s2[] = "singh";
    int n =strcmp(s1,s2);
    printf("%d",n);
    return 0;
}