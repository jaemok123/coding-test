#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) { //인덱스 0과 1부터 차례대로 비교하여 숫자가 크면 a 두번째로 큰건 b에 넣는다. 그 후 곱하고 리턴.
    int answer = 0;
    int a = numbers[0];
    int b = numbers[1];
    for (int i = 2; i < numbers.size(); i++) {
        if (a < numbers[i] && b > numbers[i]) {
            a = numbers[i];
        }
        else if (a > numbers[i] && b < numbers[i]) {
            b = numbers[i];
        }
        else if (a >= b && a < numbers[i] && b < numbers[i]) {
            b = numbers[i];
        }
        else if (a < b && a < numbers[i] && b < numbers[i]) {
            a = numbers[i];
        }
        else {
            continue;
        }
    }
    answer = a*b;
    return answer;
}