#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    int a = 0;
    if (num != 1)
    {
        long long b = num;
        while (b - 1)
        {       //짝수라면 /2
            if (b % 2 == 0)
            {
                b /= 2;
            }   //그외(홀수)라면 (*3)+1
            else
            {
                b = (b * 3) + 1;
            }
            a++;
            if (a >= 500)
            {
                answer = -1;
                break;
            }
        }
        if (a >= 500)
        {
            answer = -1;
        }
        else
        {
            answer = a;
        }
    }
    return answer;
}

int solution(int num) {
    long long n = num;
    for (int i = 0; i < 500; i++) {
        if (n == 1) return i;
        n = (n & 1) ? (n * 3 + 1) : (n >> 1);
    }
    return -1;
}