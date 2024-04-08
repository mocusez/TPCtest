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
        std::cout << row.id << "\t" << row.name << std::endl;
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

    std::cout << "data.size() = " << data.size() << std::endl;
    // 输出数据
    for (const auto& row : data) {
        std::cout << row.N_NATIONKEY << "\t" << row.N_NAME << "\t" << row.N_REGIONKEY << "\t" << row.N_COMMENT << std::endl;
    }
    
}

void myTest3() {
    std::string row = "20|alan|";
    MyStruct ms = convertToT<MyStruct>(row);
    std::cout << ms.id << "\t" << ms.name << std::endl;

    std::string row2 = "0|ALGERIA|0| haggle. carefully final deposits detect slyly agai|";
    Nation n = convertToT<Nation>(row2);
    std::cout << n.N_NATIONKEY << "\t" << n.N_NAME << "\t" << n.N_REGIONKEY << "\t" << n.N_COMMENT << std::endl;


}


int main() {
    myTest1();
    std::cout << "----------------" << std::endl;
    myTest2();
     std::cout << "----------------" << std::endl;
    myTest3();

    return 0;
}
