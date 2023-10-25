#include<iostream>
using namespace std;
int main(){
	int money,price_2000,price_1000,price_500,price_200,price_100,price_50,price_20,price_10,price_5,price_1;
	cout<<"Please enter the money."<<endl;
	cin >> money;
	price_2000=money/2000;
	price_1000=(money-2000*price_2000)/1000;
	price_500=(money-2000*price_2000-1000*price_1000)/500;
	price_200=(money-2000*price_2000-1000*price_1000-500*price_500)/200;
	price_100=(money-2000*price_2000-1000*price_1000-500*price_500-200*price_200)/100;
	price_50=(money-2000*price_2000-1000*price_1000-500*price_500-200*price_200-100*price_100)/50;
	price_20=(money-2000*price_2000-1000*price_1000-500*price_500-200*price_200-100*price_100-50*price_50)/20;
	price_10=(money-2000*price_2000-1000*price_1000-500*price_500-200*price_200-100*price_100-50*price_50-20*price_20)/10;
	price_5=(money-2000*price_2000-1000*price_1000-500*price_500-200*price_200-100*price_100-50*price_50-20*price_20-10*price_10)/5;
	price_1=(money-2000*price_2000-1000*price_1000-500*price_500-200*price_200-100*price_100-50*price_50-20*price_20-10*price_10-5*price_5)/1;
	cout<<"You will have "<<price_2000<<" NT$2000."<<endl;
	cout<<"You will have "<<price_1000<<" NT$1000."<<endl;
	cout<<"You will have "<<price_500<<" NT$500."<<endl;
	cout<<"You will have "<<price_200<<" NT$200."<<endl;
	cout<<"You will have "<<price_100<<" NT$100."<<endl;
	cout<<"You will have "<<price_50<<" NT$50."<<endl;
	cout<<"You will have "<<price_20<<" NT$20."<<endl;
	cout<<"You will have "<<price_10<<" NT$10."<<endl;
	cout<<"You will have "<<price_5<<" NT$5."<<endl;
	cout<<"You will have "<<price_1<<" NT$1."<<endl;
	
} 
