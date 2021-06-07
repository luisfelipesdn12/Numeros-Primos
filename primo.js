var primos = [];

for (var n = 2; true; n++) {
    var nIsDivisible = primos
        .filter(p => p <= Math.sqrt(n))
        .some(p => n % p == 0);

    if (!nIsDivisible) {
        primos.push(n);
        console.log(n);
    }
}
