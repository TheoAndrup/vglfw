#include <stdlib.h>

const void **VtoCVfw(void **src) {
    //this function is a workaround and Im not sure if this can cause severe bugs or not.
    return (const void **)src;
}

short unsigned int **SuIntConv(void ** v) {
    return (short unsigned int **)v;
}

void memcopy_workaround(void *a, void *b, int count) {
    memcpy(a, b, count);
}