#include <iostream>
#include <sstream>
#include <iomanip>
int main() {
	std::string date("1970.01.01");
	std::string time("08:01");
	struct std::tm tm;
	std::istringstream ss("1970-01-01 08:00:00");
	ss >> std::get_time(&tm, "%Y-%m-%d %H:%M:%S");
	std::time_t x = mktime(&tm);
	std::cout << x; // 60 when I am in GMT+8
	return 0;
}