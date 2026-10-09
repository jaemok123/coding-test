#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    while (n > 0) {
        if (n % 2 == 1 && n !=3) {
            n -= 1;
            answer += n;
        }
        else if (n % 2 == 0 && n != 2) {
            answer += n;
            n -= 2;
        }
        else if (n == 3) {
            n -= 3;
            answer += 2;
        }
        else {
            n -= 2;
            answer += 2;
        }
    }
    return answer;
}