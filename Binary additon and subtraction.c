//Code to take two binary as input,
//and prints binary addition and subtraction result in decimal.
//also prints binary addition and subtraction result in binary.

#include <stdio.h>
#include<math.h>
int binaryAdd(int x,int y) // function to add tow decimal number in binary.
{
int carry;
while (y != 0) {
carry = (x & y) << 1;
x=x^y;
y=carry;
}
return x;
}
int binarySub(int x, int y) //function to subtraction two decimal number in binary.
{
int carry;
y = binaryAdd(~y, 1);
while (y != 0) {
carry = (x & y) << 1;
x = x ^ y;
y = carry;
}
return x;
}
void binaryForm(int n){ //function to convert decimal to binary.
int a[20],i;
int temp = n;
n = (n<0)?n*-1:n;
for(i=0;n>0;i++)
{
a[i]=n%2;  n=n/2;
}
printf("Binary=%c",(temp<0)?'-':' ');
for(i=i-1;i>=0;i--)
{
printf("%d",a[i]);
}
printf("\n");
}
int decimalForm(long long int n){
        int decimal=0,i=0,reminder;
        while(n!=0){
            reminder=n%10;
            n/=10;
            decimal+=reminder * pow(2,i);
            i++;
        }

return decimal;
}
int main()
{
int add, sub;
long long int x,y;

printf("First binary number to add: ");
scanf("%lld",&x);

printf("Second binary number to add: ");
scanf("%lld",&y);
int decX=decimalForm(x);
int decY=decimalForm(y);
add=binaryAdd(decX,decY);
sub=binarySub(decX,decY);

printf("\nAddition result in decimal: %d\n",add);
printf("Subtraction result in decimal: %d\n",sub);

printf("Addition result in ");
binaryForm(add);
printf("Subtraction result in ");
binaryForm(sub);

return 0;
}
