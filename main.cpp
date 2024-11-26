#include <iostream>
#include <string>
#include "Exercise.h"
using namespace std;

/*TODO: 
Add all other functions in the class folders
Finish the remove function in main
impletment a sort algorithm to sort the workouts
implement the users name and the date.



*/

int PrintMenu(){
    int choice;
    cout << "1. Add a new workout" << endl;
    cout << "2. Remove a workout" << endl;
    cout << "3. Change Workout Info" << endl;
    cout << "4. Output Workout Info" << endl;
    cout << "5. View all workouts" << endl;
    cout << "6. Exit" << endl;
    do{
        cout << "Please select an option (1-6): " << endl;
        cin >> choice;

        //Input Validation
        if(cin.fail()|| choice < 1 || choice > 6){
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input" << endl << endl;
            continue;
        }
        

    }while(choice < 1 || choice > 6);
    
    return choice;
}

void RunMenu(int choice, Exercise& workouts){
    if (choice == 1){

        string tempname;
        int tempsets;
        int tempreps;
        int tempweight;

        cout << "ADDING WORKOUT" << endl << endl;
            
        cout << "Enter the exercise name: ";
        cin.ignore(1000, '\n');
        getline(cin, tempname);
        
        cout << "Enter the amount of sets: ";
        cin >>tempsets;

        cout << "Enter the amount of reps: ";
        cin >> tempreps;

        cout << "Enter the amount of weight in pounds: ";
        cin >> tempweight;

        workouts.AddWorkout(Exercise(tempname, tempsets, tempreps, tempweight));
        }

    else if (choice == 2){
        string removedWorkout;
        cout << "REMOVING A WORKOUT" <<  endl;
        cout  << "Input the name of the workout" << endl;
        cin.ignore(1000, '\n');
        getline(cin, removedWorkout);
        workouts.removeWorkout(removedWorkout);
        //workouts.removeWorkout();
    }

    else if (choice == 3){
    string modfiedWorkout;
    int input;
    cout << "CHANGING WORKOUT INFO" <<  endl;
    cout << "Input the name of the workout" << endl;
    cin.ignore(1000, '\n');
    getline(cin, modfiedWorkout);
    //possible check herr
        cout << "1. Change Name" << endl;
        cout << "2. Change Sets" << endl;
        cout << "3. Change Reps" << endl;
        cout << "4. Change Weight" << endl;
        cout << "5. Exit" << endl;
        do{
        cout << "Select input (1-5)" << endl << endl;
        cin >> input;

        if (cin.fail() || input < 1 || input > 5){
            //restarts the loop
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input" << endl;
            continue;
        }
        if (input == 1){
            string changedName;
            cout << "Enter name:" << endl;
            cin.ignore(1000, '\n');
            getline(cin, changedName);
            workouts.changeWorkoutInfo(Exercise(changedName, 0, 0, 0));
        }
        else if (input == 2){
            int changedSets;
            cout << "Enter sets:" << endl;
            cin >> changedSets;
            workouts.changeWorkoutInfo(Exercise("none", changedSets, 0, 0));
        }

        else if (input == 3){
            int changedReps;
            cout << "Enter reps:" << endl;
            cin >> changedReps;
            workouts.changeWorkoutInfo(Exercise("none", 0, changedReps, 0));
        }
        else if (input == 4){
            int changedWeight;
            cout << "Enter weight:" << endl;
            cin >> changedWeight;
            workouts.changeWorkoutInfo(Exercise("none", 0, 0, changedWeight));
        }

        else{
            cout << "Exiting" << endl;
            return;
        }

    }while (input != 5);

    }
    else if (choice == 5){
        cout << "DISPLAYING ALL WORKOUTS" << endl << endl;
        workouts.displayWorkout();
        cout << endl;
    }


        
}

int main(){
    Exercise workouts;
    string userName;
    string date;
    int choice;
// Added username input
    cout << "Enter Username: ";
    getline(cin, userName);
    cout << "Enter Date: ";
    getline(cin, date);


    do{
    choice  = PrintMenu();
    RunMenu(choice, workouts);
    }while (choice!= 6);
    
    return 0;


}
