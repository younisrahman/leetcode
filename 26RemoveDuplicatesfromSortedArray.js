/**
 * @param {number[]} nums
 * @return {number}
 */

var removeDuplicates = function (nums) {
  let previous = nums[0];
  let i = 1;
  let length = nums.length;
  while (i < length) {
    if (previous === nums[i]) {
      previous = nums[i];
      nums.splice(i, 1);
      length--;
    } else {
      previous = nums[i];
      i++;
    }
  }
};
