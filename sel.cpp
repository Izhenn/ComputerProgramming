#include<iostream>
using namespace std;
void menu(int a){
	if(a==1){
		cout<<"新增資料"<<endl;
	}
	else if(a==2){
		cout<<"搜尋資料"<<endl;
	}
	else if(a==3){
		cout<<"修改資料"<<endl;
	}
	else if(a!=0 && a!=1 && a!=2 &&a!=3){
		cout<<"輸入錯誤，請重新輸入"<<endl;
	}
}
int main(){
	int sel;
	do{
		cout<<"Menu"<<endl;
		cout<<"1.新增資料"<<endl;
		cout<<"2.搜尋資料"<<endl;
		cout<<"3.修改資料"<<endl;
		cout<<"0.離開"<<endl;
		cout<<"請輸入選項";
		cin>>sel; 
		menu(sel);
	} 
	while(sel!=0);
	
}
