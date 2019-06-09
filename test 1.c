#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	const int n = 10000;
	char s1[n] = "";
	char s2[n] = "";
	gets(s1);
	gets(s2);
	char *s = strstr(s2,s1);//输出的是找到的s1以及后续字符串，所以地址需要倒过去减掉找到的这个部分
	if(s == NULL){ //这里用地址做判断，所以不用考虑里面的内容
		printf("-1");
	}
	while(s != NULL){
		printf("%d ", s-s2);
	    s = s+1;
	    s = strstr(s,s1);
    }
	return 0;

}

