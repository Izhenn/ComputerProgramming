#include<iostream>
using namespace std;
int main(){
	int n;
	float avg,sum=0;
	cout<<"�п�J�n��J�X�Ӽ�"<<endl;
	cin>>n;
	if(n>0){
		cout<<"�п�J"<<n<<"�Ӿ��"<<endl;
		int a[n];
		for(int i=1;i<=n;i++){
			cin>>a[i-1];
		} 
		for(int j=0;j<n;j++){
			sum=sum+a[j];
		}
		avg=sum/n;
		cout<<"�`�X��"<<sum<<endl;
		cout<<"�����Ȭ�"<<avg<<endl; 
	}
	else
	cout<<"�п�J�ܤ֤@�Ӽ�";
}
