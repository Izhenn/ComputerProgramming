//設計一個程式，利用函式的方式，解C m取n，公式為m!/(n!(m-n)!)。
#include<iostream>
using namespace std;
int f(int x,int y){
	int a=1,b=1,c=1,d,result;
	for(int i=1;i<=x;i++){
		a=a*i;
	}
	for(int i=1;i<=y;i++){
		b=b*i;
	}
	d=x-y;
	for(int i=1;i<=d;i++){
		c=c*i;
	}
	result=a/b/c;
	return result;
}
int main(){
	int m,n,result;
	cout<<"請輸入連續兩個整數m,n，達成C m取n"<<endl;
	cout<<"您的m值為:";
	cin>>m;
	cout<<"您的n值為:";
	cin>>n;
	if(m==0 || n==0){
		cout<<"0";
	}
	else if(m>n){
		cout<<"C m取n為"<<f(m,n);	
	}
	else
	cout<<"m值不可小於n";
	
}
