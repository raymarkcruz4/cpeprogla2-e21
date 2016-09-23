// Cruz, Raymark N.  E21

#include <iostream>
#include<cstring>
using namespace std;

const char* yo(const char* str){
  //return strlen(str);
  return str;
}
  char str1[100];
  char str2[100];
  char str3[100];
  int result, a, n, m;


void problem1(){ 
	cout << "Problem #1 String Compare"<<endl;
	cout<<"Enter first string: ";
	cin>>str1;
	cout<<"Enter second string: ";
	cin>>str2;
	switch(strcmp(str1,str2)){
  	case -1:
  		cout<<"Negative";
  		break;
  	case 0:
	  	cout<<"Equal";
	  	break;
	case 1:
		cout<<"Positive";	  	
  		break;
  	}
  	cout<<endl<<endl;
  }
  
const char* outputString(char* str1,char* str2){
	strcpy(str1,str2);
  return str1;
}

void problem2(){
	cout<<"Problem #2 String Copy"<<endl;
	cout<<"Enter first string: ";
	cin>>str1;
	cout<<"Enter second string: ";
	cin>>str2;
	cout<<"New string value of str1: "<<outputString(str1,str2)<<endl<<endl;
}

const char* customStrCat(char* str1, char* str2){
	strcat(str1,str2);
	return str1;
}

void problem3(){
	cout<<"Problem #3 String Concatenation"<<endl;
	cin.ignore();
	cout<<"Enter a first string: ";
	gets(str1);
	cout<<"Enter second string: ";
	gets(str2);
	cout<<"New string value for str1: "<<strcat(str1, str2)<<endl<<endl;
}

void problem4(){
	cout<<"Problem #4 Palindrome"<<endl;
	cout<<"Enter a word: ";
	gets(str1);
	n=strlen(str1);
	for(int i=0;i<n;i++) {
	if(str1[i]!=str1[n-(i+1)]) m=0;
	else m=1;
    }
    if (m==1) cout<<"The word "<<str1<<" is a palindrome.";
    else if (m==0) cout<<"The word "<<str1<<" is not a palindrome."<<endl<<endl;
}

void problem5(){
	cout <<"Problem #5 Capitalization"<<endl;
	cout<<"Enter some string: ";
	gets(str1);
	strlwr(str1);
	str1[0]-=32;
	for(int i=0;i<strlen(str1);i++) {
	if(str1[i]==32) str1[i+1]-=32;
	}
	cout<<str1<<endl;
	cout<<endl<<endl;
}

void problem6(){
	cout<<"Problem #6 Reverse Vertical Order"<<endl;
	cout<<"Enter a string: ";
	gets(str1);
	n=strlen(str1);
	for(int i=n;i>=0;i--) {
	if (str1[i]==32) {
	int j=i+1;
	while(str1[j]!=32&&j<n) {
	cout<<str1[j];
	j++;
	}
	cout<<endl;
	}
	}
	int k=0;
	while(str1[k]!=32) {
	cout<<str1[k];
	k++;
}
}


main(){
	problem1();
	problem2();
	problem3();
	problem4();
	problem5();
	problem6();
}
