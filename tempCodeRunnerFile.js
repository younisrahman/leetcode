let str = s.split('');
  let ans = 1;
  if (str.length == 1 && str[0] != 0) {
    return 1;
  }
  if (str.length < 3 && str[0] == 0) {
    return 0;
  }
  for (let i = 0; i < str.length; i++) {
    if (str[i] != 0 && str[i] + str[i + 1] <= 26) {
      ans++;
    }
  }
  return ans;