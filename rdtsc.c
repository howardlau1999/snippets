#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>
#include <x86intrin.h>

int main() {
    int test;
    uint64_t tik = __rdtsc();
    ++test;
    uint64_t tok = __rdtsc();
    printf("Tik = %llu, Tok = %llu, Elapsed: %llu\n", (unsigned long long) tik, (unsigned long long) tok, (unsigned long long) (tok - tik));
    return 0;
}
