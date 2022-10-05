//this is for the inherited classes challenge problem, i used three derived classes (Age, AnimalFood, and VetVisit) from the base class (Animals)
//using general info collected from the base class constructor and stored in the base class, the derived classes calculate the desired outputs.

#include <iostream>
#include <string>

using namespace std;

//declaring all the variable
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

//constructor which is getting the general info on every animal
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

//class made to determine animals age using their general info and todays date
class Age: public Animals
{
private:
int age;

public:

//determines age
Age() {
    if (birthmonth <= currentmonth && birthday <= currentday) {
        age = currentyear - birthyear;
}
    else {
        age = currentyear - birthyear - 1;
    }
}

//outputs age
void getAge(){
    cout << name <<  " is " << age << " years old." << endl;
}
};

//determines how much food animals eat in a day based on their weight
class AnimalFood: public Animals
{
private:
float fooddaily;

public:

//calculates their food needs based on the generalization i found on google that animals
//tend to eat 2.25% of their body weight.
AnimalFood() {
    fooddaily = weight * 0.025;
}

//outputs their approximate food intake
void getFood() {
    cout << name << " eats approximately " << fooddaily << " pounds of food daily" << endl;
}
};

//determines how many days until the animals next vet visit based on how long it has been 
//since the last one. i decided animals at this zoo should see a vet every 4 weeks.
class VetVisit: public Animals
{
private:
int days_since_vet;
int days_until_vet;

public:

//asks for how many days it has been since last vet visit and determines how many days until next one
VetVisit() {
    cout << "Enter how many days it has been since " << name << " has been to the vet: " << endl;
    cin >> days_since_vet;
    days_until_vet = 28 - days_since_vet; 
}

//outputs how many days are left until next visit
void getVetVisit() {
    if (days_until_vet > 0) 
        cout << name << " will need to be seen by a veterinarian in " << days_until_vet << " days." << endl;
    
    else 
        cout << name << " will need to be seen by a veterinarian as soon as possible." << endl;

}
};
