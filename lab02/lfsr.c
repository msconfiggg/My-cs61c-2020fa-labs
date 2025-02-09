#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    unsigned tmp = *reg & 1;
    tmp ^= *reg >> 2 & 1;
    tmp ^= *reg >> 3 & 1;
    tmp ^= *reg >> 5 & 1;
    *reg >>= 1;
    *reg |= tmp << 15;
}

