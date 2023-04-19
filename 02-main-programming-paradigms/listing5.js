// To launch this script on the Linux command line use node:
// node listing5.js

function mult_by_two_declarative (array) {
    return array.map((item) => item * 2)
}

array = [1, 2, 3]
res = mult_by_two_declarative(array)
console.log(`Result: ${res}`);
