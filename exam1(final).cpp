#include<iostream>
using namespace std;
int menu(){
	cout<<"   Menu for Simulation"<<endl;
	cout<<"1. Game 1"<<endl;
	cout<<"2. Game 2"<<endl;
	cout<<"0. Exit"<<endl;
	cout<<"Please Select one"<<endl;
	int a;
	cin>>a;
	return a;
}
int main(){
	int select;
	while(true){
		select=menu();
		if(select<=2 && select>=0){
		if(select!=0){
			if(select==1){
				cout<<"Game 1 ���椤"<<endl; 
			}
			else if(select==2){
				cout<<"Game 2 ���椤"<<endl; 
			}
		}
		else{
			break;
		}	
	}
	else{
		cout<<"�п�J0~2�����"<<endl;
	}
	}	
}
