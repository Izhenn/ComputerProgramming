#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
	float b=0.3;
	cout<<3*0.1<<b<<endl;
	cout<<((float)(3*0.1)==b)<<endl;
	//cout << typeid(3 * 0.1).name();
} 
