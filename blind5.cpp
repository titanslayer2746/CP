#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;



void generateFilteredRandomNumbers(int n,vector<int>& skipList) {

    srand(time(0)); // Seed the random number generator
    unordered_set<int> skipSet(skipList.begin(), skipList.end()); // Store skipped questions in a set
    vector<int> randomNumbers;

    while (randomNumbers.size() < 5) {
        int randomNumber = rand() % (n - 34 + 1) + 34; // Generate a random number between 34 and n
        if (skipSet.find(randomNumber) == skipSet.end() && 
            find(randomNumbers.begin(), randomNumbers.end(), randomNumber) == randomNumbers.end()) {
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
        "Tree", "AVL trees", "Fenwick trees", "Segment trees", "Breadth-First Search", "Bit Manipulation", "Two Pointers",
        "Prefix Sum", "Heap (Priority Queue)", "Binary Tree", "Stack", "Graph",
        "Counting", "Sliding Window", "Backtracking", "Union Find",
        "Linked List", "Ordered Set", "Number Theory", "Monotonic Stack",
        "Segment Tree", "Trie", "Bitmask", "Divide and Conquer", "Combinatorics",
        "Queue", "Recursion", "Binary Indexed Tree", "Geometry",
        "Binary Search Tree", "Hash Function", "Memoization", "String Matching",
        "Topological Sort", "Shortest Path", "Rolling Hash", "Game Theory",
        "Monotonic Queue", "Brainteaser",
        "Merge Sort", "Doubly-Linked List", "Counting Sort",
        "Quickselect", "Suffix Array", "Bucket Sort", "Minimum Spanning Tree",
        "Strongly Connected Component", "Radix Sort", "Biconnected Component"
    };

    vector<int> skipQuestions = {
        35,39,40,41,42,43,44,45,46,47,48,49,50,51,52,55,56,76,75,130
    };


    generateFilteredRandomNumbers(n,skipQuestions);

    cout << "Today's DSA topic is : " << getRandomTopic(topics) << endl;

    return 0;
}
