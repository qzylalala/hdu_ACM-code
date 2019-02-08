#include <iostream>
using namespace std;
int main()
{
    char s[30] = {},t;
    cin >> s;
    int i = 0, j, flag = 0;
    for (j = 0; s[j] != '\0'; j++) {
        t = s[j+1];
        if (t == '.' || t == '/' || t == '%' || t == '\0') {
            while (flag && s[i] == '0') i++;
            unsigned long long n = s[j]-'0';
            for(int a=i,b=j;a<b;a++,b--){
                char c=s[a];s[a]=s[b];s[b]=c;
            }
            i = ++j + 1;
            if (t=='.') {
                flag=1;
            }
        }
    }
    for(flag=1,j=0; s[j]!='\0'; j++){
        t=s[j+1];
        if(flag && s[j]=='0'){
            continue;
        }
        if(flag && (s[j]=='.'||s[j]=='/'||s[j]=='%')){
            cout<<'0';
        }
        flag=0;
        cout<<s[j];
        if (s[j]=='.'||s[j]=='/') {
            flag=1;
        }
    }
    if(flag){
        cout<<'0';
    }
    return 0;
}
