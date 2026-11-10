#define UNIT_TEST
#include "primes.cpp"
#include <cassert>

int main() {
    assert(primes_up_to(1).empty());
    assert(primes_up_to(2) == std::vector<int>({2}));
    assert(primes_up_to(10) == std::vector<int>({2, 3, 5, 7}));
    assert(primes_up_to(100).size() == 25);
    std::cout << "All tests passed\n";
}
