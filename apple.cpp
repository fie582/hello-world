/*
程序填空，使得下面输出的结果是
4
5
1
 
*/
#include <iostream>
using namespace std;
class Apple {
	//your codes start here
private:
	static int nTotalNumber;
public:
	Apple() { nTotalNumber ++ ;}
	~Apple() { nTotalNumber -- ; }
	//your codes end here
	static void PrintTotal() {
		cout << nTotalNumber << endl; 
	}

};
int Apple::nTotalNumber = 0;
Apple Fun(const Apple & a) {
	a.PrintTotal();
	return a;
}
int main()
{
	Apple * p = new Apple[4];
	Fun(p[2]);
	Apple p1,p2;
	Apple::PrintTotal ();
	delete [] p;
	p1.PrintTotal ();
	return 0;
}

