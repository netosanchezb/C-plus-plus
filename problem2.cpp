#include <iostream>

using namespace std;
	
	int pyramid (int size){
	
	
		for (int i = 1; i <= size; i++){
			
			for (int n = 1; n <= i; n++ ){				
			
			cout << "T";
			
			}
				cout << endl;
		}
		for (int x = size; x >=0; x --){
	
		for (int y = 1; y <= x; y++){
			
			cout << "T";
	
		}	
			cout << endl;
		}	
	}
	
	
	
int main(){

	int size;	
		
	cout << "Provide the max number of Ts: ";
	cin >> size;
	
	pyramid (size);
	
return 0;
}