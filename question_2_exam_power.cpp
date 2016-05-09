#include <iostream>
#include <cmath>

// Ernesto Pablo SÃ¡nchez Bernal. A01630828

using namespace std;


	long superpower (long a, long b){
		
		long oper;
		
		oper = pow(a, b);
		
		return oper;	
							
	}



int main(){

	long num, p;
	
	cout << "Provide the number: " << endl;
	cin >> num;
	
	cout << "Provide the number of the power: " << endl;
	cin >> p;

	cout << "The power of " << num << " to the " << p << " is equal to: " << superpower(num,p);
	
return 0;
}
