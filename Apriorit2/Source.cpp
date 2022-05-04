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
	std::string b3 = "Test for a new branch #3   !!!";
}
