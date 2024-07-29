#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

const long long MAX_PRIME = 1000000;

vector<long long> sieve_of_eratosthenes() {
    vector<bool> is_prime(MAX_PRIME + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (long long i = 2; i * i <= MAX_PRIME; ++i) {
        if (is_prime[i]) {
            for (long long j = i * i; j <= MAX_PRIME; j += i) {
                is_prime[j] = false;
            }
        }
    }
    vector<long long> primes;
    for (long long i = 2; i <= MAX_PRIME; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    vector<long long> primes = sieve_of_eratosthenes();
    unordered_set<long long> t_primes;

    for (long long prime : primes) {
        t_primes.insert(prime * prime);
    }

    for (long long x : numbers) {
        if (t_primes.find(x) != t_primes.end()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
