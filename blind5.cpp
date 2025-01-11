#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

void generateRandomNumbers(int n) {
    if (n < 13) { 
        cout << "Error: n must be at least 13.\n";
        return;
    }

    srand(time(0)); // Seed the random number generator with the current time
    vector<int> randomNumbers;

    while (randomNumbers.size() < 5) {
        int randomNumber = rand() % (n - 13 + 1) + 13; // Generate a random number between 13 and n
        if (find(randomNumbers.begin(), randomNumbers.end(), randomNumber) == randomNumbers.end()) {
            randomNumbers.push_back(randomNumber);
        }
    }

    sort(randomNumbers.begin(), randomNumbers.end());

    cout << "Revision Questions: ";
    for (int num : randomNumbers) {
        cout << num << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cout << "Enter total questions solved: ";
    cin >> n;

    generateRandomNumbers(n);

    return 0;
}
