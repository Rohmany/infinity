#include <bits/stdc++.h>

bool isPrime(long long n) {
    if(n < 2) return false;
    if(n < 4) return true;
    if(n % 2 == 0) return false;
    long long _n = sqrt(n);
    for(long long it = 3; it <= _n; it+=2) {
        if(n%it == 0) return false;
    }
    return true;
}

bool isComposite(long long n) {
    return (isPrime(n) == false && n > 1);
}
int length(long long n) {
    int c = 0;
    while(n) n/=2,c++;
    return c;
}
bool isValidNumber(std::string s) {
    for(unsigned t = 0; t < s.size(); t++) {
        if(s[t] < '0' || s[t] > '9') return false;
    }
    return true;
}
long long getPrimeAfter(long long n) {
    for(long long it = n + 1;; it++) {
        if(isPrime(it)) return it;
    }
}
