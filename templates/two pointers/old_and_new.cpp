#include <vector>
    #include <iostream>
    
    class TwoPointers {
    public:
        // Function to process the logic for the new state
        int processLogic(int element, int oldState) {
            // Example processing logic, modify as needed
            return oldState + element;
        }
    
        void oldNewState(const std::vector<int>& seq) {
            // Initialize state with default values
            int oldState = 0, newState = 0;
    
            for (int element : seq) {
                // Process current element with old state
                int curResult = processLogic(element, oldState);
                oldState = newState;
                newState = curResult;
            }
    
            // Output the final computed state
            std::cout << "Final State: " << newState << std::endl;
        }
    };
    
    int main() {
        TwoPointers tp;
        std::vector<int> seq = {1, 2, 3, 4, 5};
        tp.oldNewState(seq);
        return 0;
    }
    