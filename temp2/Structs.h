// Structs.h
#ifndef STRUCTS_H
#define STRUCTS_H

#include <string>

/*
    * Structs.h
    * 定义一些结构体，用于模仿数据库建表
    * 该文件还需要定义模板函数，用于将字符串转换为特定类型
*/


// 定义一个结构体模仿数据库建表
struct MyStruct {
    int id;
    std::string name;
};

// 表 nation.tbl
struct Nation {
    int N_NATIONKEY;
    std::string N_NAME;
    int N_REGIONKEY;
    std::string N_COMMENT;
};

// 定义一个模板函数，用于将字符串转换为特定类型
template<typename T>
T convertToT(const std::string& value);

// // 特化模板函数为 MyStruct 类型的实现
template<>
MyStruct convertToT<MyStruct>(const std::string& value);

// // 特化模板函数为 Nation 类型的实现
template<>
Nation convertToT<Nation>(const std::string& value);

#endif // STRUCTS_H
