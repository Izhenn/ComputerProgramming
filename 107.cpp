//#include<iostream>		//遞迴 
//using namespace std;
//double f(int a){
//	double b;
//	if(a==0){
//		return 1;
//	}
//	else{
//		b=((1.0*a)/(a+1))*f(a-1);
//		return b;
//	}
//}
//int main(){
//	int x;
//	cout<<"Please enter x value"<<endl;
//	cin>>x;
//	double result=f(x);
//	cout<<"The f("<<x<<") is "<<result;
//} 

//#include<iostream>		//比較兩陣列是否相同 
//using namespace std;
//bool boolcompArray(int a[],int b[]){
//	for(int i=0;i<6;i++){
//		if(a[i] != b[i]){
//			return false;
//		}
//	}
//	return true;
//}
//int main(){
//	int x[5];
//	int y[5];
//	cout<<"請輸入兩串5個整數來比較是否相同"<<endl;
//	for(int i=0;i<5;i++){
//		cin>>x[i];
//	} 
//	for(int i=0;i<5;i++){
//		cin>>y[i];
//	}
//	if(boolcompArray(x,y)){
//		cout<<"兩陣列相同"<<endl; 
//	}
//	else{
//		cout<<"兩陣列不同"<<endl; 
//	}
//}

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	int rand();
	srand(time(NULL));
	cout<<"亂碼1:"; 
	int num1[30];  //30位數的亂碼
	for(int i=0;i<30;i++){
		num1[i]=rand()%10;
		cout<<num1[i];
	}
	cout<<endl;
	cout<<"亂碼2:";
	int num2[30];
	for(int i=0;i<30;i++){
		num2[i]=rand()%10;
		cout<<num2[i];
	}
	cout<<endl;
	
	int sum[31]={0};  //因為可能有進位，所以用sum[31] 
	for(int i=29;i>=0;i--){  //因為從最後面那個位數(個位數)開始相加，陣列是從0開始，所以最低位數是i=29 
		int a=num1[i]+num2[i]+sum[i+1];
		sum[i+1]=a%10;
		sum[i]=a/10;
	}
	cout<<"相加為:";
	for(int i=0;i<31;i++){
		cout<<sum[i];
	} 
	cout<<endl;
}


