#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int majorityElement(vector<int> &nums) {
    if (not nums.empty()) {
      sort(nums.begin(), nums.end());
      int major = nums.front();
      int max_length = 1;
      int length = 1;
      for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] == nums[i - 1]) {
          ++length;
        } else {
          if (max_length < length) {
            max_length = length;
            major = nums[i - 1];
          }
          length = 1;
        }
      }
      if (max_length < length) {
        major = nums.back();
      }

      return major;
    }

    return 0;
  }
};

void TestMajorityElement() {
  Solution s;
  {
    vector<int> nums{3, 2, 3};
    assert(3 == s.majorityElement(nums));
  }
  {
    vector<int> nums{2, 2, 1, 1, 1, 2, 2};
    assert(2 == s.majorityElement(nums));
  }
}

int main() {
  TestMajorityElement();
  std::cout << "Ok!" << std::endl;
  return 0;
}
