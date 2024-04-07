#include "Table.h"
#include "Structs.h"


// // Table 类的方法实现 -------------
// template<typename T>
// Table<T>::Table() {}

// template<typename T>
// void Table<T>::importData(const std::string& path) {
//     std::ifstream file(path);
//     if (!file.is_open()) {
//         std::cerr << "无法打开文件：" << path << std::endl;
//         return;
//     }

//     std::string line;
//     while (getline(file, line)) {
//         T t = convertToT<T>(line);
//         data.push_back(t);
//     }
//     file.close();
// }

// template<typename T>
// void Table<T>::setColumnNames(const std::vector<std::string>& names) {
//     columnNames = names;
// }

// template<typename T>
// const std::vector<std::vector<T>>& Table<T>::getData() const {
//     return data;
// }

// template<typename T>
// const std::vector<std::string>& Table<T>::getColumnNames() const {
//     return columnNames;
// }

