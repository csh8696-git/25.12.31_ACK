#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
	string answer = "";
	for (int i = 0; i < seoul.size(); i++)
	{
		if (seoul[i] == "Kim")
		{
			answer = "김서방은 ";
			answer += to_string(i);
			answer += "에 있다";
		}
	}
	return answer;
}

#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
	string answer = "";
	int pos = find(seoul.begin(), seoul.end(), "Kim") - seoul.begin();
	answer = "김서방은 " + to_string(pos) + "에 있다";
	return answer;
}



#include <bits/stdc++.h>
using namespace std;
#define 문자열 string
#define 함수 solution
#define 배열 vector
#define 반복 for
#define 반복자 iterator
#define 문자열로 to_string
#define 시작 begin
#define 끝 end
#define 반환 return

문자열 함수(배열<문자열> 서울) {
	for (배열<문자열>::반복자 반 = 서울.시작(); 반 != 서울.끝(); ++반)
		if (*반 == "Kim")
			반환 "김서방은 " + 문자열로(반 - 서울.시작()) + "에 있다";
}
//광기