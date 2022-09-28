function stock() {
  let arr = [3, 5, 1, 7, 4, 9, 3];
  let minSoFar = arr[0];
  let profit = 0;
  for (let i = 0; i < 7; i++) {
    minSoFar = Math.min(minSoFar, arr[i]);
    profit = Math.max(profit, arr[i] - minSoFar);
  }

  console.log('====================================');
  console.log(profit);
  console.log('====================================');
}
stock();
