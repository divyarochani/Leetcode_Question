var argumentsLength = function(...args) {
    // return args.length
    let count = 0
    for(let i =0; i <args.length ; i++){
        count += 1
    }
    return count
};