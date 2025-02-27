#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    ifstream file("data.csv"); // Open the file
    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1; // Exit with an error code
    }

    string line;
    while (getline(file, line)) { // Read file line by line
        stringstream ss(line);
        string temp;
        int num1, num2;
        string word;

        // Extract first number
        getline(ss, temp, ',');
        stringstream(temp) >> num1;

        // Extract second number
        getline(ss, temp, ',');
        stringstream(temp) >> num2;

        // Extract the word
        getline(ss, word, ',');

        // Calculate the sum
        int repeatCount = num1 + num2;

        // Print the word 'repeatCount' times
        for (int i = 0; i < repeatCount; i++) {
            cout << word << " ";
        }
        cout << endl;
    }

    file.close(); // Close the file
    return 0;
}
