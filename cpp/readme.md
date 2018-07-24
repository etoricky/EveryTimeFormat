Time now to std::string 2018-07-10 11:39:00
===========================================
        
        #include <iostream>
        #include <iomanip>
        #include <ctime>
        int main() {
            std::time_t t = std::time(nullptr);
            struct tm x = *std::localtime(&t);
            std::cout << std::put_time(&x, "%Y-%m-%d %H:%M:%S") << std::endl;
            return 0;
        }


std::string 1970-01-01 00:00:00 to std::time_t
==============================================

    #include <iostream>
    #include <sstream>
    #include <iomanip>
    int main() {
      struct std::tm tm;
      std::istringstream ss("1970-01-01 08:00:42");
      ss >> std::get_time(&tm, "%Y-%m-%d %H:%M:%S");
      std::time_t time = mktime(&tm);
      std::cout << time; // 42 when I am in GMT+8
      return 0;
    }



string in date and time without seconds to std::time_t
======================================================

2018.06.13,23:54,1297.74,1297.75,1297.63,1297.74,46

    #include <iostream>
    #include <sstream>
    #include <iomanip>
    int main() {
      std::string date("1970.01.01");
      std::string time("08:01");
      struct std::tm tm;
      std::istringstream ss(date + " " + time + ":00");
      ss >> std::get_time(&tm, "%Y.%m.%d %H:%M:%S");
      std::time_t x = mktime(&tm);
      std::cout << x; // 60 when I am in GMT+8
      return 0;
    }