#include<stdio.h>
void main()
{
    int rane_a, range_b, i,j;
    printf("Enter the Down Range: ");
    scanf("%d", &rane_a);
    printf("Enter the Up Range: ");
    scanf("%d", &range_b);
    for(i=rane_a+1; i<=range_b; i++)
    {
        for(j=2; j<=i; j++)
        {
            if(i%j==0){
                break;
            }

        }
        if(i==j){
            printf("%d " , i);
        }
    }
    getch();
}
