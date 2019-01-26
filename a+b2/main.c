#include<stdio.h>
#include<string.h>
int main(){
int i,j,k,m,n,t,a[1002],len;
char s1[1001],s2[1001];
scanf("%d",&t);
for(n=0;n<t;n++){
scanf("%s%s",s1,s2);
len=(strlen(s1)>=strlen(s2)?strlen(s1):strlen(s2));
for(i=0;i<len+1;i++) a[i]=0;
m=0;
for(i=strlen(s1)-1,j=strlen(s2)-1;i>=0&&j>=0;i--,j--){
k=s1[i]+s2[j]-2*'0';
if(k>=10) {a[m++]+=k%10;a[m]++;}
else{
a[m++]+=k;
if(a[m-1]>=10) {a[m]++;a[m-1]%=10;}
}
}
if(i>=0){
for(j=i;j>=0;j--){
k=s1[j]-'0';
if(k>=10) {a[m++]+=k%10;a[m]++;}
else{
a[m++]+=k;
if(a[m-1]>=10) {a[m]++;a[m-1]%=10;}
}
}
}
else if(j>=0){
for(i=j;i>=0;i--){
k=s2[i]-'0';
if(k>=10) {a[m++]+=k%10;a[m]++;}
else{
a[m++]+=k;
if(a[m-1]>=10) {a[m]++;a[m-1]%=10;}
}
}
}
printf("Case %d:\n",n+1);
printf("%s + %s = ",s1,s2);
if(a[m]>0) m++;
for(i=m-1;i>=0;i--) printf("%d",a[i]);
printf("\n");
if(n!=t-1) printf("\n");
}
return 0;
}
