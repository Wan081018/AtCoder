/*******************************
 * Copyright (c) 2022, Wan Buwen
 * All rights reserved.

 * Author£ºWan Buwen
 * Version: 1.0
 * Date£º11/06/22 21:18
*******************************/

#include<cstdio>
#include<cmath>
#include<algorithm>

long long a[200005], sum[200005];

long long search(long long n, long long d){
	long long l=1, r=n, res=-1;
	while(l<=r){
		long long m=(l+r)>>1;
		if(a[m]<=d){
			res=m;
			l=m+1;
		} else r=m-1;
	}
	return res;
}

int main(){
	long long n, q;
	scanf("%lld %lld", &n, &q);
	for(int i=1; i<=n; ++i) scanf("%lld", a+i);
	std::sort(a+1, a+n+1);
	for(int i=1; i<=n; ++i) sum[i]=sum[i-1]+a[i];
	while(q--){
		long long x;
		scanf("%lld", &x);
		long long p=search(n, x);
		if(p==-1){
			if(x<a[1]) p=0;
			else p=n;
		}
		printf("%lld\n", x*p-sum[p]+sum[n]-sum[p]-x*(n-p));
	}
	return 0;
}

