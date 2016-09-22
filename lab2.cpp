#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

double problem1(double num){
	cout<<"Enter number to round off: ";
	cin>>num;
	cout<<"Rounded value: "<<round(num)<<"\n\n"<<endl;

}

void problem2(){
	int uniques [10];
	int MAX = 20;
	int Min = 1;
	int num1; 
	bool check = true; 
	
	srand(time(NULL)); 
	cout << "10 unique numbers:  ";	
	
	for (int i=0;i<10;i++){	
	do{
    	num1=rand()%MAX+Min;
    	check = true;
   		 for (int j=0;j<i;j++)
   		     if (num1 == uniques[j]) {
           	 check = false; 
             break; 
        }
    } while (!check); 
	uniques[i]=num1;
	cout << num1 << " ";
	}	
}

void call_by_value(){
	int n, result=1;
	cout<<"\n\n\nEnter a number to get the factorial of: ";
	cin>>n;
	for(int i=1;i<n+1;i++) {
		if(n==0) cout<<"The factorial of " << n << " is: 1";
		else result=result*i;
	}
	cout<<"The factorial of " << n << " is: "<<result<<endl;
}

main(){
	double num;
	int result;
	problem1(num);
	problem2();
	call_by_value();
}
