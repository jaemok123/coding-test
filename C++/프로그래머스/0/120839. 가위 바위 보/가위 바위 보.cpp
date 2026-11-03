#include <string>
#include <vector>

using namespace std;

string solution(string rsp) { // rsp[i] = 2이면 0, 0이면 5, 5이면 2
    string answer = "";
    for (int i = 0; i < rsp.size(); i++) {
        if (rsp[i] == '0') {
            answer.insert(i, "5");
        }
        else if (rsp[i] == '2') {
            answer.insert(i, "0");
        }
        else {
            answer.insert(i, "2");
        }
    }
    return answer;
}