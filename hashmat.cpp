#include<iostream>
#include <stdlib.h>
using namespace std;


int main()
{
	int i, x, y,  z;
	cout <<"Enter the number of soldiers in Hashmat's army and his opponent's army: "<<endl;

	for (int i=1; i<=3; i++)
	{	
		for(z=1; z<=3; z++)		
		if(i<=2^36){
			cin>>x>>y;
			z= x - y;
		    cout<<z<<endl;
						}	
		
	}	
	return 0;
}	

	

