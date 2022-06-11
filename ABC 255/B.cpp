/*******************************
 * Copyright (c) 2022, Wan Buwen
 * All rights reserved.

 * Author£ºWan Buwen
 * Version: 1.0
 * Date£º11/06/22 20:02
*******************************/

#include<cstdio>
#include<cmath>

#define min(a, b) ((a)<(b) ? (a) : (b))
#define max(a, b) ((a)>(b) ? (a) : (b))

int a[1005], x[1005], y[1005];

double dis(int x1, int y1, int x2, int y2){
	return sqrt((long long)(x1-x2)*(x1-x2) + (long long)(y1-y2)*(y1-y2));
}

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	for(int i=1; i<=k; ++i) scanf("%d", a+i);
	for(int i=1; i<=n; ++i) scanf("%d %d", x+i, y+i);
	double ans=0;
	for(int i=1; i<=n; ++i){
		double res=1E6;
		for(int j=1; j<=k; ++j) if(i==a[j]) goto brk;
		for(int j=1; j<=k; ++j) res=min(res, dis(x[i], y[i], x[a[j]], y[a[j]]));
		ans=max(ans, res);
		brk:;
	}
	printf("%.18lf\n", ans);
	return 0;
}

