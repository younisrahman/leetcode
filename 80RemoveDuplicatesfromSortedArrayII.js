/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function (nums) {
  let previous = nums[0];
  let previous2;
  let i = 1;
  let length = nums.length;
  while (i < length) {
    if (previous === previous2 && previous === nums[i]) {
      previous2 = previous;
      previous = nums[i];
      nums.splice(i, 1);
      length--;
    } else {
      previous2 = previous;
      previous = nums[i];
      i++;
    }
  }
};
