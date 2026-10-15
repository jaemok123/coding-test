#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for (int i = 0; i < my_string.size(); i++) {
        if (isalpha(my_string[i]) == 0) {
            answer += my_string[i] - '0';
        }
    }
    return answer;
}