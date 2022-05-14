/*******************************
 * Copyright (c) 2022, Wan Buwen
 * All rights reserved.

 * Author£ºWan Buwen
 * Version: 1.0
 * Date£º14/05/22 20:24
*******************************/

#include<cstdio>
#include<cstring>
//#include<set>

#define INF 100000000005
#define min(a, b) ((a)<(b) ? (a) : (b))
#define MIN(a, b, c) min(min(a, b), c) 

long long A[300005], dp[2][300005];
//std::set<int> S;

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; ++i) scanf("%lld", A+i);
	dp[0][1]=A[n];
	//dp[1][1]=INF;
	dp[1][2]=dp[0][1]+A[2];
	dp[0][3]=dp[1][2];
	dp[1][3]=dp[1][2]+A[3];
	for(int i=4; i<n; ++i){
		dp[0][i] = dp[1][i-1];
		dp[1][i] = min(dp[0][i-1], dp[1][i-1])+A[i];
		printf("%d %d\n", dp[0][i], dp[1][i]);
	}
	int res=min(dp[0][n-1], dp[1][n-1]);
	memset(dp, 0, sizeof(dp));
	dp[1][1]=A[1];
	dp[0][2]=dp[1][1];
	dp[1][2]=dp[1][1]+A[2];
	for(int i=3; i<=n; ++i){
		dp[0][i] = dp[1][i-1];
		dp[1][i] = min(dp[0][i-1], dp[1][i-1])+A[i];
		printf("%d %d\n", dp[0][i], dp[1][i]);
	}
	printf("%lld\n", MIN(res, dp[0][n], dp[1][n]));
	return 0;
}

