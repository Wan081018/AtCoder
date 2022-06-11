/*******************************
 * Copyright (c) 2022, Wan Buwen
 * All rights reserved.

 * Author£ºWan Buwen
 * Version: 1.0
 * Date£º11/06/22 20:11
*******************************/

#include<cstdio>
#include<cmath>

#define min(a, b) ((a)<(b) ? (a) : (b))

long long get_num(long long a, long long d, long long i){
	return a+(i-1)*d;
}

long long search_f(long long x, long long a, long long d, long long n){
	long long l=1, r=n, res=-1;
	while(l<=r){
		long long m=(l+r)>>1;
		if(get_num(a, d, m)<=x){
			res=get_num(a, d, m);
			l=m+1;
		} else r=m-1;
	}
	return res;
}

long long search_b(long long x, long long a, long long d, long long n){
	long long l=1, r=n, res=-1;
	while(l<=r){
		long long m=(l+r)>>1;
		if(get_num(a, d, m)>=x){
			res=get_num(a, d, m);
			r=m-1;
		} else l=m+1;
	}
	return res;
}

int main(){
	long long x, a, n;
	int d;
	scanf("%lld %lld %d %lld", &x, &a, &d, &n);
	if(d<0){
		x=-x;
		a=-a;
		d=-d;
	}
//	if(d==0){
//		printf("%lld\n", abs(x-a));
//		return 0;
//	}
//	long long p=(x-a)/d;
//	if(p<0) p=0;
//	if(p>n) p=n;
//	long long f=p, b=p+1;
//	printf("%lld\n", min(abs(x-a-f*d), abs(a+b*d-x)));
	long long f=search_f(x, a, d, n), b=search_b(x, a, d, n);
	if(f==-1) printf("%lld\n", b-x);
	else if(b==-1) printf("%lld\n", x-f);
	else printf("%lld\n", min(x-f, b-x));
	return 0;
}

