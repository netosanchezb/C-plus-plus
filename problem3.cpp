#include <iostream>

using namespace std;

int factorial(int n){
	
	if (n == 1)
		return n;
			else
				return n * factorial (n -1);	
			
}



int main(){
	
	int n;
	
	cout << "Provide the value for n: ";
	cin >> n;
	
	cout << factorial(n);



return 0;
}