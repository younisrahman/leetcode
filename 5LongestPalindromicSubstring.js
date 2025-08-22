
const s = "babad"
var longestPalindrome = function(s) {
    function isPal(s){
        let sub = s
        let rev = sub.split('').reverse().join('')
        return sub == rev
    }

    function allSubstrings(s) {
        let res = ''
        let maxLength = 0
        for (let i = 0; i < s.length; i++) {
            for (let j = i + 1; j <= s.length; j++) {
                const subString = s.slice(i, j)
                if(isPal(subString)){
                    if(subString.length > maxLength){
                        maxLength = subString.length
                        res = subString
                    }
                }
                    
            }
        }
        return res; 
    }


    return allSubstrings(s)
};



console.log(longestPalindrome(s))