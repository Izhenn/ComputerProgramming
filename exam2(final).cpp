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
	cout<<"�C�����I�Ƭ�:"<<player_dize<<endl;
	cout<<"�q���I�Ƭ�:"<<computer_dize<<endl;
	if(player_dize>computer_dize){
		cout<<"Ĺ�a:�C����"<<endl;
		cout<<"��a:�q��"<<endl;
	}
	else if(player_dize<computer_dize){
		cout<<"Ĺ�a:�q��"<<endl;
		cout<<"��a:�C����"<<endl;
	}
	else{
		cout<<"����"<<endl;
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
		cout<<"�C���̤�P��: "<<player_card<<" �®�"<<endl;
	}
	else if(player_color==3){
		cout<<"�C���̤�P��: "<<player_card<<" ����"<<endl; 
	}
	else if(player_color==2){
		cout<<"�C���̤�P��: "<<player_card<<" ���"<<endl; 
	}
	else if(player_color==1){
		cout<<"�C���̤�P��: "<<player_card<<" ����"<<endl;
	}
	
	if(computer_color==4){
		cout<<"�q����P��: "<<computer_card<<" �®�"<<endl;
	}
	else if(computer_color==3){
		cout<<"�q����P��: "<<computer_card<<" ����"<<endl;
	}
	else if(computer_color==2){
		cout<<"�q����P��: "<<computer_card<<" ���"<<endl; 
	}
	else if(computer_color==1){
		cout<<"�q����P��: "<<computer_card<<" ����"<<endl;
	}
	if(player_card>computer_card){
		cout<<"Ĺ�a: �C����"<<endl;
		cout<<"��a: �q��"<<endl;
	}
	else if(player_card<computer_card){
		cout<<"Ĺ�a: �q��"<<endl;
		cout<<"��a: �C����"<<endl;
	}
	else{
		if(player_color>computer_color){
			cout<<"Ĺ�a: �C����"<<endl;
			cout<<"��a: �q��"<<endl;
		}
		else if(player_color<computer_color){
			cout<<"Ĺ�a: �q��"<<endl;
			cout<<"��a: �C����"<<endl;
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
				cout<<"Game 1 ���椤"<<endl; 
				game1();
			}
			else if(select==2){
				cout<<"Game 2 ���椤"<<endl; 
				game2();
			}
		}
		else{
			break;
		}	
	}
	else{
		cout<<"�п�J0~2�����"<<endl;
	}
	}	
}
