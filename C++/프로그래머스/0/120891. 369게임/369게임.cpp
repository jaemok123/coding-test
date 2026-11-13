#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0; // string에 쑤셔 박고 아스키로 비교
    string num = to_string(order);
    for(int i = 0; i < num.size(); i++) {
        if (num[i] - 48 == 3 || num[i] - 48 == 6 || num[i] - 48 == 9) {
            answer++;
        }
    }
    return answer;
}