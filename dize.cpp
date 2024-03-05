//家览耏浑1000Ω–Ω翴琌常璶cout程coutせ贺翴计瞷诀瞯
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
	cout<<"翴计1诀瞯"<<p1/1000<<endl;
	cout<<"翴计2诀瞯"<<p2/1000<<endl;
	cout<<"翴计3诀瞯"<<p3/1000<<endl;
	cout<<"翴计4诀瞯"<<p4/1000<<endl;
	cout<<"翴计5诀瞯"<<p5/1000<<endl;
	cout<<"翴计6诀瞯"<<p6/1000<<endl; 
}
