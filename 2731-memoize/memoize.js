function memoize(func) {
    let cache = {}
    return function (...args) {
        // let n = args[0]
        let n = JSON.stringify(args)
        if (n in cache) {
            return cache[n]
        } else {
            // let result = func(n)
            let result = func.apply(this , args)
            cache[n] = result
            return result
        }
    }
}
