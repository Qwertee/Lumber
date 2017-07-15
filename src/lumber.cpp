#include "lumber.h"
#include <stdio.h>

void Logger::log(std::string message) {
    std::cout << WHT << message << NOC << ENDL;
}

void Logger::warn(std::string message) {
    std::cout << YEL << message << NOC << ENDL;
}

void Logger::error(std::string message) {
    std::cout << RED << message << NOC << ENDL;
}

void Logger::success(std::string message) {
    std::cout << GRN << message << NOC << ENDL;
}
