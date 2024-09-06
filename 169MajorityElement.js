/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function (nums) {
  let key = nums[0];
  let val = 1;
  for (let i = 1; i < nums.length; i++) {
    if (val === 0) {
      key = nums[i];
    }
    if (key === nums[i]) {
      val++;
    } else {
      val--;
    }
  }
  return key;
};
