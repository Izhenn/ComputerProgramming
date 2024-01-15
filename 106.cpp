//#include<iostream>//遞迴函式 f(x)=f(x-1)*f(x-2)，f(1)=1,f(0)=1
//using namespace std;
//int f(int x){
//	if(x==0 || x==1){
//		return 1;
//	}
//	else{
//		f(x-1)*f(x-2);
//	}
//}
//int main(){
//	int x;
//	cout<<"Please enter x value."<<endl;
//	cin>>x;
//	int result=f(x);
//	cout<<"The f("<<x<<") is "<<result<<endl;
//} 
//#include<iostream>//交換兩相同長度字元陣列的值，輸入兩個字串。並利用前述的函式交換其值 
//#include<cstring>
//using namespace std;
//void swap_array(char a[],char b[]){
//	swap(a,b);
//	cout<<a<<endl;
//	cout<<b<<endl;
//}
//int main(){
//	char a[20];
//	char b[20];
//	cout<<"請輸入字串a"<<endl;
//	cin>>a;
//	cout<<"請輸入字串b"<<endl;
//	cin>>b;
//	if(strlen(a)!=strlen(b)){
//		cout<<"false"<<endl; 
//	}
////	cout<<a<<endl;
////	cout<<b<<endl;
//	else{
//		swap_array(a,b);
//	}
//}
//#include<iostream>
//using namespace std;
//int mymenu() {
//	cout<<"請選擇下列選項"<<endl;
//	cout<<"1. 增加學生資料"<<endl;
//	cout<<"2. 查詢學生資料(輸入姓名做查詢)"<<endl;
//	cout<<"3. 顯示班級成績單"<<endl;
//	cout<<"4. 離開"<<endl;
//	cout<<"請選擇(1,2,3,4)"<<endl;
//	int a;
//	cin>>a;
//	return a;
//}
//int main(){
//	int x=1;
//	while(x!=4){
//		x=mymenu();
//	}
//}
#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
using namespace std;
struct student{
	string name;
	int mid;
	int final;
};
void add(vector<student>& students){
	student newstudent;
	cout<<"請輸入學生姓名"<<endl;
	cin>>newstudent.name;
	cout<<"請輸入期中考成績"<<endl;
	cin>>newstudent.mid; 
	cout<<"請輸入期末考成績"<<endl;
	cin>>newstudent.final;
	students.push_back(newstudent);
	cout<<"add success"<<endl;
}
void search(){
	string searchname;
	bool found=false;
	for(auto& const student : vector<student>){
		if(student.name==searchname){
			found=true;
			cout<<"學生姓名:"<<student.name;
			cout<<"期中考成績:"<<student.mid;
			cout<<"期末考成績:"<<student.final; 
			break;
		}
	}
	if(!found){
		cout<<"查無此人"<<endl; 
	}
}
//void total_list(){
//	
//}
int list(){
	cout<<"請選擇下列選項"<<endl;
	cout<<"1.增加學生資料"<<endl;
	cout<<"2.查詢姓名"<<endl;
	cout<<"3.班級總成績"<<endl;
	cout<<"4.離開"<<endl; 
	int a;
	cin>>a;
	return a;
}
int main(){
	vector<student> students;
	int x=0;
	do{
		x=list();
		if(x==1){
			add(students); 
		}	
		else if(x==2){
			search(students); 
		}
//		else if(x==3){
//			
//		}
	}while(x!=4);
	cout<<"謝謝使用，敬請指教"<<endl; 
	
}
