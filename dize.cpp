//�����Y��l1000���A�C�@�����I�O���ncout�A�̫�Acout�����I�ƥX�{�����v�C
#include<stdlib.h>
#include<iostream>
#include<time.h>
using namespace std;
int main(){
	int rand();
	srand(time(NULL));
	int a;
	float p1=0,p2=0,p3=0,p4=0,p5=0,p6=0;
	for(int i=1;i<=1000;i++){
		a=rand()%6+1;
		cout<<a<<endl;
		if(a==1){
			p1+=1;
		}
		else if(a==2){
			p2+=1;
		}
		else if(a==3){
			p3+=1;
		}
		else if(a==4){
			p4+=1;
		}
		else if(a==5){
			p5+=1;
		}
		else if(a==6){
			p6+=1;
		}
	}
	cout<<"�I��1�����v��"<<p1/1000<<endl;
	cout<<"�I��2�����v��"<<p2/1000<<endl;
	cout<<"�I��3�����v��"<<p3/1000<<endl;
	cout<<"�I��4�����v��"<<p4/1000<<endl;
	cout<<"�I��5�����v��"<<p5/1000<<endl;
	cout<<"�I��6�����v��"<<p6/1000<<endl; 
}
