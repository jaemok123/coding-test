#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2) { // 하나씩 차례대로 삽입 만약 num1과 i가 같으면 num2를 삽입 num2와 i가 같으면 num1을 삽입
    string answer = "";
    for (int i = 0; i < my_string.size(); i++) {
        if (num1 == i) {
            answer.push_back(my_string[num2]);
        }
        else if (num2 == i) {
            answer.push_back(my_string[num1]);
        }
        else {
            answer.push_back(my_string[i]);
        }
    }
    return answer;
}