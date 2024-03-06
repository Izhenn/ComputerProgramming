#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<cstring>
using namespace std;
int menu(){
	cout<<"   Menu for Simulation"<<endl;
	cout<<"1. Game 1"<<endl;
	cout<<"2. Game 2"<<endl;
	cout<<"0. Exit"<<endl;
	cout<<"Please Select one"<<endl;
	int a;
	cin>>a;
	return a;
}
void game1(){
	int rand();
	srand(time(NULL));
	int player_dize=rand()%6+1;
	int computer_dize=rand()%6+1;
	cout<<"遊戲者點數為:"<<player_dize<<endl;
	cout<<"電腦點數為:"<<computer_dize<<endl;
	if(player_dize>computer_dize){
		cout<<"贏家:遊戲者"<<endl;
		cout<<"輸家:電腦"<<endl;
	}
	else if(player_dize<computer_dize){
		cout<<"贏家:電腦"<<endl;
		cout<<"輸家:遊戲者"<<endl;
	}
	else{
		cout<<"平手"<<endl;
	}
}
void game2(){
	int player_card=rand()%13+1;
	int computer_card=rand()%13+1;
	int player_color;
	int computer_color=0;
	if(player_card!=computer_card){
		player_color=rand()%4+1;
		computer_color=rand()%4+1;
	}
	else{
		player_color=rand()%4+1;
		while(player_color==computer_color || computer_color==0){
			computer_color=rand()%4+1;
		}
	}
	if(player_color==4){
		cout<<"遊戲者手牌為: "<<player_card<<" 黑桃"<<endl;
	}
	else if(player_color==3){
		cout<<"遊戲者手牌為: "<<player_card<<" 紅心"<<endl; 
	}
	else if(player_color==2){
		cout<<"遊戲者手牌為: "<<player_card<<" 方塊"<<endl; 
	}
	else if(player_color==1){
		cout<<"遊戲者手牌為: "<<player_card<<" 梅花"<<endl;
	}
	
	if(computer_color==4){
		cout<<"電腦手牌為: "<<computer_card<<" 黑桃"<<endl;
	}
	else if(computer_color==3){
		cout<<"電腦手牌為: "<<computer_card<<" 紅心"<<endl;
	}
	else if(computer_color==2){
		cout<<"電腦手牌為: "<<computer_card<<" 方塊"<<endl; 
	}
	else if(computer_color==1){
		cout<<"電腦手牌為: "<<computer_card<<" 梅花"<<endl;
	}
	if(player_card>computer_card){
		cout<<"贏家: 遊戲者"<<endl;
		cout<<"輸家: 電腦"<<endl;
	}
	else if(player_card<computer_card){
		cout<<"贏家: 電腦"<<endl;
		cout<<"輸家: 遊戲者"<<endl;
	}
	else{
		if(player_color>computer_color){
			cout<<"贏家: 遊戲者"<<endl;
			cout<<"輸家: 電腦"<<endl;
		}
		else if(player_color<computer_color){
			cout<<"贏家: 電腦"<<endl;
			cout<<"輸家: 遊戲者"<<endl;
		}
	}
}
int main(){
	int select;
	while(true){
		select=menu();
		if(select<=2 && select>=0){
		if(select!=0){
			if(select==1){
				cout<<"Game 1 執行中"<<endl; 
				game1();
			}
			else if(select==2){
				cout<<"Game 2 執行中"<<endl; 
				game2();
			}
		}
		else{
			break;
		}	
	}
	else{
		cout<<"請輸入0~2的整數"<<endl;
	}
	}	
}
