#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

int main() {
    // Initialize random seed
    srand(static_cast<unsigned int>(time(0)));

    // Array to store the count of each face (1-6)
    int count[6] = {0};

    // Simulate 600 rolls of the dice
    for (int i = 0; i < 600; ++i) {
        int roll = rand() % 6 + 1; // Generates a random number between 1 and 6
        ++count[roll - 1]; // Increment the corresponding face count
    }

    // Print the distribution of rolls
    for (int i = 0; i < 6; ++i) {
        cout << "Number of " << (i + 1) << "'s: " << count[i] << endl;
    }

    return 0;
}

