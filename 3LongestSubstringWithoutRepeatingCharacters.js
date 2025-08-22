
const str = "pwwkew"
var lengthOfLongestSubstring = function(s) {
    let sub = []
    let ans = 0
    let subAns = 0
    
    for(a of s){
        
        if(!sub.includes(a)){
            sub.push(a)
            subAns++
        }
        else{
            sub = [a]
            subAns= 1
        }
        ans = Math.max(subAns, ans)
    }

    return ans
};


console.log(lengthOfLongestSubstring(str))