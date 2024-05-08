///week12-2.cpp  n场借计
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
    printf("叫块1计:");
    int n;
    scanf("%d",&n);
    int ans=0;
    for(int i=2;i<=n;i++){
        if(isPrime(i)) {
            printf("%d ",i);
            ans ++;
        }
    }
    printf("羆Τ%d借计\n",ans);
}
