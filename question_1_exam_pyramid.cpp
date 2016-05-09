#include <iostream>

// Ernesto Pablo SÃ¡nchez Bernal. A01630828

using namespace std;

int triangle (int x){
	
	for (int n = 1; n <= x ; n++){
	
		for (int i = 1; i <= n; i++){
			
			cout << "*";				
		}
		cout <<  endl;	
	}
	for (int n = x; n >= 0 ; n--){ 
	
		for (int i = 1; i <= n; i++){
			
			cout << "*";				
		}
		cout <<  endl;	
	}
	
}
