#include <iostream>

using namespace std;

 float smallest_of_four(float nume[], int size){
	
	float min = nume [0];
	
	for (int i = 1; i < size; i++){
	
		if (nume[i] < min){
			min = nume [i];
		}
}	
		return min;	
}


int main (){

int size = 4;
float num[size];

for (int i = 0; i < size; i++){
	
	cout << "Provide the number: " ;
	cin >> num[i];
	
}

cout << "The smallest number is: " << smallest_of_four(num, size);

return 0;
}
