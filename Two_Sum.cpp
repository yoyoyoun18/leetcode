
// Q)
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 이중 반복문 돌리기
            // 이중 반복문 중 계속해서 target과 비교

        std::vector<int> Output;

        for(int i = 0; i < nums.size(); i ++) {
            for(int j = 1; j < nums.size(); j ++) {
                if(nums[i] + nums[j] == target){
                    Output.push_back(i);
                    Output.push_back(j);
                }   
            }
        }

        std::sort(Output.begin(), Output.end());
        auto new_end = std::unique(Output.begin(), Output.end());
        Output.erase(new_end, Output.end());

        return Output;
    }
};
