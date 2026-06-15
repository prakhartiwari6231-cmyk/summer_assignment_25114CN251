// wap to move zeroes to end

#include <iostream>
#include <vector>
int main() {
    std::vector<int> nums = {0, 1, 0, 3, 12, 0, 8};
    int insertPos = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[insertPos] = nums[i];
            insertPos++;
        }
    }
    while (insertPos < nums.size()) {
        nums[insertPos] = 0;
        insertPos++;
    }
    std::cout << "Moved zeroes to end: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    return 0;
}