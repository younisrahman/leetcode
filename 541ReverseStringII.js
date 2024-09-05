var reverseStr = function (s, k) {
  let arr = s.split(""); // Convert the string to an array to allow modification

  let n = arr.length; // Get the length of the array

  let isLoop = true;
  let kstart = 0;

  while (isLoop) {
    let kend = Math.min(kstart + k - 1, n - 1); // Determine the end of the segment

    // Reverse the characters from kstart to kend
    let start = kstart;
    let end = kend;
    while (end > start) {
      const temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      start++;
      end--;
    }

    // Move to the next segment
    kstart += 2 * k; // Skip the next k characters

    // Stop looping if we've processed all characters
    if (kstart >= n) {
      isLoop = false;
    }
  }

  return arr.join(""); // Convert the array back to a string
};
