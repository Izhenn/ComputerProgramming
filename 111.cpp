//#include<iostream>
//using namespace std;
//void menu(){
//	cout<<"   Menu for Simulation"<<endl;
//	cout<<"1. Simulate Students' Data"<<endl;
//	cout<<"2. Sort Students' Data"<<endl;
//	cout<<"3. List Students' Data"<<endl;
//	cout<<"0. Exit"<<endl;
//	cout<<"   Please Select one"<<endl;
//}
//int main(){
//	menu();
//	int x;
//	do{
//		cin>>x;
//		if(x==1){
//		cout<<"1. Simulate Students' Data"<<endl;
//		}
//		else if(x==2){
//		cout<<"2. Sort Students' Data"<<endl;
//		}
//		else if(x==3){
//		cout<<"3. List Students' Data"<<endl;
//		}
//	}while(x!=0);
//	
//	
//} 
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void f1(int &No[],int &Eng[],int &Prg[],int num){
	int No[num];
	for(int i=0;i<num;i++){
			No[i]=i+1;
		}
}
int main(){
	int num;
	cout<<"請輸入學生數"<<endl;
	cin>>num>>endl;
	int No[num];
	int Eng[num];
	int Prg[num];
	if(num>0 && num<=50){
		f1(No,Eng,Prg,num);
		
	}
}
