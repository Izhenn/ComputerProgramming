#include<stdlib.h>					//亂數產生 
#include<iostream>
#include<time.h> 				//時間函式 
using namespace std;
int main(){
	int rand();
	int rand1();
	srand(time(NULL));					//括號裡數字可以變化，取不同張亂數表 
	for(int i=1;i<5;i++){
		cout<<rand()<<endl;
		cout<<rand()%6+1<<endl;			//求1~6 
	} 
} 
//撲克牌 
//a=rand()%52;
//a%4;		//花色 餘數0~3 
//a%13+1;		//點數 餘數0~12
 

