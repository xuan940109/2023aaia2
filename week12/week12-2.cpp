///week12-2.cpp 列出 n以下的全部質數
#include <stdio.h>
int isPrime(int n)
{
    for(int i=2;i<n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main()
{
    printf("請輸入1個數:");
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(isPrime(i)) printf("%d",i);
    }
}
