#include <iostream>



using namespace std;

int gcd (int num1, int num2){
	
	int ans;

for(int i=1; i <= num1 && i <= num2; i++){


     if(num1 % i == 0 && num2 % i == 0 ){

             ans = i;

   }

   
}  
return ans;
}


int main(){

int num1, num2;

cout << "Provide first number and second numbers: ";
cin >> num1 >> num2;

cout << "The Greatest Common Divisor of your numbers is: " << gcd(num1, num2);
	




return 0;
}