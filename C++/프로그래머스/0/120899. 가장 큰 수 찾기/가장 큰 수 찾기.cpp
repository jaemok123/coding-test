#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    
    int n = array[0];
    int m = 0;
    
    for (int i = 1; i < array.size(); i++) {
        if (array[i] > n) {
            n = array[i];
            m = i;
        }
    }
    return {n, m};
}