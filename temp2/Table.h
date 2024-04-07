#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "Structs.h"

/*
 * Table.h
 * 定义一个模板类Table，用于存储数据
    * 该类包含以下成员函数：
    * @setColumnNames : 设置列名
    * @importData: 从文件中导入数据
    * @addRow: 添加一行数据
    * @getData: 获取数据
    * @getColumnNames: 获取列名
*/






// 定义一个模板类Table，用于存储数据
template<typename T>
class Table {
private:
    std::vector<T> data; // 用于存储数据
    std::vector<std::string> columnNames; // 存储列名

public:
    Table() {}

    void importData(const std::string& path) {
        std::ifstream file(path);
        if (!file.is_open()) {
            std::cerr << "无法打开文件：" << path << std::endl;
            return;
        }

        std::string line;
        while (getline(file, line)) {
            T t = convertToT<T>(line);
            data.push_back(t);
        }
        file.close();
    }

    void setColumnNames(const std::vector<std::string>& names) {
        columnNames = names;
    }

    const std::vector<T>& getData() const {
        return data;
    }

    const std::vector<std::string>& getColumnNames() const {
        return columnNames;
    }
};
