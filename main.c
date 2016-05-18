#include <stdio.h>
#include <stdlib.h>

#define CMD_MAX_BUFF 1024
enum LOG_LEVEL
{
    LOG_NO = 0,
    LOG_TRACE,
    LOG_INFO,
    LOG_DEBUG,
// 
    LOG_ALL,
};

#ifndef DEBUG_LEVEL
#define DEBUG_LEVEL LOG_NO
#endif

// #define P_LOG_LEVEL(Level) (DEBUG_LEVEL < Level)

int main(int argc,char * argv[]){


    // char * domain[] = {
    //     "gs.push.rgbvr.com",
    //     "dl.push.rgbvr.com",
    // };

    // printf("%d\n", DEBUG_LEVEL);
    // printf("%d\n", LOG_DEBUG);

// #if P_LOG_LEVEL(LOG_ALL)
//     printf("%d\n",argc);
//     for(int i = 0;i<argc;++i){
//         printf("%s ", argv[i]);
//     }
//     printf("\n");
//     return 0;
// #endif

    if(argc < 2){
        printf("no ip\n");
        // exit;
        return 0 ;
    }
    char ** domain = &argv[1];
    // freopen("out.txt","w",stdout);
    char buff[CMD_MAX_BUFF];
//   system("pwd");
//
    int ip_num = argc - 1;
    for(int i =0;i< ip_num;++i){
        // sprintf(buff,"sudo mtr  -i 0.1 --report -c 10 -n %s |awk -f 1.awk",domain[i]);
        // sprintf(buff,"./WinMTR.exe %s >%s.txt && grep.exe -v \"???\" %s.txt|awk -f 1.awk",domain[i],domain[i],domain[i]);
        sprintf(buff,"./WinMTR.exe %s >%s.txt;grep.exe -v \"???\" %s.txt | awk -f 1.awk",domain[i],domain[i],domain[i]);
       // printf("%s\n",buff);
        printf("%s ",domain[i]);
        fflush(stdout);

        int sys_ret = system(buff);
        // printf("%d",sys_ret);
        //system("sudo mtr  -i 0.1 --report -c 100 -n gs.push.rgbvr.com |awk -f 1.awk");
    }
}
