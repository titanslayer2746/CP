#include <vector>
    #include <iostream>
    
    class TwoPointers {
    public:
        // Function to process the logic for the two-pointer approach
        virtual void processLogic(int left, int right) {
            // Template method for processing logic
            std::cout << "Processing: left = " << left << ", right = " << right << std::endl;
        }
    
        void leftRightBoundary(const std::vector<int>& nums) {
            // Initialize left and right pointers
            int left = 0, right = nums.size() - 1;
            
            // Move pointers toward each other
            while (left < right) {
                // Process logic before or after pointers movement
                processLogic(nums[left], nums[right]);
                
                // Move pointers inward
                ++left;
                --right;
            }
        }
    };
    
    int main() {
        TwoPointers tp;
        std::vector<int> nums = {1, 2, 3, 4, 5};
        tp.leftRightBoundary(nums);
        return 0;
    }
    