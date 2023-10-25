#include<iostream>
using namespace std;
int main(){
	int grade;
	cin>>grade;
	bool test = false;
	switch(grade)
	{
		case 90 ... 100:
			cout<<"出國"<<endl;
		case 80 ... 89:
			cout<<"環台"<<endl;
		case 60 ... 79:
			cout<<"國北一日遊"<<endl;
		default:
			cout<<"在家讀書"<<endl; 
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
