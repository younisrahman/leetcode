
const str = "pwwkew"
var lengthOfLongestSubstring = function(s) {
    const set = new Set()
    let maxLength=0

    let left=0
    let right =0
    while(right < s.length){
        if(set.has(s[right])){
            set.delete(s[left])
            left++
        }
        else{
            set.add(s[right])
            right++
            maxLength = Math.max(maxLength, set.size)
        }
    }

    return maxLength
};


console.log(lengthOfLongestSubstring(str))