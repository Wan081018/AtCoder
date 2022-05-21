/*******************************
 * Copyright (c) 2022, Wan Buwen
 * All rights reserved.

 * Author£ºWan Buwen
 * Version: 1.0
 * Date£º21/05/22 20:01
*******************************/

#include<cstdio>

#define max(a, b) ((a)>(b) ? (a) : (b))

int A[105];

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	int mx=0;
	for(int i=1; i<=n; ++i){
		scanf("%d", A+i);
		mx=max(mx, A[i]);
	}
	for(int i=1; i<=k; ++i){
		int a;
		scanf("%d", &a);
		if(A[a]==mx){
			puts("Yes");
			return 0; 
		}
	}
	puts("No");
	return 0;
}

