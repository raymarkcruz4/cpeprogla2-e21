// cruz

#include<iostream>
#include<iomanip>
using namespace std;

int i, j; 
float grade;
char p;


struct Srecord{
	int id;
	char name[30];
	struct Quizzes{
		float quiz;
	};
 Quizzes quizzes[3];
};

void NewLine(){
	char s;
	do{cin.get(s);}while(s!='\n');
}


int main(){
	Srecord ci[5];
	cout<<"Enter 5 Student<s> Record"<<endl;
	for (i=0; i<5; i++){
		cout<<"\nStudent "<<(i+1)<<endl;
		cout<<"ID: ";
		cin>>ci[i].id;
		NewLine();
		cout<<"Student Name: ";
		cin.getline(ci[i].name, 49);
		cout<<"Grades: ";
		for(j=0;j<3;j++){	
			cin>>ci[i].quizzes[j].quiz;	
		}
}
	cout << setw(5) << "No."
	<< setw(15)<<"Student No"
	<< setw(20)<<"Name"
	<< setw(10)<<"Grade"
	<< setw(10)<<"Remark";
	

	
	for(int i=0; i<5; i++){
		grade=0;
		for(j=0;j<3;j++){
		grade+=ci[i].quizzes[j].quiz;
		}
		cout<<endl;
		cout<<setw(5)<<i+1
		<<setw(15)<<ci[i].id
		<<setw(20)<<ci[i].name;
		cout<<setw(10)<<setprecision(4)<<grade/3<<setw(10);
		if( grade/3>=75 ){
			cout<<"Passed";
			}
			else{
			cout<<"Failed";
			}
		}
		cout<<endl;
		system ("pause");
		
	
	}
	
	
