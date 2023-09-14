#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> tasks; 
    string taskToAdd;     
    while (true) {
        cout << "To-Do List:" << endl;

       
        if (tasks.empty()) {
            cout << "No tasks" << endl;
        } else {
            for (int i = 0; i < tasks.size(); i++) {
                cout << i + 1 << ". " << tasks[i] << endl;
            }
        }

        cout << "\nOptions:" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. Remove Task" << endl;
        cout << "3. Quit" << endl;

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the task to add: ";
                cin.ignore(); 
                getline(cin, taskToAdd);
                tasks.push_back(taskToAdd);
                cout << "Task added." << endl;
                break;
            case 2:
                if (tasks.empty()) {
                    cout << "No tasks to remove." << endl;
                } else {
                    cout << "Enter the task number to remove: ";
                    int taskNumber;
                    cin >> taskNumber;
                    if (taskNumber >= 1 && taskNumber <= tasks.size()) {
                        tasks.erase(tasks.begin() + taskNumber - 1);
                        cout << "Task removed." << endl;
                    } else {
                        cout << "Invalid task number." << endl;
                    }
                }
                break;
            case 3:
                cout << "Goodbye!" << endl;
                return 0; 
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
