#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string name;

    // Taking user input
    cout << "Enter student name: ";
    getline(cin, name);

    // List of excuses
    vector<string> excuses = {
        "{name} could not complete the homework because the dog ate the notebook.",
        
        "{name} was late because the alarm clock decided to take a holiday.",
        
        "{name} missed the class due to unexpected WiFi disappearance.",
        
        "{name} could not study because the power went out during revision.",
        
        "{name} forgot the assignment at home after rushing to college.",
        
        "{name} was absent because of sudden stomach pain after eating street food.",
        
        "{name} could not attend class because the bus broke down halfway.",
        
        "{name} accidentally deleted the project file at the last moment.",
        
        "{name} could not submit the work because the laptop battery died unexpectedly.",
        
        "{name} was distracted by helping a friend with their project all night."
    };

    // Random seed
    srand(time(0));

    // Randomly selecting excuse
    int randomIndex = rand() % excuses.size();

    string selectedExcuse = excuses[randomIndex];

    // Replacing {name} with actual name
    size_t pos = selectedExcuse.find("{name}");

    while (pos != string::npos) {
        selectedExcuse.replace(pos, 6, name);
        pos = selectedExcuse.find("{name}");
    }

    // Output
    cout << "\nGenerated Excuse:\n";
    cout << selectedExcuse << endl;

    return 0;
}
