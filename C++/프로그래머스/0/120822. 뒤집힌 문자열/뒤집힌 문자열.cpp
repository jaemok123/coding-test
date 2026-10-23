#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for (int i = 0; i < my_string.size(); i++)
    {
        answer.insert(answer.begin(), my_string[i]);
    }
    return answer;
}