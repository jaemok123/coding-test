#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) { // 피자 조각, 사람 if (조각 < 사람)
    int answer = 1;
    while (slice < n) 
    {
        answer++;
        n = n - slice;
        if (slice >= n) 
        {
            break;
        }
    }
    return answer;
}