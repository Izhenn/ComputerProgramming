#include<iostream>
using namespace std;
int main(){
	int grade;
	cin>>grade;
	bool test = false;
	switch(grade)
	{
		case 90 ... 100:
			cout<<"�X��"<<endl;
		case 80 ... 89:
			cout<<"���x"<<endl;
		case 60 ... 79:
			cout<<"��_�@��C"<<endl;
		default:
			cout<<"�b�aŪ��"<<endl; 
	}
	
	switch (test) {
		case true:
			cout << "ok";
			break;
		case false:
			cout << "no";
			break;
	}
}
