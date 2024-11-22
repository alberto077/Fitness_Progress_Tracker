#ifndef EXERCISE_H
#define EXERCISE_H

#include <string>
#include <vector>
using namespace std;



class Exercise
{
public:
    void setWorkout();
    void displayWorkout() const;
    void removeWorkout();
    //Edit workout (Change name, reps, sets, weight)
    //Sort workout (display workouts based on if the the user wants by weight or alphabetically)


    
    

private:
    vector<string> name;
    vector <int> sets;
    vector<int> reps;
    vector <int> weight;
    
    


};

#endif