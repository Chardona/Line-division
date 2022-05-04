#include <vector>
#include <iostream>

std::vector<std::string> series(const std::string& word, size_t len) {
	std::vector<std::string> v = {};
	std::string s= "";
	if (word.length() < len) {
		return v;
	}
	else {
		for (size_t i{}; i < word.length() - len; i++) {
			s = word.substr(i, len);
			v.push_back(s);
			s.erase();
		}
		return v;
	}
}

int main() {

	int arr[] = {1, 2, 3, 4, 5};

	std::string  Hurraaaay = "Okay 1 more change!";
	std::string newBranch = "Okay. text for a new branch2   yeeeeews";

	//what if?
	std::string word = "balanytinaaaksad";
	std::vector < std::string> res = series(word, 4);
	for (auto& item : res) {
		std::cout << item << " ";
	}
}
