#include <iostream>
#include <cmath>

using namespace std;


int num_squares(int list[], int size){
	
int oper = 0;
	
	for (int i = 0; i < size; i++){
		
		cout << "Provide number: ";
		cin >> list[i];
		
		oper += pow(list[i], 2);	
		
	}	
	cout << "The sum of the numbers squared is equal to: "  << oper;

}



int main(){

int size, list[size];

	cout << "Provide size of list: " ;
	cin >> size;
	

num_squares(list, size);

}