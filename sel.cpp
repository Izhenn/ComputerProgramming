//寫一個選單函式int menu()回傳使用者選擇的選項，選單內容為：1. 新增資料、2. 查閱資料、3.修改資料、0. 離開。
//在主程式中用迴圈包覆menu()，
//若使用者輸入0~3以外的選項，要告訴使用者輸入錯誤，並重新輸入，直到輸入0才結束程式。
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
