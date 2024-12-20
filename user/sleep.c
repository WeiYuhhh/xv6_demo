#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]){
    if (argc<=1){
        printf("erro!please wirte the seconds you want sleep for" );
        exit(1);
    }
    sleep(atoi(argv[1]));
    exit(0);
}