#include<stdio.h>
#include<stdlib.h>

#define CMD_MAX_BUFF 1024

int main(){
    char * domain[] = {
        "gs.push.rgbvr.com",
        "dl.push.rgbvr.com",
    };

    // freopen("out.txt","w",stdout);
    char buff[CMD_MAX_BUFF];
//   system("pwd");
//
    for(int i =0;i<2;++i){
        // sprintf(buff,"sudo mtr  -i 0.1 --report -c 10 -n %s |awk -f 1.awk",domain[i]);
        // sprintf(buff,"./WinMTR.exe %s >%s.txt && grep.exe -v \"???\" %s.txt|awk -f 1.awk",domain[i],domain[i],domain[i]);
        sprintf(buff,"./WinMTR.exe %s >%s.txt;grep.exe -v \"???\" %s.txt | awk -f 1.awk",domain[i],domain[i],domain[i]);
//        printf("%s\n",buff);
        printf("%s ",domain[i]);
        fflush(stdout);
        system(buff);
        //system("sudo mtr  -i 0.1 --report -c 100 -n gs.push.rgbvr.com |awk -f 1.awk");
    }
}
