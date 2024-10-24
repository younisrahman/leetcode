/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function (nums) {
  const length = nums.length;
  const ans = [];
  const prefix = [];
  prefix[0] = 1;
  const suffix = [];
  suffix[length - 1] = 1;

  for (let i = 1; i < length; i++) {
    prefix[i] = nums[i - 1] * prefix[i - 1];
  }
  for (let j = length - 2; j >= 0; j--) {
    suffix[j] = nums[j + 1] * suffix[j + 1];
  }

  for (let k = 0; k < length; k++) {
    ans[k] = prefix[k] * suffix[k];
  }

  return ans;
};
