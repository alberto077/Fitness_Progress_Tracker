#ifndef EXERCISE_H
#define EXERCISE_H

#include <string>
#include <vector>
using namespace std;



class Exercise
{
public:
    //Default Constructor
    Exercise();
    //parameterized constructor
    Exercise(string tempname, int tempsets, int tempreps, int weight);

    //setters
    void setworkoutName(string tempname);
    void setworkoutSets(int tempsets);
    void setworkoutReps(int tempreps);
    void setworkoutWeight(int tempweight);

    //getters
    string  getworkoutName() const;
    int  getworkoutSets() const;
    int  getworkoutReps() const;
    int  getworkoutWeight() const;
    
    //Add an entire workout with all information
    void AddWorkout(const Exercise& newWorkout);
    //Remove an entire workout with all information
    void removeWorkout(string workoutName);

    void changeWorkoutInfo(const Exercise& changeWorkout);

    void displayWorkout() const;

    //Edit workout (Change name, reps, sets, weight)
    //Sort workout (display workouts based on if the the user wants by weight or alphabetically)


    
    

private:
    string workoutName;
    int sets;
    int reps;
    int weight;
    //This is a List that of class Exercise that will contain different objects in this case workouts set by the user and all the information for it.
    vector <Exercise> workoutList;

};

#endif