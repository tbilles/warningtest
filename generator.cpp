#include <fstream>
#include <regex>

void do_substitution(const std::string& template_filename, const std::string& output_filename, int n) {
	std::ifstream header(template_filename);
	std::ofstream output(output_filename);
	const std::regex pattern("NUM");

	for (std::string line; std::getline(header, line);) {
		line = std::regex_replace(line, pattern, std::to_string(n));
		output << line << "\n";
	}
	output.close();
}

int main() {
	constexpr int n = 100;

	for (int i = 0; i < n; i++) {
		do_substitution("Class.h.template", "Class" + std::to_string(i) + ".h", i);
		do_substitution("Class.cpp.template", "Class" + std::to_string(i) + ".cpp", i);
	}
	return 0;
}
