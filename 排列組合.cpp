//�]�p�@�ӵ{���A�Q�Ψ禡���覡�A��C m��n�A������m!/(n!(m-n)!)�C
#include<iostream>
using namespace std;
int f(int x,int y){
	int a=1,b=1,c=1,d,result;
	for(int i=1;i<=x;i++){
		a=a*i;
	}
	for(int i=1;i<=y;i++){
		b=b*i;
	}
	d=x-y;
	for(int i=1;i<=d;i++){
		c=c*i;
	}
	result=a/b/c;
	return result;
}
int main(){
	int m,n,result;
	cout<<"�п�J�s���Ӿ��m,n�A�F��C m��n"<<endl;
	cout<<"�z��m�Ȭ�:";
	cin>>m;
	cout<<"�z��n�Ȭ�:";
	cin>>n;
	if(m==0 || n==0){
		cout<<"0";
	}
	else if(m>n){
		cout<<"C m��n��"<<f(m,n);	
	}
	else
	cout<<"m�Ȥ��i�p��n";
	
}
