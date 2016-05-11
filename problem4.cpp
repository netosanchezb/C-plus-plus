#include <iostream>

using namespace std;

float promedio_lista (float d[], int size){

    float sum = 0;
	float aver;
	
		for (int i = 0; i < size; i++){
			
			sum += d[i];
			
		}
			aver = sum / size;
					
		return aver;
	}	



int main(){
	
	int size;
	float n[size];
	
	cout << "How many numbers in your list: " << endl;
	cin >> size;
	
	for (int i = 0; i < size; i++){
		
	 cout << "Provide a number: " << endl;
	 cin >> n[i];
	
	}
	
	 cout << "The average of your numbers is equal to: " << promedio_lista (n,size);



return 0;
}