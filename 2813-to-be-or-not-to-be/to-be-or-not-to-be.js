var expect = function(val) {
    return {
        toBe(val1){
            if(val === val1) return true
            else throw new Error("Not Equal")
        },
        notToBe(val1){
            if(val !== val1) return true
            else throw new Error("Equal")
        }
    }
    // return obj
};