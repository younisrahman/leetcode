var reverseString = function (s) {
  let start = 0;
  let end = s.length - 1;
  while (end >= start) {
    const temp = s[start];
    s[start] = s[end];
    s[end] = temp;
    start++;
    end--;
  }
  return s;
};
