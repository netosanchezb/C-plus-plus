#include <iostream>

using namespace std;

int n, fI = 0, fII = 1, f;

int fibonacci(int n){
for (int t = 1; t < n ; t++){
f = fI + fII ;
fI = fII;
fII = f;
}
return f;
}
int main(){
cout << "Provide the nth number of the Fibonacci list that you want to print: " << endl;
cin >> n;
cout << "Your number is: " << fibonacci(n);
}
