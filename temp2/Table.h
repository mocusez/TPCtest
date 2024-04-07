#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

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
    std::vector<std::vector<T>> data; // 二维数组来存储数据
    std::vector<std::string> columnNames; // 存储列名

public:
    Table();
    void importData(const std::string& path);
    void addRow(const std::vector<T>& row);
    void setColumnNames(const std::vector<std::string>& names);
    const std::vector<std::vector<T>>& getData() const;
    const std::vector<std::string>& getColumnNames() const;
};
