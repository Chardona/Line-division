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
	std::string word = "Hopheylalaley";
	std::vector < std::string> res = series(word, 4);
	for (auto& i : res) {
		std::cout << i << " ";
	}
	
	//what if I change? And what it leads to?
}
