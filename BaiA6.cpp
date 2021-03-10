#include <iostream> 

using namespace std;

int main(int argc, const char * argv[]) {
	cout << "Number of command-line arguments: " << argc << endl;
	for (int i = 0; i < argc; i++) {
		cout << "Argument #" << i << ": _" << argv[i] << "_\n";
	}
	return 0;
}
/**
test-cmd
	Number of command-line arguments: 1
	Argument #0: _/Users/timmy/Desktop/Study/LTNC/BT07/BaiA6_
test-cmd first second 3rd
	Number of command-line arguments: 4
	Argument #0: _/Users/timmy/Desktop/Study/LTNC/BT07/BaiA6_
	Argument #1: _first_
	Argument #2: _second_
	Argument #3: _3rd_
test-cmd 1
	Number of command-line arguments: 2
	Argument #0: _/Users/timmy/Desktop/Study/LTNC/BT07/BaiA6_
	Argument #1: _1_
*/
