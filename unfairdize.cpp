//模擬擲一顆不公平的骰子1000次，該顆骰子出現6點的機率是1/2，
//其餘點數的出現機率是1/10，輸出每一次擲骰子的結果，最終輸出每一點的出現機率。
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
	cout<<"點數1的機率為"<<p1/1000<<endl;
	cout<<"點數2的機率為"<<p2/1000<<endl;
	cout<<"點數3的機率為"<<p3/1000<<endl;
	cout<<"點數4的機率為"<<p4/1000<<endl;
	cout<<"點數5的機率為"<<p5/1000<<endl;
	cout<<"點數6的機率為"<<p6/1000<<endl;
}
