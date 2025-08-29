#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
    FILE *fp;
    char *filename = argv[1]; 
    fp = fopen(filename ,"r");
    char c, letra = 0;
    int count = 0;
    while((c = fgetc(fp)) != EOF){
        if(c >= '0' && c <= '9'){
             count = count * 10 + (c - '0');
        } else {
            if(letra != 0){ 
                if(count == 0) count = 1;
                for(int i = 0; i < count; i++){
                    putchar(letra);
                }
                count = 0;
            }
            letra = c;
        }
    }
    if(letra != 0){
        if(count == 0) count = 1;
        for(int i = 0; i < count; i++){
            putchar(letra);
        }
    }
    fclose(fp);
    return 0;
}
