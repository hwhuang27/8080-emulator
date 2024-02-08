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
    cc.cy = 1;

    printf("carry flag = %d, set = %d\n", cc.cy, (cc.cy | 1));

    return 0;
}
