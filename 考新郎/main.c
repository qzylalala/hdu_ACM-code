#include<stdio.h>
long long sum[34],N[34];
int main(){
    int n,a,b;
    sum[1]=0;sum[2]=1;
    N[0]=1;N[1]=1;N[2]=2;
    for(int i=3;i<34;i++){
            sum[i]=(i-1)*(sum[i-1]+sum[i-2]);
            N[i]=i*N[i-1];
            }
    scanf("%d",&n);
       for(int i=0;i<n;i++){
             scanf("%d%d",&a,&b);
             printf("%lld\n",(N[a]/N[b]/N[a-b])*sum[b]);
               }
    return 0;
    }
