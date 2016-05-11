#include <iostream>
#include <cmath>

using namespace std;

	int distance (int x1, int x2, int y1, int y2){
				
		int oper = sqrt (pow ((x2 - x1),2) + pow ((y2 - y1),2)  );
		
		return oper;
	}
	
int main(){
	
	int x1, x2, y1, y2;

	cout << "Provide first x1, x2, y1, and y2 coordinates, in that order: " << endl;
	cin >> x1 >> y1 >> x2 >> y2;
	
	cout << "The distance between the points is equal to: " << distance(x1,x2,y1,y2);

return 0;
}