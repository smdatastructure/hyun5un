#include <stdio.h>
#include <string.h>
int main(void){
    char input[100];
    printf("문자열을 입력하세요 : ");
    fgets(input, sizeof(input),stdin);
    if (strchr(input, '\n')!=NULL){
        *strchr(input, '\n')='\0';
    }
    printf("입력된 문자열은\n\"%s\"\n입니다.\n", input);
    printf("입력한 문자열의 길이: %lu\n", strlen(input));
    return 0;
}
