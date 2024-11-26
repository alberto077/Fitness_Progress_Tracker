#include "Exercise.h"

#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Default Constructor

Exercise::Exercise(){
    workoutName = "none";
    sets = 0;
    reps = 0;
    weight = 0;
}
//Parameterized constructor
Exercise::Exercise(string tempname, int tempsets, int tempreps, int tempweight){
    workoutName = tempname;
    sets = tempsets;
    reps = tempreps;
    weight = tempweight;
}

//setters
void Exercise::setworkoutName(string tempname){
    workoutName = tempname;
}
void Exercise::setworkoutSets(int tempsets){
    sets = tempsets;
}
void Exercise::setworkoutReps(int tempreps){
    reps = tempreps;
}
void Exercise::setworkoutWeight(int tempweight){
    weight = tempweight;
}
 
 //getters
string Exercise::getworkoutName() const{
    return workoutName;
}
int Exercise::getworkoutSets() const{
    return sets;
}
int Exercise::getworkoutReps() const{
    return reps;
}
int Exercise::getworkoutWeight() const{
    return weight;
}


//unique functions
void Exercise::AddWorkout(const Exercise& newWorkout){
    workoutList.push_back(newWorkout);
}

void Exercise::removeWorkout(string removedworkoutName){
    cout << endl << "REMOVING IN PROCESS" << endl;
    for (int i = 0; i < workoutList.size(); i++){
        if (workoutList.at(i).getworkoutName() == removedworkoutName){
            workoutList.erase(workoutList.begin() + i);
            cout << removedworkoutName << " HAS BEEN REMOVED" << endl;
            return;
        }
    }
    cout << removedworkoutName << " was not found within your list" << endl;

}

//
void Exercise::changeWorkoutInfo(const Exercise& changeWorkout){
    cout << "ATTEMPING TO CHANGE WORKOUT" << endl;
    for (int i = 0; i < workoutList.size(); i++){
        if (workoutList.at(i).getworkoutName() == changeWorkout.getworkoutName()){
            //only edit if a default was not assinged (if a defualt value was assigned it means the user didnt want to change it)
            if(changeWorkout.getworkoutName() != "none"){
                workoutList.at(i).setworkoutName(changeWorkout.getworkoutName());
            }
            if(changeWorkout.getworkoutSets()!= 0){
                workoutList.at(i).setworkoutSets(changeWorkout.getworkoutSets());
            }
            if(changeWorkout.getworkoutReps()!=0){
                workoutList.at(i).setworkoutReps(changeWorkout.getworkoutReps());
            }
            if(changeWorkout.getworkoutWeight()!=0){
                workoutList.at(i).setworkoutWeight(changeWorkout.getworkoutWeight());
            }
        cout << "Workout info has been changed" << endl;
        return;
        }
    }
    // if name wasnt found
    cout << "WORKOUT NOT FOUND NOTHING CHANGED" << endl; 
}

void Exercise::displayWorkout() const{
    if (workoutList.empty()){
        cout << "No workouts have been inputted" << endl << endl;
    }
    for (int i = 0; i < workoutList.size(); i++){
        cout << workoutList.at(i).getworkoutName() << ": " << workoutList.at(i).getworkoutSets() << " x " << workoutList.at(i).getworkoutReps() << " (" << workoutList.at(i).getworkoutWeight() << "lbs)" << endl;
    }
}