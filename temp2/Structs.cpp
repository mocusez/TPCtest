#include "Structs.h"
#include <sstream>

// 特化模板函数为 MyStruct 类型的实现
template<>
MyStruct convertToT<MyStruct>(const std::string& value) {
    std::istringstream iss(value);
    MyStruct ms;
    iss >> ms.id;
    if (iss.fail()) {
        iss.clear();
        iss >> ms.name;
    }
    return ms;
}

// 特化模板函数为 AnotherStruct 类型的实现

// 特化模板函数为 Nation 类型的实现
template<>
Nation convertToT<Nation>(const std::string& value) {
    std::istringstream iss(value);
    Nation n;
    iss >> n.N_NATIONKEY >> n.N_NAME >> n.N_REGIONKEY >> n.N_COMMENT;
    return n;
}
