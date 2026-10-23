#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) { // 각 인덱스에 2를 나누어 나머지가 0이면 첫번째 인덱스 +1 1이면 두번째 인덱스 +1
    vector<int> answer(2, 0);
    for (int i = 0; i < num_list.size(); i++)
    {
        if (num_list[i] % 2 == 0) 
        {
            answer[0] += 1;
        }
        else 
        {
            answer[1] += 1;
        }
    }
    return answer;
}