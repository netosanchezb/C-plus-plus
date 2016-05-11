#include <iostream>

using namespace std;

int fibonacci(int n ){

int first_n = 0, second_n =1, nth_number;

if (n == 1){
	return n;
} else if (n == 0){
	return n;
} else{


for (int i = 1; i < n; i++){
	
	nth_number = first_n + second_n;
	
	first_n = second_n;
	second_n = nth_number;
	
}
	return nth_number;
}
	}



int main(){

	int n;
	
	cout << "Provide the N number of the Fibonacci series: " ;
	cin >> n;
	
	cout << "The Nth number is: " << fibonacci(n);
	




}