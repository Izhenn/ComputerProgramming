#include<iostream>
int main(){
	int money, cost_2000, cost_1000, cost_500, cost_200,
		cost_100, cost_50, cost_20, cost_10, cost_5, cost_1;
	
	std::cout << "Please enter money.";
	std::cin >> money;
	std::cout << "cost2000:" << money/2000 << \n;
	money %= 2000;
	std::cout << "cost1000:" << money/1000 ;
	money %= 1000;
	std::cout << "cost2000:" << money/2000 ;
	money %= 2000;
	std::cout << "cost2000:" << money/2000 ;
	money %= 2000;
	std::cout << "cost2000:" << money/2000 ;
	money %= 2000;
	std::cout << "cost2000:" << money/2000 ;
	money %= 2000;
	std::cout << "cost2000:" << money/2000 ;
	money %= 2000;
	std::cout << "cost2000:" << money/2000 ;
	money %= 2000;
	std::cout << "cost2000:" << money/2000 ;
	money %= 2000;
} 
