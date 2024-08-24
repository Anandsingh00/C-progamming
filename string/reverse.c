#include<stdio.h>
#include<stdio.h>
int main(){
    char str[50];
    char ptr[50];
    puts("Enter a string: ");
    scanf("%[^\n]s",str);
    puts("The Reverse is : ");
    str[50]=ptr[50];
    int k =0;
        int count =0;
    while(str[k]!='\0'){
        count++;
        k++;
    }
    
    for(int i=0,j=count-1;i<=j;i++,j--){
        char temp = ptr[i];
        ptr[i] = ptr[j];
        ptr[j] = temp;
    }
    puts(str);
    if(ptr[50]==str[50]){
        printf("its a palindrome");
    }
    else{
        printf("not a palindrome");
    }
    return 0;
}