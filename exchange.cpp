//��J���N3�Ӿ��a�Bb�Bc�A�g�L�B�z�ᵲ�G����a��b��c�A�ÿ�X�ӵ��G�C
//���@�~�ھڤW�@����j�p���@�~�A�אּ�ζǰѦҭȪ���Ƨ����洫�T�����C
#include<iostream>
using namespace std;
void change(int &x,int &y);
int main(){
	int a,b,c;
	cout << "Please enter three integers a,b,c" <<endl;
	cin>>a>>b>>c;
	if(a<b){
		change(a,b);
	}
	if(b<c){
		change(b,c);
	}
	if(a<b){
		change(a,b);
	}
	cout<<a<<" "<<b<<" "<<c;
} 
void change(int &x,int &y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}
