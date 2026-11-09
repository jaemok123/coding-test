#include <string>
#include <vector>

using namespace std;

int solution(int hp) { // hp 를 5로 나눠 나머지가 있으면 2로 나누고 나머지가 있으면 1로 나눈다. 모든 몫을 더한디.
    int answer = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    while (hp > 0) {
        if (hp % 5 == 0) {
            a = hp / 5;
            hp = 0;
        }
        else if (hp % 3 == 0 && hp < 5) {
            b = hp / 3;
            hp = 0;
        }
        else if (hp == 1) {
            c = 1;
            hp = 0;
        }
        else if (hp == 2) {
            c = 2;
            hp = 0;
        }
        else if (hp % 5 > 0 && hp > 5) {
            a = hp / 5;
            hp %= 5;
        }
        else if (hp % 3 > 0) {
            b = hp / 3;
            hp %= 3;
        }
        answer = a + b + c;
    }
    return answer;
}