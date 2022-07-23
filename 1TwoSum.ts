function twoSum(nums: number[], target: number): number[] {
  const arr = [...nums];
  nums.sort((a, b) => a - b);
  let left = 0;
  let right = nums.length - 1;
  while (left < right) {
    const sum = nums[left] + nums[right];
    if (sum === target) {
      return [arr.indexOf(nums[left]), arr.indexOf(nums[right])];
    }
    if (sum < target) {
      left++;
    }
    if (sum > target) {
      right--;
    }
  }
  return nums;
}

let arr = [2, 23, 11, 1, 6, 7, 15];
console.log(twoSum(arr, 9));
