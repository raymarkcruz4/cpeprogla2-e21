#include<iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main(){
    ifstream f("input.txt");
    
    int sum=0, num;
    
    while (f >> num) {
    }
       for (int a=0; a<num; a++){ 
	   if((a%5==0)||(a%3==0)){
	   	sum+= a;
	   }    
    }
    cout << sum << endl;
    //fclose(f);
    system("pause");
    return 0;
}   

