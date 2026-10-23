#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    int j = n;
    while(n - 10 >= 0) {
        n -= 10;
        k -= 1;
    }
    answer = (12000*j) + (2000*k);
    return answer;
}