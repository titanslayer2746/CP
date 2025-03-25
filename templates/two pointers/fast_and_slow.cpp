#include <vector>
    #include <iostream>
    
    class TwoPointers {
    public:
        // Function to process the logic for the two-pointer approach
        virtual void processLogic(int slow, int fast) {
            // Template method for processing logic
            std::cout << "Processing: slow = " << slow << ", fast = " << fast << std::endl;
        }
    
        virtual bool slowCondition(int slow) {
            // Template condition for slow pointer movement
            return true; // Default: always move slow pointer
        }
    
        void slowFastRunner(const std::vector<int>& nums) {
            // Initialize slow runner
            int slow = 0;
    
            // Fast-runner grows each iteration generally
            for (int fast = 0; fast < nums.size(); ++fast) {
                // Slow-runner grows with some restrictions
                if (slowCondition(nums[slow])) {
                    ++slow;
                }
                // Process logic before or after pointers movement
                processLogic(slow, nums[fast]);
            }
        }
    };
    
    int main() {
        TwoPointers tp;
        std::vector<int> nums = {1, 2, 3, 4, 5};
        tp.slowFastRunner(nums);
        return 0;
    }
    