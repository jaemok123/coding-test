#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int s1 = 0;
    int answer = 0; // 10으로 나눈 나머지, 100으로 나눈 나머지 10으로 나눈 몫, 1000으로 나눈 나머지 100으로 나눈 몫 
    for (int i = 10; i < 10 * n; i*=10) {
        s1 = n % i;
        answer += (s1 / (i / 10));
    }
    return answer;
}