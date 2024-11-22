#include <iostream>
#include <string>
#include "Exercise.h"
using namespace std;


int main(){

    Exercise push;
    Exercise pull;
    Exercise legs;
    int choice;

    do{
        cout << "1. Add a new Push workout" << endl;
        cout << "2. Remove a Push workout" << endl;
        cout << "3. Add a new Pull workout" << endl;
        cout << "4. Remove a Pull workout" << endl;
        cout << "5. Add a new Legs workout" << endl;
        cout << "6. Remove a Legs workout" << endl;
        cout << "7. View all workouts" << endl;
        cout << "8. Exit" << endl;
        cout << "Please select an option (1-8): " << endl;
        cin >> choice;
        cin.ignore();

        if (choice == 1){
            cout << "Add push workout" << endl;
            push.setWorkout();
        }

        else if (choice == 2){
            cout << "Remove push workout" <<  endl;
            push.removeWorkout();
        }

        else if (choice == 3){
            cout << "Add pull workout" << endl;
            pull.setWorkout();
        }

        else if (choice == 4){
            cout << "Remove pull workout" << endl;
            pull.removeWorkout();
        }

        else if (choice == 5){
            cout << "Add leg workout" << endl;
            legs.setWorkout();
        }

        else if (choice == 6){
            cout << "Remove leg workout" << endl;
            legs.removeWorkout();
        }

        else if (choice == 7){
            cout << "View all workouts" << endl;
            cout << "PUSH WORKOUTS:" << endl;
            push.displayWorkout();
            cout << "PULL WORKOUTS:" << endl;
            pull.displayWorkout();
            cout << "LEG WORKOUTS" << endl;
            legs.displayWorkout();
        }

        else if (choice == 8){
            cout << "Exiting" <<  endl;
        }

        else {
            cout << "Please type a correct menu choice" << endl;

        }


    } while (choice != 8);

return 0;


}
