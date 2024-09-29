class RandomizedSet {
  mySet: Set<number>;

  constructor() {
    this.mySet = new Set();
  }

  insert(val: number): boolean {
    if (this.mySet.has(val)) {
      return false;
    }
    this.mySet.add(val);
    return true;
  }

  remove(val: number): boolean {
    if (this.mySet.has(val)) {
      this.mySet.delete(val);
      return true;
    }
    return false;
  }

  getRandom(): number {
    const arr = Array.from(this.mySet);
    const randomIndex = Math.floor(Math.random() * arr.length);
    return arr[randomIndex];
  }
}

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * var obj = new RandomizedSet()
 * var param_1 = obj.insert(val)
 * var param_2 = obj.remove(val)
 * var param_3 = obj.getRandom()
 */
