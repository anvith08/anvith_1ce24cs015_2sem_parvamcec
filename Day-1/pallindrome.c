#include <stdio.h>

int main(){
    int num, reversed_num, r, og_num;
    printf("Enter a number : ");
    scanf("%d", &num);
    og_num = num;
    while (num != 0)
    {
        r = num%10;
        reversed_num = (int)reversed_num * 10 + r;
        num /= 10;
    }
    if (og_num == reversed_num)
    {
        printf("%d and %d is a pallindrome",og_num, reversed_num);
    }else{
        printf("%d and %d is not a pallindrome",og_num, reversed_num);
    }
    
    return 0;
}