//輸入任意3個整數a、b、c，經過處理後結果必為a≧b≧c，並輸出該結果。
//此作業根據上一次比大小的作業，改為用傳參考值的函數完成交換三部曲。
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
