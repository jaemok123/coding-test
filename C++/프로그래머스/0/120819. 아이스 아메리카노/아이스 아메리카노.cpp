#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer; // 배열 0에 잔 수 배열 1에 잔 돈 
    int cof;
    int mon;
    cof = money / 5500;
    mon = money % 5500;
    answer.push_back(cof);
    answer.push_back(mon);
    return answer;
}