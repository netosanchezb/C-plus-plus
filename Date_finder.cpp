#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>


using namespace std;

int date_finder (int y, int m, int day){
	
	string date;
	
	int d = (day + y + (y/4) - (y/100) + (y/400) + ((31*m)/12))%7 ;
		
	return d;		
}

int leap_year (int y){
	
	int leapo;
	
	if ((y%4 == 0) && (y%100 == 0) && (y%400 == 0)){
		
		cout << endl << y << " is a leap year " << endl;
		leapo = 1;
	} else if ((y%4 == 0) && (y%100 != 0)){
		
		cout << endl << y << " is a leap year" << endl;
		leapo = 1;
	} else {
	
		cout << endl << y << " is not a leap year" << endl;
		leapo = 0;
		}
		
		return leapo;
}

int leap_list (int y) {
	
	int real_leap;
	
	for (int i = y; i <= (y + 100); i++){
		
		//cout << endl << leap_year (i) << endl;
		if (leap_year (i) == 1){
			
			real_leap = i;			
			cout << endl << "The year " << real_leap  << " is a leap year" << endl;		
		}		
	}
		return real_leap;
}

int year_information (int year_info){
	
	if (year_info == 1904) 
			cout << endl <<"Russo-Japanes War begins" << endl;
		else if (year_info == 1908)
			cout << endl <<"Earthquake and resulting tsunami kill 70,000 to 100,000 in southern Italy and Sicily." << endl;
		else if (year_info == 1912)
			cout << endl <<"The Titanic sinks. 3000 dead." << endl;
		else if (year_info == 1916)
			cout << endl <<"Pershing fails in raid into Mexico in quest of rebel Pancho Villa." << endl;
		else if (year_info == 1920)
			cout << endl <<"Treaty of Sèvres dissolves Ottoman Empire" << endl;
		else if (year_info == 1924)
			cout << endl <<"Death of Lenin; Stalin wins power struggle, rules as Soviet dictator until death in 1953." << endl;
		else if (year_info == 1928)
			cout << endl <<"Alexander Fleming discovers penicillin." << endl;
		else if (year_info == 1932)
			cout << endl <<"Nazis lead in German elections with 230 Reichstag seats. " << endl;
		else if (year_info == 1936)
			cout << endl <<"Spanish civil war begins." << endl;
		else if (year_info == 1940)
			cout << endl <<"Hitler invades Denmark, the Netherlands, Belgium, France, and Luxembourg." << endl;
		else if (year_info == 1944)
			cout << endl <<"Scientists at Harvard University construct the first automatic, general-purpose digital computer." << endl;
		else if (year_info == 1948)
			cout << endl <<"Gandhi assassinated in New Delhi by a Hindu militant (Jan. 30)." << endl;
		else if (year_info == 1952)
			cout << endl <<"George VI of England dies; his daughter becomes Elizabeth II (Feb. 6)." << endl;
		else if (year_info == 1956)
			cout << endl <<"Elvis Presley emerges as one of the world's first rock stars." << endl;
		else if (year_info == 1960)
			cout << endl <<"Senegal, Ghana, Nigeria, Madagascar, and Zaire (Belgian Congo) gain independence." << endl;
		else if (year_info == 1964)
			cout << endl <<"Nelson Mandela sentenced to life imprisonment in South Africa (June 11)." << endl;
		else if (year_info == 1968)
			cout << endl <<"American soldiers massacre 347 civilians at My Lai." << endl;
		else if (year_info == 1972)
			cout << endl <<"Britain takes over direct rule of Northern Ireland in bid for peace." << endl;
		else if (year_info == 1976)
			cout << endl <<"19-month civil war ends in Lebanon after threatening to escalate to global level." << endl;
		else if (year_info == 1980)
			cout << endl <<"John Lennon of the Beatles shot dead in New York City." << endl;
		else if (year_info == 1984)
			cout << endl <<"Italy and Vatican agree to end Roman Catholicism as state religion." << endl;
		else if (year_info == 1988)
			cout << endl <<"NASA scientist James Hansen warns congress of the dangers of the global warming and the greenhouse effect" << endl;
		else if (year_info == 1992)
			cout << endl <<"Bush and Yeltsin proclaim a formal end to the Cold War " << endl;
		else if (year_info == 1996)
			cout << endl <<"France agrees to end nuclear testing " << endl;
		else if (year_info == 2000)
			cout << endl <<"Vicente Fox Quesada elected president of Mexico, ending 71 years of one-party rule by the Institutional Revolutionary Party" << endl;
		else if (year_info == 2004)
			cout << endl <<"Spain is rocked by terrorist attacks, killing more than 200." << endl;
		else if (year_info == 2008)
			cout << endl <<"Cuban president Fidel Castro, who temporarily handed power to his brother Raúl in July 2006 when he fell ill, permanently steps down after 49 years in powe" << endl;
		else if (year_info == 2012)
			cout << endl <<"The UN General Assembly upgrades the status of the Palestinian Authority from current observer to non-member state. " << endl;
		else if (year_info == 2016)
			cout << endl <<"Terrorist attacks on Belgium." << endl;
		
		
		else cout << "The year you provided is not within the list of leap years from 1900 to 2016" << endl;
	
	
}
int main(){

string ans, ans1, ans2, ans3, ans4, ans5, ans6, ans7;
string info, file_name;
int year, month, day, dow, lp, ll, year_info;
int leap_ar [] = {1904, 1908, 1912, 1916, 1920, 1924, 1928, 1932, 1936, 1940, 1944, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016};

cout << endl << "This program finds the day of the week (ex: Monday, Friday) of any date you provide.\nYou can also create a text document with the date as a title and\nwrite anything you want inside! " << endl;
cout << endl <<  "Please feel free to try it!!" << endl ;
cout << endl << "Credit for the equation used in this program goes to:\n http://www.tondering.dk/claus/cal/chrweek.php#calcdow" << endl;
cout << endl << "Credit for the info on leap years goes to http://www.infoplease.com/yearbyyear.html" << endl;

do{
do{

cout << endl << "Provide the year of the date you are looking for: " << endl;
cin >> year;
cout << "Provide the month (in numbers) of the date you are looking for: " << endl;
cin >> month;
	
cout << "Provide the day of the date you are looking for: " << endl;
cin >> day;

 if(month > 12 || day > 31 )
		
	cout << endl << "Please make sure the value for month or day is correct" << endl;

int a = ((14 - month)/12);
int y = (year - a); 
int m = (month + (12 *a) - 2); 


dow = date_finder (y, m, day);
	
} 
while (month > 12 || day > 31 ); //WHERE TO ADD ERROR MESSAGE
 

		lp = leap_year (year);
		dow;  //Calling the function		
		

		if (dow == 0){
			cout << endl << " ATTENTION: The day you are looking for is a Sunday" << endl;
			file_name = "sunday.txt"; //HOW TO ADD MONTH AND YEAR VARIABLES IN THE FILE NAME??
		} else if (dow == 1){
			cout << endl <<" ATTENTION: The day you are looking for is a Monday" << endl;
			file_name = "monday.txt";
		} else if (dow == 2){
			cout << endl <<" ATTENTION: The day you are looking for is a Tuesday" << endl;
			file_name = "tuesday.txt";
		}else if (dow == 3){
			cout << endl <<" ATTENTION: The day you are looking for is a Wednesday" << endl;
			file_name = "wednesday.txt";
		}else if (dow == 4){
			cout << endl <<" ATTENTION: The day you are looking for is a Thursday" << endl;	
			file_name = "thursday.txt";
		}else if (dow == 5){
			cout << endl <<" ATTENTION: The day you are looking for is a Friday" << endl;
			file_name = "friday.txt";
		}else if (dow == 6){
			cout << endl <<" ATTENTION: The day you are looking for is a Saturday" << endl;
			file_name = "saturday";}
	
	
	
	
	
		// if (lp == 1)
			// ans3 = "";
		// else if (lp == 0)
			// ans3 == "not";
		
		// cout << year << " IS " << ans3 << " A LEAP YEAR" << endl;
		
		// int n = 0;
		// string hello = string(itoa(n))
		
		//file_name = file_name + string(month) + day + year + ".txt";

	
	 cout << endl << "Do you want to display a list of years from your chosen year to 100 years later?" << endl;
	 cin >> ans7;
	 
	 if (ans7 == "yes"){
	 cout << endl << "THE FOLLOWING LIST DISPLAYS A LIST OF YEARS\nFROM YOUR CHOSEN YEAR TO 100 YEARS LATER: " << endl;	 
	 ll = leap_list (year);	
	 }
	 
	 do{
	  cout << endl << "Do you want to know cool info about a particular leap year? (From 1900 to 2016) (Write explicitly <yes> or <no>)" << endl;
	  cin >> ans2; 
	 
	 if (ans2 != "yes" && ans2 != "no")
		 cout << endl << "Please answer yes or no, explicitly" << endl;
	 
	 } while (ans2 != "yes" && ans2 != "no");
	 
	 if (ans2 == "yes"){
		
		cout << endl << "Do you want to see a list of leap years from 1900 to 2016?" << endl;
		cin >> ans5;
		
		if (ans5 == "yes"){
		 for (int i = 0; i <= 28; i++){     //USE OF ARRAYS TO DISPLAY LIST OF LEAP YEARS
			
			cout << endl << leap_ar [i] << endl;
		 }
		 }
		
		do{
		cout << endl << "Write the year you want information from: " << endl;
		cin >> year_info;

		year_information (year_info);
		
		cout << endl << "Do you want to try another year? " << endl;
		cin >> ans4;
		}while (ans4 == "yes");
		 
	 }
	 
	 do{
	 cout << endl << "Do you want to create a new document with this date as a title? (Write explicitly <yes> or <no>)" << endl;
	 cin >> ans; 
	  
	  if (ans != "yes" && ans2 != "no")
		 cout << endl << "Please answer yes or no, explicitly" << endl;
	 
	 } while (ans != "yes" && ans2 != "no");
	

	if (ans == "yes"){
	
	cout << endl <<  "Do you want to name your file by a name yoy choose?" << endl;
	cin >> ans6;
	
	if (ans6 == "yes"){
		
		cout << "How do you want to name your file? (.txt)";
		cin >> file_name;
		
	}
	
	
	
	cout << "What information do you want to write on the document? " << file_name  << "?" << endl;
	cin >> info;
	//getline (cin, info);   FOR SOME REASON GETLINE IS NOT WORKING. WHY???
	
		
		ofstream date_file (file_name.c_str());		//NAMES THE FILE 
		
		if (date_file.is_open()){
		cout << endl << "A file with the information you provided was just created in this same directory" << endl;
		} else 
			cout << "There was a problem creating the file" << endl;
		
		date_file << info;
		date_file.close();
		
	} else 
		
	do {
	cout << "Do you want to look for another date? "  << endl;
	cin >> ans1;
	
	 if (ans1 != "yes" && ans2 != "no")
		 cout << endl << "Please answer yes or no, explicitly" << endl;
	 
	 } while (ans1 != "yes" && ans2 != "no");
	
	
	cout << endl << "Thanks for using this program!" << endl;
}	while (ans1 == "yes");
	
		
		return 0;
}
