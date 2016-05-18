// mtr-cp.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define  CMD_MAX_BUFF 4096


int main(int argc, char* argv[])
{

#ifdef DEBUG
	system("pwd"); ;
#endif

#if 0
	printf("%d\n",argc);
	for(int i = 0;i<argc;++i){
		printf("%s ", argv[i]);
	}
	printf("\n");
	return 0;
#endif

	if(argc < 2){
		printf("no ip\n");
		return 0 ;
	}
	char ** domain = &argv[1];
	char buff[CMD_MAX_BUFF];
	
	int i = 0;
	int ip_num = argc-1;

	for(i = 0;i<ip_num;++i){
		sprintf(buff,"WinMTR.exe %s >%s.txt",domain[i],domain[i]);

#ifdef DEBUG
		printf("%s\n",buff);
#endif
		system(buff);

		sprintf(buff,"grep.exe -v \"???\" %s.txt |awk -f 1.awk",domain[i]);

#ifdef DEBUG
		printf("%s\n",buff);
#endif

		system(buff);
	}


// 	printf("%s ",domain[i]);
// 	fflush(stdout);
// 	int sys_ret = system(buff);
// 	printf("%d\n",sys_ret);

	//system("WinMTR.exe gs.push.rgbvr.com");

	
	//system("pause");
	return 0;
}

