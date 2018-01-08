#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
using namespace std;

typedef long long int lli;

const lli maxn = lli(1e5)+5;

lli S[maxn], P[maxn], A[maxn];

int main(void)
{
	lli n;
	scanf("%lld", &n);
	for(lli i = 1;i <= n;i++)
	{
		scanf("%lld", &A[i]);
		P[i] = A[i]+P[i-1];
	}

	lli tot = P[n];

	map<lli, lli> oc;
	lli res = 0;
	for(lli i = n;i > 0;i--)
	{
		if(oc.find(P[i]) != oc.end() && P[i] == tot/3) res += oc[P[i]];
		S[i] = S[i+1]+A[i];
		if(i < n) oc[S[i+1]]++;
	}
	printf("%lld\n", res);
}
