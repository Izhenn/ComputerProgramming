#include<stdlib.h>
#include<iostream>
#include<time.h>
using namespace std;
int main(){
	int rand();
	int value;
	float p1=0,p2=0,p3=0,p4=0,p5=0,p6=0;
	srand(time(NULL));
	for(int i=1;i<=1000;i++){
		value=rand()%9+1;
		if(value==1){
			p1+=1;
			cout<<"1"<<endl;	
		}
		else if(value==2){
			p2+=1;
			cout<<"2"<<endl;
		}
		else if(value==3){
			p3+=1;
			cout<<"3"<<endl;
		}
		else if(value==4){
			p4+=1;
			cout<<"4"<<endl;
		}
		else if(value==5){
			p5+=1;
			cout<<"5"<<endl;
		}
		else if(value>=6){
			p6+=1;
			cout<<"6"<<endl;
		}
	}
	cout<<"�I��1�����v��"<<p1/1000<<endl;
	cout<<"�I��2�����v��"<<p2/1000<<endl;
	cout<<"�I��3�����v��"<<p3/1000<<endl;
	cout<<"�I��4�����v��"<<p4/1000<<endl;
	cout<<"�I��5�����v��"<<p5/1000<<endl;
	cout<<"�I��6�����v��"<<p6/1000<<endl;
}
