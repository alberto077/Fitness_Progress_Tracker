#include "Exercise.h"

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void Exercise::setWorkout(){

    string tempname;
    int tempsets;
    int tempreps;
    int tempweight;

    cout << "Enter the exercise name: ";
    getline(cin, tempname);
    name.push_back(tempname);

    cout << "Enter the amount of sets: ";
    cin >>tempsets;
    sets.push_back(tempsets);

    cout << "Enter the amount of reps: ";
    cin >> tempreps;
    reps.push_back(tempreps);

    cout << "Enter the amount of weight in pounds: ";
    cin >> tempweight;
    weight.push_back(tempweight);

}

void Exercise::displayWorkout() const {

    if (name.empty()){
        cout << "No workouts have been inputed" << endl;
        return;
    }
    else{
        for (int i = 0; i < name.size(); i++){
            cout << i+1<< "." <<  endl;
            cout << "Exercise Name: " << name.at(i) 
            << "\nSets x Reps: " << sets.at(i) << " x " << reps.at(i) 
            << "\nWeight: " << weight.at(i) << "lbs" << endl;
            cout << endl;
        }
    }

}

void Exercise::removeWorkout(){

    if (name.empty()){
        cout << "No workouts have been inputed" << endl;
        return;
    }
    int exercise_remove;
    cout << "Which workout would you like to remove please enter the number listed" << endl;
    displayWorkout();

    do{
    cout << "\nChoice: ";
    cin >> exercise_remove;

    if (exercise_remove < 1 || exercise_remove > name.size())
        cout << "Invalid choice" << endl;

    } while(exercise_remove < 1 || exercise_remove > name.size());

    //sets the index back to normal since its displays starting with one
    exercise_remove = exercise_remove - 1; 

    // removes the exercise by using erase, first we point to the first elemnt then add the users input after its back to the zero based index inorder to remove at the corret position
    name.erase(name.begin() + exercise_remove);
    sets.erase(sets.begin() + exercise_remove);
    reps.erase(reps.begin() + exercise_remove);
    weight.erase(weight.begin() + exercise_remove);

}