#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int pizza = 7; // 7 을 2배씩 곱해서 n을 넘으면 종료 
    while(pizza < n) {
        answer++;
        pizza += 7;
    }
    return answer;
}