var longestPalindrome = function (s) {
  const n = s.length;
  if (n < 2) return s;

  let bestStart = 0, bestLen = 1;

  function expand(l, r) {
    while (l >= 0 && r < n && s[l] === s[r]) { l--; r++; }
    const len = r - l - 1;     // palindrome length after overshoot
    if (len > bestLen) { bestLen = len; bestStart = l + 1; }
  }

  for (let i = 0; i < n; i++) {
    expand(i, i);       // odd
    expand(i, i + 1);   // even
  }
  return s.slice(bestStart, bestStart + bestLen);
};
