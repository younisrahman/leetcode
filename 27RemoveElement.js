// /**
//  * @param {number[]} nums
//  * @param {number} val
//  * @return {number}
//  */
// var removeElement = function (nums, val) {
//   const arrayLength = nums.length - 1;
//   let i = 0;
//   while (i <= arrayLength) {
//     if (nums[i] == val) {
//       // nums.splice(i, 1)
//       for (let j = i; j < arrayLength - 1; j++) {
//         nums[j] = nums[j + 1];
//       }
//     } else i++;
//   }
// };

/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */

function manualSplice(arr, start, deleteCount) {
  let removed = [];

  for (let i = start; i < start + deleteCount; i++) {
    removed.push(arr[i]);
  }

  for (let i = start; i < arr.length - deleteCount; i++) {
    arr[i] = arr[i + deleteCount];
  }

  arr.length = arr.length - deleteCount;

  return removed;
}

var removeElement = function (nums, val) {
  const arrayLength = nums.length - 1;
  let i = 0;
  while (i <= arrayLength) {
    if (nums[i] == val) {
      manualSplice(nums, i, 1);
    } else i++;
  }
};
