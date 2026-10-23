#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for (int i = 0; i < my_string.size(); i++)
    {
        for (int m = 0; m < n; m++)
        {
           answer.push_back(my_string[i]); 
        }
    }
    return answer;
}