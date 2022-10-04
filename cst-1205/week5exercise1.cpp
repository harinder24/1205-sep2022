#include <iostream>
#include <string>
using namespace std;

void week5exercise1() {
	string dogNameInfo = "What's your dog's name: ";
	string dogName;
	string dogBreedInfo = "What's your dog's breed: ";
	string dogBreed;
	string dogAgeInfo = "What's your dog's age: ";
	string dogAge;
	cout << endl << dogNameInfo << endl;
	cin >> dogName;
	cout << endl << dogBreedInfo << endl;
	cin >> dogBreed;
	cout << endl << dogAgeInfo << endl;
	cin >> dogAge;
	string result = "\nDog's name = " + dogName + "\nDog's breed = " + dogBreed + "\nDog's age = " + dogAge;
	cout << result;
}