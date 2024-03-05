//寫一個程式，可任意輸入1個整數值n，接著可輸入n個整數，
//並計算這n個整數的總和及平均值，並將計算結果輸出。
#include<iostream>
using namespace std;
int main(){
	int n;
	float avg,sum=0;
	cout<<"請輸入要輸入幾個數"<<endl;
	cin>>n;
	if(n>0){
		cout<<"請輸入"<<n<<"個整數"<<endl;
		int a[n];
		for(int i=1;i<=n;i++){
			cin>>a[i-1];
		} 
		for(int j=0;j<n;j++){
			sum=sum+a[j];
		}
		avg=sum/n;
		cout<<"總合為"<<sum<<endl;
		cout<<"平均值為"<<avg<<endl; 
	}
	else
	cout<<"請輸入至少一個數";
}
