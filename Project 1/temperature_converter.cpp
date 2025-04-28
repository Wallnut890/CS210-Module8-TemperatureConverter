#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Input and output file streams
    ifstream fahrenheitFile("FahrenheitTemperature.txt");
    ofstream celsiusFile("CelsiusTemperature.txt");

    // Check if the input file opened correctly
    if (!fahrenheitFile.is_open()) {
        cout << "Unable to open the input file." << endl;
        return 1;
    }

    // Check if the output file opened correctly
    if (!celsiusFile.is_open()) {
        cout << "Unable to create the output file." << endl;
        return 1;
    }

    string location;
    int tempF;

    // Set precision for Celsius values
    celsiusFile << fixed << setprecision(2);

    // Read and convert each entry
    while (fahrenheitFile >> location >> tempF) {
        double tempC = (static_cast<double>(tempF) - 32.0) * (5.0 / 9.0);
        celsiusFile << location << " " << tempC << endl;
    }

    // Close both files
    fahrenheitFile.close();
    celsiusFile.close();

    cout << "Temperature conversion completed successfully." << endl;
    return 0;
}
