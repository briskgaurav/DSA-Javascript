var plusOne = function (digits) {


    let res = BigInt(digits.join(""))
    let inc = String(BigInt(res) + 1n)
    // console.log(inc)
    let t = inc.split("")
    const final = t.map((elem) => (
        Number(elem)
    ))
    return final;

};