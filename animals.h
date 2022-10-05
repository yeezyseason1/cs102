#include <iostream>
#include <string>

using namespace std;

class Animals
{
protected:
string name;
int birthday;
int birthmonth;
int birthyear;
int currentday;
int currentmonth;
int currentyear;
int weight;

public:

Animals(){
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter birthday in DD MM YYYY format: ";
    cin >> birthday >> birthmonth >> birthyear;
    cout << "Enter today's date in DD MM YYYY format: ";
    cin >> currentday >> currentmonth >> currentyear;
    cout << "Enter weight in lbs: ";
    cin >> weight;
}
}; 

class Age: public Animals
{
private:
int age;

public:

Age() {
    if (birthmonth <= currentmonth && birthday <= currentday) {
        age = currentyear - birthyear;
}
    else {
        age = currentyear - birthyear - 1;
    }
}

void getAge(){
    cout << name <<  " is " << age << " years old." << endl;
}
};

class AnimalFood: public Animals
{
private:
float fooddaily;

public:

AnimalFood() {
    fooddaily = weight * 0.025;
}

void getFood() {
    cout << name << " eats approximately " << fooddaily << " pounds of food daily" << endl;
}
};

class VetVisit: public Animals
{
private:
int days_since_vet;
int days_until_vet;

public:
VetVisit() {
    cout << "Enter how many days it has been since " << name << " has been to the vet: " << endl;
    cin >> days_since_vet;
    days_until_vet = 28 - days_since_vet; 
}

void getVetVisit() {
    if (days_until_vet > 0) 
        cout << name << " will need to be seen by a veterinarian in " << days_until_vet << " days." << endl;
    
    else 
        cout << name << " will need to be seen by a veterinarian as soon as possible." << endl;

}
};
