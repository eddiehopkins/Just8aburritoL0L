//Programmer: Edward Hopkins
//Date last Updates 05/28/2016
//version number -----
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int findAge (); 
int findWeight (); 
int findHeight (); 
int menuselect ();
char findSex ();
double findBMR (int, int, int, char); 


int main()
{
	double age, weight, height;
	char sex;
	bool validcheck;
	int menuchoice;
	
	while (true)
	{
	menuchoice = menuselect ();
	cout << endl;
	if (menuchoice == 1)
	{
	
	cout << "Welcome to the Basal Metabolic Rate (BMR) Calculator!" << endl
		 << "In this application you will enter" << endl
		 << "your age, weight and height to calculate your BMR!" << endl
		 << "Weight is calculated in pounds and height in inches." << endl 
		 << endl << endl
		 << "First you will need to enter your age between 1 and 100. (In years)" << endl;
		 age = findAge () ;
		 cout << endl;
		 cout << "Great! Now enter your weight. (In pounds)" << endl;
		 weight = findWeight ();
		 cout << endl;
		 cout << "Good! Now enter your height. (In inches)" << endl;
		 height = findHeight ();
		 cout << endl; 
		 cout << "Now you will need to enter your sex." << endl << endl
		 	  << "Enter M for male" << endl << endl
		 	  << "or enter F for female" << endl;
			 sex = findSex ();
			 cout << endl; 
		 cout << "Here is your calculated BMR!" << endl;
			 findBMR (age, weight, height, sex);
		cout << " Calories" << endl << endl << endl;
	}else
	{
		break;
	} 
	}
	return 0;
		 			
}
int findAge ()
{		
		int age;
		bool validcheck;
		
		do 
		{
		 cin >> age;
		 validcheck = cin.fail();
		 cin.clear();
		 cin.ignore(); 
		 if ( validcheck == true || ( age < 1 || age > 100 ) )
		 cout << "Invalid input please enter an age between 1 and 100" << endl;
		 }while ( validcheck == true || ( age < 1 || age > 100 ) );
	
		 
	return age;
}
		 
int findWeight ()
{
		int weight;
		bool validcheck;
		
		do 
		{
		 cin >> weight;
		 validcheck = cin.fail();
		 cin.clear();
		 cin.ignore(); 
		 if ( validcheck == true || ( weight < 50  || weight > 600 ) )
		 cout << "Invalid input please enter a weight between 50 lbs and 600 lbs" << endl;
		 }while ( validcheck == true || ( weight < 50 || weight > 600 ) );
		 
	return weight;
}

int findHeight ()
{		
		int height;
		bool validcheck;
			
		do 
		{
		 cin >> height;
		 validcheck = cin.fail();
		 cin.clear();
		 cin.ignore(); 
		 if ( validcheck == true || ( height < 24 || height > 108 ) )
		 cout << "Invalid input please enter a height between 24 and 108" << endl;
		 }while ( validcheck == true || ( height < 24 || height > 108 ) );
		 
	return height;
}
char findSex ()
{
		char sex;
		bool validcheck = false;
		
		do 
		{
		 cin >> sex;
		 if (sex == 'M' || sex == 'm' || sex == 'F' || sex == 'f') 
		 {
		 	validcheck = true;
		 }else
		 cout << "Invalid input please enter 'M' for Male and 'F' for Female" << endl;
		}while (validcheck == false);
		

	return sex;
}

double findBMR (int findAge, int findWeight, int findHeight, char findSex)
{
	double BMRmale, BMRfemale;		
			
		if (findSex == 'M' || findSex == 'm')
		 { 
			BMRmale = (66 + (6.22 * findWeight) + (12.7 * findHeight) - (6.8 * findAge));
		 	cout << "You should be intaking: " << BMRmale;
		return BMRmale;
		}	
		 else if (findSex == 'F' || findSex == 'f')
		 {
		 
			BMRfemale = (650 + (4.36 * findWeight) + (4.32 * findHeight ) - (4.7 * findAge));
			cout << "You should be intaking: " << BMRfemale;
		return BMRfemale;
		}

	return 0;
}
int menuselect ()
{
	int choice;
	bool validcheck;
	
	cout << " 1." 
	<< " To calculate BMR" << endl
	<< " 2." 
	<< " To end program"  
	<< endl << endl
	<< " Please enter choice 1 or 2: ";
		do 
		{
		 cin >> choice;
		 validcheck = cin.fail();
		 cin.clear();
		 cin.ignore(); 
		 if ( validcheck == true || ( choice < 1 || choice > 2 ) )
		 cout << "Invalid input please enter choice 1 or 2: ";
		 }while ( validcheck == true || ( choice < 1 || choice > 2 ) );
		 
	return choice; 
}
