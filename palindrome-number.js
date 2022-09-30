var isPalindrome = (x) => {
  let s = x.toString();
  let t = s.split('').reverse().join('');
  console.log(s);
  console.log(t);

  if (s == t) {
    return true;
  }

  return false;
};

console.log('====================================');
console.log(isPalindrome(121));
console.log('====================================');
