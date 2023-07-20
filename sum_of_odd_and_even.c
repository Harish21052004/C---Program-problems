#include <stdio.h>
int main()
{
    int num, odd_sum = 0, even_sum = 0;
    printf("Enter the number: \n");
    scanf("%d",&num);
    for(int i=1; i<=num; ++i){
        if(i%2 == 0)
            even_sum += i;
        else
            odd_sum += i;
    }
    printf("The sum of odd number is %d\nThe sum of even number is %d",odd_sum,even_sum);
    return 0;
}
