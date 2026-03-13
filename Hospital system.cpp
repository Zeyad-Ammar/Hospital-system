// Hospital system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int specialization_spots[20][6]{ 0 };//5 spots and extra one to save the nextspot
string names[20][5];
void mainScreen();
void makeShiftingForSpotsToRight(int specialization) {
	for (int i = specialization_spots[specialization - 1][0]; i >= 1; i--) {//make shifting
		specialization_spots[specialization-1][i+1]= specialization_spots[specialization-1][i];
		names[specialization - 1][i-1] = names[specialization][i];

	}

	specialization_spots[specialization - 1][1] = 0;
	names[specialization-1][0] = "";
}

void makeShiftingForSpotsToLeft(int specialization) {
	for (int i = 0; i < specialization_spots[specialization - 1][0]; i++) {//make shifting
		specialization_spots[specialization - 1][i + 1] = specialization_spots[specialization - 1][i+2];
		names[specialization - 1][i] = names[specialization - 1][i + 1];

	}

	

	specialization_spots[specialization - 1][5] = 0;
	names[specialization - 1][4] = "";
}


void addNewPatients() {
	string name;
	int specialization;
	bool isUrgent;

	cout << "Enter Specialization, Name, Statis: ";
	cin >> specialization >> name >> isUrgent;

	if (specialization_spots[specialization - 1][0]==5) {
		cout << "Sorry No Empty Place in Our Hospital :(\n";
		return;
	}

	if(isUrgent==0){
	specialization_spots[specialization - 1][specialization_spots[specialization - 1][0] + 1] = isUrgent;
	names[specialization - 1][specialization_spots[specialization - 1][0]] = name;
	specialization_spots[specialization - 1][0]++;
	}
	else {
		makeShiftingForSpotsToRight( specialization);
		specialization_spots[specialization - 1][1] = isUrgent;
		names[specialization-1 ][0] = name;
		specialization_spots[specialization - 1][0]++;
	}
	
}

void printAllPatients() {
	string state;
	bool isEmptyHospital = 1;
	for (int s = 0; s < 20; s++) {
		if (specialization_spots[s][0] == 0)//no patients
			continue;

		cout << "\nThere are [" << specialization_spots[s][0] << "] in specialization " << s + 1 << endl;
		isEmptyHospital = 0;
		
		for (int p = 1; p <= specialization_spots[s][0]; p++) {
			
			if (specialization_spots[s][p] == 1)
				state = "Urgent";
			else
				state = "Normal";

				cout << names[s][p-1]<<" " << state << endl;

		}
	}

	if (isEmptyHospital) {
		cout << "\nNo Patients In the Hospital Now.\n\n";
	}

}

void getNextPatient() {
	cout << "Enter the Specialization: ";
	int spcialization; cin >> spcialization;

	if (specialization_spots[spcialization - 1][0] == 0)
		cout << "No patients at the moment have rest Dr\n";

	else{
		cout << names[spcialization - 1] [0] << " please go with the Dr \n";
		makeShiftingForSpotsToLeft(spcialization);
		specialization_spots[spcialization - 1][0]--;
	}


}

void performMainMenuOptions(short option) {

	if (option == 1) {
		//cout << "add new user will be here\n";
		addNewPatients();
		mainScreen();
	}
	else if (option == 2) {
		//cout << "print all Patients will be here";
		printAllPatients();
		mainScreen();
	}
	else if (option == 3) {
		//cout << "get next patient will be here\n";
		getNextPatient();
		mainScreen();
	}
	else {
		return;
	}

}

short readMainMenuOption() {
	short option; cin >> option;
	while (option > 4 || option < 1) {
		cout << "Enter right Choice\n";
		cin >> option;
	}

	return option;
}
void mainScreen() {
	cout << "\n__________________________\n";
	cout << "Enter Ur Choice:\n";
	cout << "1) Add New Patient:\n";
	cout << "2) Print All Patients\n";
	cout << "3) Get next patient\n";
	cout << "4) Exit\n";

	performMainMenuOptions( readMainMenuOption());


}
int main()
{
	mainScreen();



	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
