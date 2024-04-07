#include "Table.h"
#include "Structs.h"

void myTest1() {
    // 使用MyStruct作为模板参数来创建Table类的实例
    Table<MyStruct> myTable;
    // 添加列名
    myTable.setColumnNames({"ID", "Name"});
    // 导入数据
    myTable.importData("demo.tbl");
    // 获取数据
    const auto& data = myTable.getData();
    const auto& columnNames = myTable.getColumnNames();
    // 输出列名
    for (const auto& columnName : columnNames) {
        std::cout << columnName << "\t";
    }
    std::cout << std::endl;
    // 输出数据
    for (const auto& row : data) {
        for (const auto& item : row) {
            std::cout << item.id << "\t" << item.name << std::endl;
        }
    }
}

void myTest2() {
    // 使用Nation作为模板参数来创建Table类的实例
    
    Table<Nation> nationTable;
    // 添加列名
    nationTable.setColumnNames({"N_NATIONKEY", "N_NAME", "N_REGIONKEY", "N_COMMENT"});
    // 导入数据
    nationTable.importData("nation.tbl");
    // 获取数据
    const auto& data = nationTable.getData();
    const auto& columnNames = nationTable.getColumnNames();
    // 输出列名
    for (const auto& columnName : columnNames) {
        std::cout << columnName << "\t";
    }
    std::cout << std::endl;
    // 输出数据
    for (const auto& row : data) {
        for (const auto& item : row) {
            std::cout << item.N_NATIONKEY << "\t" << item.N_NAME << "\t" << item.N_REGIONKEY << "\t" << item.N_COMMENT << std::endl;
        }
    }
}



int main() {
    myTest1();
    // myTest2();

    return 0;
}
