#include<bits/stdc++.h>

using namespace std;

bool is_prime(long long int n)
{
    if (n < 2)
        return false;

    if (n == 2)
        return true;

    if (n % 2 == 0)
        return false;

    for (int i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0)
            return false;

    return true;
}

vector<int> primes(int N)
{
    bitset<10000005> sieve;      // MAX deve ser maior ou igual a N
    vector<int> ps;

    sieve.set();            // Todos são "potencialmente" primos
    sieve[1] = false;       // 1 não é primo

    for (int i = 2; i <= N; ++i)
    {
        if (sieve[i])       // i é primo
        {
            ps.push_back(i);

            for (int j = 2 * i; j <= N; j += i)
                sieve[j] = false;
        }
    }

    return ps;
}

int main(){

	auto prim = primes(10000005);
	set<long long int> ans;

	long long int num;

	cin >> num;

	for(auto p:prim){
		if(num%p == 0){
			ans.insert(p);
			num /= p;
		}
	}

	if (is_prime(num)){
		ans.insert(num);
	}

	cout << (pow(2, ans.size())-(1+ans.size())) << endl;

	return 0;
}
