#include<iostream>
using namespace std;
int n;
int f[1001];//��ÿһλ��������
int main(){
    cin >> n;
    for(int i=1;i<=n;i++){ //1-n�ĵ���
        for(int j=1;j<=i/2;j++){
            f[i]+=f[j]; //ÿһλ���ӣ���������
        }
        f[i]++; //���ϱ���
    }
    cout<<f[n];//���n������
    return 0;
}
