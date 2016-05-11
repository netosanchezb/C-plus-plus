#include <iostream>

using namespace std;

double bm (double number){
	
	double error = 0.0001;
	double s = number;
	

	 while ((s - number/s) > error){
		
		s = (s + (number/s))/2;
		
		cout << "Intermidiate result: " << s << endl;
	 }
	 
	return s;
}


int main(){

double num;

cout << "Provide the value of the number: ";
cin >> num;

cout << "The square root of the number, according to the Babylonian method is: " << bm(num);

return 0;
}