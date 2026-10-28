#include <string>
#include <vector>

using namespace std;

int solution(int n, int t) {
    int answer = 0;
    for (int i = 1; i <= t; i++) // 2 4 8 16 32 n *= 2 을 T번 반복한다.
    {
        n *= 2;
        answer = n;
    }
    return answer;
}