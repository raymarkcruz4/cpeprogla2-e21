#include<iostream>
#include<fstream>
using namespace std;
int main(){
	 ifstream f("input.txt");
	 int input;
	 while(f >> input){
	 		if(input%3==0 && input%5==0){
	 			cout<<"FizzBuzz"<<endl;
	 }
	 		else if(input%3==0){
	 			cout<<"Fizz"<<endl;
	 }
	 		else if (input%5==0){
	 			cout<<"Buzz"<<endl;
	 }
	 		else{
	 			cout<<input<<endl;
	 }
	 }
	 system("pause");
	 return 0;
}
