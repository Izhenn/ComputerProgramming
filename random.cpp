#include<stdlib.h>					//�üƲ��� 
#include<iostream>
#include<time.h> 				//�ɶ��禡 
using namespace std;
int main(){
	int rand();
	int rand1();
	srand(time(NULL));					//�A���̼Ʀr�i�H�ܤơA�����P�i�üƪ� 
	for(int i=1;i<5;i++){
		cout<<rand()<<endl;
		cout<<rand()%6+1<<endl;			//�D1~6 
	} 
} 
//���J�P 
//a=rand()%52;
//a%4;		//��� �l��0~3 
//a%13+1;		//�I�� �l��0~12
 

