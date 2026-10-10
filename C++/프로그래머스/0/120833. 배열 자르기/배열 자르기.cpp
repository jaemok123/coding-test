#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> v, int num1, int num2) {
    // num1 = 2, num2 = 3 일때 2번째 ~ 3번째 인덱스까지 자른 배열 리턴 즉
    // [1, 2, 3, 4, 5] 일 때 [3, 4] 리턴
    v.erase(v.begin() + num2 + 1, v.end()); // 뒤에 부터 자르기
    v.erase(v.begin(), v.begin() + num1); // 인덱스 0~num1까지 삭제
    return v;
}