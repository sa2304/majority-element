#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int majorityElement(vector<int> &nums) {
    // FIXME
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
