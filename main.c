#include <stdio.h>
#include <stdlib.h>

#define CMD_MAX_BUFF 1024


int main(int argc,char * argv[]){


    if(argc < 2){
        printf("no ip\n");
        return 0 ;
    }
    char ** domain = &argv[1];
    char buff[CMD_MAX_BUFF];
    int ip_num = argc - 1;
    for(int i =0;i< ip_num;++i){
        sprintf(buff,"./WinMTR.exe %s >%s.txt;grep.exe -v \"???\" %s.txt |awk -f 1.awk",domain[i],domain[i],domain[i]);
        printf("%s ",domain[i]);
        fflush(stdout);
        int sys_ret = system(buff);
        printf("%d\n",sys_ret);
    }
}
