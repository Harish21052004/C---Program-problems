#include <stdio.h>
int main()
{
    int num1, num2, temp;
    printf("Enter the First number and second number: \n");
    scanf("%d %d",&num1,&num2);
    printf("Numbers before swapping is %d and %d\n",num1,num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Numbers after swapping is %d and %d",num1,num2);
    return 0;
}
