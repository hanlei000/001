#include<stdio.h>
void solve(int n) {
    printf("%d", n % 10);
    
    n = n / 10;


   
    if (n > 0) solve(n);
}
int main(void)
{
    int n;
    scanf_s("%d", &n);
    solve(n);
    return 0;
}
/*#include int reverse(int n); 
int main(void) 
{ char c; int count, number;
printf("Enter number\n"); 
scanf("%d",&number); 
count = reverse(number); 
printf("count = %d\n", count);
return 0; }
int reverse(int n)
{int sum=0; 
while(n!=0) 
{sum=sum*10+n%10; n=n/10; }
return sum; }*/