Time now to std::string 2018-07-10 11:39:00
        
        #include <iostream>
        #include <iomanip>
        #include <ctime>
        int main() {
            auto t = std::time(nullptr);
            auto tm = *std::localtime(&t);
            std::cout << std::put_time(&tm, "%Y-%m-%d %H:%M:%S") << std::endl;
            return 0;
        }


std::string 1970-01-01 00:00:00 to std::time_t

    #include <iostream>
    #include <sstream>
    #include <iomanip>
    int main() {
      struct std::tm tm;
      std::istringstream ss("1970-01-01 08:00:42");
      ss >> std::get_time(&tm, "%Y-%m-%d %H:%M:%S");
      std::time_t time = mktime(&tm);
      std::cout << time; // 42 for Hong Kong time zone GMT+8
      return 0;
    }

