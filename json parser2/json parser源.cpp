#include <iostream>
#include <string>
#include <regex>
#include <map>
#include <set>
using namespace std;


/*例子,假如json是这种形式*/
int main(){
static char text[] = "{ \"a\":1000,\"b\":30000,\"c\":1.0242, \"test\", \"big big world\"}";
//运用正则表达式
string phone = 
	"（\"）(([0-9a-zA-Z]+[0-9]+[a-zA-Z]*))(\")(:)(([0-9a-zA-Z]+[0-9]+[a-zA-Z]*))";
class ReadJson
{
	public:
	regex r(phone);
	smatch m;
	string s(text);
	string fmt_key = "$2";
	string fmt_value = "$5";
	vector<string> vs;
	multimap<string, string> wm;
	
	for(sregex_iterator it(s.begin(), s.end(), r), end_it; it != end_it; ++it)//使用迭代器，用regex寻找对应的匹配
		if (s)
		{
		cout << it->str() << endl;
		vs.push_back(it->str());
		cout << regex_replace(s,r,fmt) << endl;
		wm[fmt_key] = fmt_value;

		}
	};

		

};
	return 0;
}