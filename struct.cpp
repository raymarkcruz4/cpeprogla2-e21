// Cruz

#include <iostream>
using namespace std;

struct Name{
       char lastName[30];
       char firstName[30];
       char prodName[15];
       int contact;
};

struct Date{
	int day;
	int month;
	int year;
};

struct Item{
		Date date;
    	int id;
    	Name name;
    	double price;   
		int quan;    
};




int main(){
    Item it;
    for(int i=1; i<4; i++){
    cout << "Customer Information:" << i <<"\n";
    cout << "First Name: ";
    cin.getline(it.name.firstName, 29);
    cout << "Last Name: ";
    cin.getline(it.name.lastName, 29);
    cout << "Contact No: ";
    cin >> it.name.contact;
    cout<< "Order Date:"<<endl;
    cout<< "Day: ";
    cin >> it.date.day;
    cout<< "Month: ";
    cin>> it.date.month;
    cout<< "Year: ";
    cin>> it.date.year;
    cout<< "Enter 3 Items: \n\n";
	for(int i=1; i<4; i++){
	    cout << "ID: ";
	    cin >> it.id;
		cout <<"Name: " ;
		cin >> it.name.prodName;
		cout <<"Price: " ;
		cin >> it.price;
		cout <<"Quantity: " ;
		cin >> it.quan;
		cout <<"\n";
	}
	cin.ignore();
}



system("pause > 0");
    return 0;   
}

