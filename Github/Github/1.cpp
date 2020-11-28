#include<stdio.h>
void solve(int n) {
    int temp = n % 10;
    /*********Begin*********/
    n = n / 10;
    if (n)
        solve(n);


    /*********End**********/
    if (n)
        printf(" %d", temp);
    else
        printf("%d", temp);
}
int main(void)
{
    int n;
    scanf_s("%d", &n);
    solve(n);
    return 0;
}
