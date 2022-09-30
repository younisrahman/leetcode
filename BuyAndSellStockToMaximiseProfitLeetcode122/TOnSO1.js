function stock() {
  let arr = [5, 2, 6, 1, 4, 7, 3, 6];
  let minSoFar = arr[0];
  let profit = 0;
  for (let i = 0; i < arr.length - 1; i++) {
    if (arr[i] < arr[i + 1]) {
      profit += arr[i + 1] - arr[i];
    }
  }

  console.log('====================================');
  console.log(profit);
  console.log('====================================');
}
stock();
