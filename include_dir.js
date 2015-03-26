var path = require('path');

console.log(path.relative('.', path.join(__dirname, 'include')));