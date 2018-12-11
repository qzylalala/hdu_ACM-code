#include<stdio>
#include<stdlib>
#include<string>
#define maxn 40000
using namespace std;
int f[maxn];
int main()
{
    int s,c,i,j,n,k;
    while(scanf("%d",&n)!=EOF){
     memset(f,0,sizeof(f));
     f[0]=1;
     for(i=2;i<=n;i++){
      c=0;
      for(j=0;j<maxn;++j){
       s=f[j]*i+c;
       f[j]=s%10;
       c=s/10;}}
       for(j=maxn;j>=0;--j)if(f[j])break;
       for(i=j;i>=0;--i)
       printf("%d",f[i]);
       printf("\n");}
    return 0;
}
