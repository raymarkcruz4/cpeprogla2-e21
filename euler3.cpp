#include<iostream>
#include <fstream>
using namespace std;

int main(){
	int i, num, sum=0;
	ifstream f("input.txt");
	FILE *fp;
	fp = fopen ("input.txt", "r");
	
	if(!fp){
		cout << "Cannot open file"<<endl;
		system ("pause");
		exit(1);
	}
	while (f >> num);
		
	
	for (i=0; i < num; i++){
		if (i%3==0 || i%5 ==0)
		sum += i;
		
	}
	cout << sum<<endl;
	return 0;
}
