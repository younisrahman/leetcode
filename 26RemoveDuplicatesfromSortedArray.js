/**
 * @param {number[]} nums
 * @return {number}
 */

function manualSplice(arr, start, deleteCount) {
  for (let i = start; i < arr.length - deleteCount; i++) {
    arr[i] = arr[i + deleteCount];
  }
  arr.length = arr.length - deleteCount;
}

var removeDuplicates = function (nums) {
  let previous = nums[0];
  let i = 1;
  let length = nums.length;
  while (i < length) {
    if (previous === nums[i]) {
      previous = nums[i];
      nums.splice(i, 1);
      // manualSplice(nums,i,1)
      length--;
    } else {
      previous = nums[i];
      i++;
    }
  }
};
