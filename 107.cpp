//#include<iostream>		//遞迴 
//using namespace std;
//double f(int a){
//	double b;
//	if(a==0){
//		return 1;
//	}
//	else{
//		b=((1.0*a)/(a+1))*f(a-1);
//		return b;
//	}
//}
//int main(){
//	int x;
//	cout<<"Please enter x value"<<endl;
//	cin>>x;
//	double result=f(x);
//	cout<<"The f("<<x<<") is "<<result;
//} 

//#include<iostream>		//比較兩陣列是否相同 
//using namespace std;
//bool boolcompArray(int a[],int b[]){
//	for(int i=0;i<6;i++){
//		if(a[i] != b[i]){
//			return false;
//		}
//	}
//	return true;
//}
//int main(){
//	int x[5];
//	int y[5];
//	cout<<"請輸入兩串5個整數來比較是否相同"<<endl;
//	for(int i=0;i<5;i++){
//		cin>>x[i];
//	} 
//	for(int i=0;i<5;i++){
//		cin>>y[i];
//	}
//	if(boolcompArray(x,y)){
//		cout<<"兩陣列相同"<<endl; 
//	}
//	else{
//		cout<<"兩陣列不同"<<endl; 
//	}
//}

//#include<iostream> 	//生成兩串亂數，加總 
//#include<stdlib.h>
//#include<time.h>
//using namespace std;
//int main(){
//	int rand();
//	int rand1();
//	long long int num1=0,num2=0;
//	srand(time(NULL));
//	for(int i=0;i<30;i++){
//		num1=num1 *10 + rand()%10;
//	}
//	for(int i=0;i<30;i++){
//		num2=num2 *10 + rand()%10;
//	}
//	cout<<num1<<endl;
//	cout<<num2<<endl;
//	cout<<num1+num2;
//}


