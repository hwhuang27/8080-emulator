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
    cc.cy = 0;

    uint8_t a = 0xab;
    printf("a = 0x%x\n", a);

    uint8_t bit = (a & 0x1);

    a = a & (bit << 7);
    cc.cy = (0 != bit);

    printf("a = 0x%x, carry = %d\n", a, cc.cy);

    return 0;
}
