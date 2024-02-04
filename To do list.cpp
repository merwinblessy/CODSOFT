#include <iostream>
#include <vector>

using namespace std;

struct Task {
    string description;
    bool completed;
};

void addTask(vector<Task>& tasks, const string& description) {
    Task newTask;
    newTask.description = description;
    newTask.completed = false;
    tasks.push_back(newTask);
    cout << "Task added successfully!" << endl;
}

void viewTasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks found." << endl;
    } else {
        cout << "Tasks:" << endl;
        for (const Task& task : tasks) {
            cout << "- " << task.description;
            if (task.completed) {
                cout << " (Completed)";
            } else {
                cout << " (Pending)";
            }
            cout << endl;
        }
    }
}

void markTaskAsCompleted(vector<Task>& tasks, const string& description) {
    for (Task& task : tasks) {
        if (task.description == description) {
            task.completed = true;
            cout << "Task marked as completed!" << endl;
            return;
        }
    }
    cout << "Task not found." << endl;
}

void removeTask(vector<Task>& tasks, const string& description) {
    for (auto it = tasks.begin(); it != tasks.end(); ++it) {
        if (it->description == description) {
            tasks.erase(it);
            cout << "Task removed successfully!" << endl;
            return;
        }
    }
    cout << "Task not found." << endl;
}

int main() {
    vector<Task> tasks;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose an option: ";

        int option;
        cin >> option;

        if (option == 1) {
            cout << "Enter task description: ";
            string description;
            cin.ignore();
            getline(cin, description);
            addTask(tasks, description);
        } else if (option == 2) {
            viewTasks(tasks);
        } else if (option == 3) {
            cout << "Enter task description to mark as completed: ";
            string description;
            cin.ignore();
            getline(cin, description);
            markTaskAsCompleted(tasks, description);
        } else if (option == 4) {
            cout << "Enter task description to remove: ";
            string description;
            cin.ignore();
            getline(cin, description);
            removeTask(tasks, description);
        } else if (option == 5) {
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid option. Please try again." << endl;
        }
    }

    return 0;
}