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

string getRandomTopic(const vector<string>& topics) {
    srand(time(0)); // Initialize random seed
    int randomIndex = rand() % topics.size(); // Generate random index
    return topics[randomIndex]; // Return the randomly selected topic
}


void outputRandomElement() {
    // Define the array
    vector<string> topics = {
        "Problem A grind",
        "Greedy Algorithms",
        "Bit Manipulation",
        "Recursion and Backtracking",
        "Prefix Sum and Difference Array",
        "Problem B grind"
    };

    // Seed the random number generator
    srand(static_cast<unsigned>(time(0)));

    // Generate a random index
    int randomIndex = rand() % topics.size();

    // Output the random element
    cout << "Today's CP topic is: " << topics[randomIndex] << endl;
}


int main() {
    int n;
    cout << "Enter total questions solved: ";
    cin >> n;

    vector<string> topics = {
        "Array", "String", "Hash Table", "Dynamic Programming", "Math",
        "Sorting", "Greedy", "Depth-First Search", "Binary Search", "Matrix",
        "Tree", "Breadth-First Search", "Bit Manipulation", "Two Pointers",
        "Prefix Sum", "Heap (Priority Queue)", "Binary Tree", "Stack", "Graph",
        "Counting", "Sliding Window", "Backtracking", "Enumeration", "Union Find",
        "Linked List", "Ordered Set", "Number Theory", "Monotonic Stack",
        "Segment Tree", "Trie", "Bitmask", "Divide and Conquer", "Combinatorics",
        "Queue", "Recursion", "Binary Indexed Tree", "Geometry",
        "Binary Search Tree", "Hash Function", "Memoization", "String Matching",
        "Topological Sort", "Shortest Path", "Rolling Hash", "Game Theory",
        "Data Stream", "Monotonic Queue", "Brainteaser", "Randomized",
        "Merge Sort", "Doubly-Linked List", "Counting Sort", "Iterator",
        "Quickselect", "Suffix Array", "Bucket Sort", "Minimum Spanning Tree",
        "Strongly Connected Component", "Radix Sort", "Biconnected Component"
    };


    generateRandomNumbers(n);

    cout << "Today's DSA topic is : " << getRandomTopic(topics) << endl;

    return 0;
}
