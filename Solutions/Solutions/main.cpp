#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>

using namespace std;

vector<string> split_string(string input_string) {
	string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
		return x == y and x == ' ';
	});

	input_string.erase(new_end, input_string.end());

	while (input_string[input_string.length() - 1] == ' ') {
		input_string.pop_back();
	}

	vector<string> splits;
	char delimiter = ' ';

	size_t i = 0;
	size_t pos = input_string.find(delimiter);

	while (pos != string::npos) {
		splits.push_back(input_string.substr(i, pos - i));

		i = pos + 1;
		pos = input_string.find(delimiter, i);
	}

	splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

	return splits;
}

// Complete the riddle function below.
vector<long> riddle(vector<long> arr) {
	// complete this function
	std::vector<long> riddle_return;

	std::priority_queue<long> max_pq;
	std::priority_queue<long, std::vector<long>, std::greater<long>> min_pq;
	for (int sz = 0; sz < arr.size(); ++sz) {
		for (int i = 0; i + sz < arr.size(); ++i) {

		}
	}

	return riddle_return;
}

int main()
{
	ifstream myfile("C:\\Users\\waync\\dev\\HackerRank\\Solutions\\riddle1.txt");

	string line;
	int n;

	if (myfile.is_open()) {
		getline(myfile, line);
		std::cout << line << std::endl;
		n = std::stoi(line);
		getline(myfile, line);
		std::cout << line << std::endl;
	}

	vector<string> arr_temp = split_string(line);

	vector<long> arr(n);

	for (int i = 0; i < n; i++) {
		long arr_item = stol(arr_temp[i]);

		arr[i] = arr_item;
	}

	vector<long> res = riddle(arr);

	getchar();

	return 0;
}
