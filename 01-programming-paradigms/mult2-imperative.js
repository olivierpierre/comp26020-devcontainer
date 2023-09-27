// To launch this script on the Linux command line use node:
// node node mult2-imperative.js

function mult_by_two_imperative (array) {
  let results = []
  for (let i = 0; i < array.length; i++){
    results.push(array[i] * 2)
  }
  return results
}

array = [1, 2, 3]
res = mult_by_two_imperative(array)
console.log(`Result: ${res}`);
