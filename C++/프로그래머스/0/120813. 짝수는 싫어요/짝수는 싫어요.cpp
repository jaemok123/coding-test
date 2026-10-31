#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int i = 0;
    while (i <= n) {
        if (i % 2 == 1) {
            answer.push_back(i);
            i += 2;
        }
        else {
            i += 1;
            answer.push_back(i);
            i += 2;
        }
    }
    return answer;
}