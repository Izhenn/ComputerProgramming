//��J���N3�Ӿ��a�Bb�Bc�A�g�L�B�z�ᵲ�G����a��b��c�A�ÿ�X�ӵ��G�C�����@�~�u��ϥ�if���O�C
#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cout << "Please enter three integers a,b,c" <<endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if(a<b){
		d=a;
		a=b;
		b=d;
		if(b<c){
		d=b;
		b=c;
		c=d;
	}
	}
	if(a<b){
		d=a;
		a=b;
		b=d;
	}
	cout<<a<<">="<<b<<">="<<c;	
}
