/*******************************
 * Copyright (c) 2022, Wan Buwen
 * All rights reserved.

 * Author£ºWan Buwen
 * Version: 1.0
 * Date£º${date}
*******************************/

#include<cstdio>
#include<cstring>

char str[10];

int main(){
	scanf("%s", str+1);
	int n=strlen(str+1);
	if(n==1){
		printf("%s%s%s%s%s%s\n", str+1, str+1, str+1, str+1, str+1, str+1);
	} else if(n==2){
		printf("%s%s%s\n", str+1, str+1, str+1);
	} else printf("%s%s\n", str+1, str+1);
	return 0;
}

