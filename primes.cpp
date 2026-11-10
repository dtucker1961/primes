#include <iostream>
#include <vector>
#include <cstdlib>

std::vector<int> primes_up_to(int n) {
    std::vector<bool> is_prime(n + 1, true);
    std::vector<int> result;
    for (int i = 2; i < n; ++i) {
        if (!is_prime[i]) continue;
        result.push_back(i);
        for (long long j = (long long)i * i; j <= n; j += i)
            is_prime[j] = false;
    }
    return result;
}

#ifndef UNIT_TEST
int main(int argc, char* argv[]) {
    int n = (argc > 1) ? std::atoi(argv[1]) : 100;
    for (int p : primes_up_to(n)) std::cout << p << ' ';
    std::cout << '\n';
}
#endif