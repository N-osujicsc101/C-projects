#include <iostream>
#include <string>
#include <vector>
#include <algorithm>  // Include for remove_if

using namespace std;

struct todolist {
    std::string task;
    std::string description;
    std::string dueDate;
    bool completed;
};

std::vector<todolist> todoList;  // Use consistent naming

void removeCompletedTasks() {
    todoList.erase(std::remove_if(todoList.begin(), todoList.end(),
                                   [](const todolist& task) { return task.completed; }),
                   todoList.end());
}

void editTask() {
    // ... (same as before)
}

int main() {
    todolist newTask;

    cout << "Enter Task title: ";
    getline(cin, newTask.task);

    cout << "Enter Task Description: ";
    getline(cin, newTask.description);

    cout << "Enter Task due date: ";
    getline(cin, newTask.dueDate);

    newTask.completed = false;

    todoList.push_back(newTask);

    // Call the removeCompletedTasks function to erase completed tasks
    removeCompletedTasks();

    // Display the tasks
    for (const auto& task : todoList) {
        cout << "Task Title: " << task.task << std::endl;
        cout << "Task Description: " << task.description << std::endl;
        cout << "Task due date: " << task.dueDate << std::endl;
        cout << "Completed: " << (task.completed ? "Yes" : "No") << endl;
    }

    return 0;
}
