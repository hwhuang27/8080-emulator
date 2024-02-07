/* Sandbox file for understanding concepts */
#include<stdio.h>
#include<stdbool.h>
#include<stdint.h>
#include<string.h>
#include<math.h>

typedef struct ConditionCodes{
    uint8_t cy : 1;
} ConditionCodes;

int main(){
    setbuf(stdout, NULL);
    struct ConditionCodes cc;

    uint8_t a = 0xab;
    uint8_t b = 0xcd;
    uint16_t ret = a << 8 | b;

    printf("ret address: 0x%x\n", ret);

    return 0;
}
