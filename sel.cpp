#include<iostream>
using namespace std;
void menu(int a){
	if(a==1){
		cout<<"�s�W���"<<endl;
	}
	else if(a==2){
		cout<<"�j�M���"<<endl;
	}
	else if(a==3){
		cout<<"�ק���"<<endl;
	}
	else if(a!=0 && a!=1 && a!=2 &&a!=3){
		cout<<"��J���~�A�Э��s��J"<<endl;
	}
}
int main(){
	int sel;
	do{
		cout<<"Menu"<<endl;
		cout<<"1.�s�W���"<<endl;
		cout<<"2.�j�M���"<<endl;
		cout<<"3.�ק���"<<endl;
		cout<<"0.���}"<<endl;
		cout<<"�п�J�ﶵ";
		cin>>sel; 
		menu(sel);
	} 
	while(sel!=0);
	
}
