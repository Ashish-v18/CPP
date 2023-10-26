#include <iostream>
using namespace std;

int main() {
    double topSpeedCPM = 32.2; // Top typing speed in CPM (Characters Per Minute)
    double averageSpeedCPM = 27.7; // Average typing speed in CPM
    int totalLines = 9; // Total number of lines typed

    // Calculate the total characters typed in the 9 lines
    double totalCharacters = totalLines * 60.0; // Assuming each line has 60 characters

    // Calculate the total time taken to type the 9 lines at the average speed
    double totalTimeMinutes = totalCharacters / averageSpeedCPM;

    // Calculate the lowest speed using the total time taken
    double lowestSpeedCPM = totalCharacters / totalTimeMinutes;

    cout << "Lowest typing speed: " << lowestSpeedCPM << " CPM" << endl;

    return 0;
}
