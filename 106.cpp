//#include<iostream>//���j�禡 f(x)=f(x-1)*f(x-2)�Af(1)=1,f(0)=1
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
//#include<iostream>//�洫��ۦP���צr���}�C���ȡA��J��Ӧr��C�çQ�Ϋe�z���禡�洫��� 
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
//	cout<<"�п�J�r��a"<<endl;
//	cin>>a;
//	cout<<"�п�J�r��b"<<endl;
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
//	cout<<"�п�ܤU�C�ﶵ"<<endl;
//	cout<<"1. �W�[�ǥ͸��"<<endl;
//	cout<<"2. �d�߾ǥ͸��(��J�m�W���d��)"<<endl;
//	cout<<"3. ��ܯZ�Ŧ��Z��"<<endl;
//	cout<<"4. ���}"<<endl;
//	cout<<"�п��(1,2,3,4)"<<endl;
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
	cout<<"�п�J�ǥͩm�W"<<endl;
	cin>>newstudent.name;
	cout<<"�п�J�����Ҧ��Z"<<endl;
	cin>>newstudent.mid; 
	cout<<"�п�J�����Ҧ��Z"<<endl;
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
			cout<<"�ǥͩm�W:"<<student.name;
			cout<<"�����Ҧ��Z:"<<student.mid;
			cout<<"�����Ҧ��Z:"<<student.final; 
			break;
		}
	}
	if(!found){
		cout<<"�d�L���H"<<endl; 
	}
}
//void total_list(){
//	
//}
int list(){
	cout<<"�п�ܤU�C�ﶵ"<<endl;
	cout<<"1.�W�[�ǥ͸��"<<endl;
	cout<<"2.�d�ߩm�W"<<endl;
	cout<<"3.�Z���`���Z"<<endl;
	cout<<"4.���}"<<endl; 
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
	cout<<"���¨ϥΡA�q�Ы���"<<endl; 
	
}
