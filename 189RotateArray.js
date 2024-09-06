/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function (nums, k) {
  // while(k !== 0){
  //     nums.unshift(nums[nums.length-1])
  //     nums.pop()
  //     k--
  // }
  k = k % nums.length;

  // Slice the array and rearrange it
  let part1 = nums.slice(nums.length - k);
  let part2 = nums.slice(0, nums.length - k);

  // Merge the two parts
  for (let i = 0; i < part1.length; i++) {
    nums[i] = part1[i];
  }

  for (let i = 0; i < part2.length; i++) {
    nums[i + part1.length] = part2[i];
  }
};
