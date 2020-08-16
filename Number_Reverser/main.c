#include <stdio.h>
int reverse(int a);
int main()
{

    int num, rev;
    printf("Enter A Number : ");
    scanf("%d", &num);
    rev = reverse(num);
    printf("The Reversed Number Is %d", rev);
    return 0;
}

int reverse(int num)
{
    int rev = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    return rev;
}