#include "Structs.h"
#include <sstream>

// 特化模板函数为 MyStruct 类型的实现
template<>
MyStruct convertToT<MyStruct>(const std::string& value) {
    std::istringstream iss(value);
    MyStruct ms;

    std::string part;
    std::getline(iss, part, '|');
    ms.id = std::stoi(part);
    std::getline(iss, ms.name, '|');
    return ms;
}


// 特化模板函数为 Nation 类型的实现
template<>
Nation convertToT<Nation>(const std::string& value) {
    std::istringstream iss(value);
    Nation n;

    std::string part;
    std::getline(iss, part, '|');
    n.N_NATIONKEY = std::stoi(part);
    std::getline(iss, n.N_NAME, '|');
    std::getline(iss, part, '|');
    n.N_REGIONKEY = std::stoi(part);
    std::getline(iss, n.N_COMMENT, '|');

    return n;
}
