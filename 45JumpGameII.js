var jump = function (nums) {
  let maxReach = 0;
  let currentEnd = 0;
  let jumps = 0;
  if (nums.length === 1) return 0;

  for (let i = 0; i < nums.length - 1; i++) {
    maxReach = Math.max(maxReach, i + nums[i]);
    if (i === currentEnd) {
      jumps++;
      currentEnd = maxReach;
      if (currentEnd >= nums.length - 1) break;
    }
  }

  return jumps;
};

console.log(jump([4, 1, 1, 3, 1, 1, 1])); // Output: 2
