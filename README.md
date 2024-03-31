# Task
## task 1:
Generate data


## task 2:
select some queries

## task 3:
hardcode the queries in the code use c##

## task 4:

compile/JIT the code

# file:
```
data: TPC-H, TPC-C
src: c##
qurey: SQL
TPC-H: 22 queries
```


#about TPC-H file
```
├── EULA.txt: TPC-H测试的最终用户许可协议。
├── dbgen: 数据库生成工具的源代码。
├── dev-tools: 用于生成TPC-H测试数据的工具。
├── ref_data: 用于验证TPC-H测试结果的参考数据。
├── specification.docx: TPC-H测试的基准规范。
└── specification.pdf: TPC-H测试的基准规范-pdf。
```


# branch
master: 原始文件

# flow path
1 进入TPCtest/TPC-H V3.0.1/dbgen 目录编译dbgen工具，
你需要进入Makefile文件中的100行来调整你的编译时各个参数来确保代码正确编译（我已调整参数基于linux的gcc编译模式）。
完成相应的参数配置后即可运行make命令编译dbgen工具。
```
cd TPCtest/TPC-H V3.0.1/dbgen
make
```

2 生成数据
通过使用dbgen工具生成TPC-H测试数据，8个表
其中-s参数指定生成数据的规模，这里我们暂时生成规模为0.001 （总计3000左右数据）
```
./dbgen -s 0.001
```
生成文件在dbgen目录下customer.tbl

3 生成query
使用qgen工具生成TPC-H测试的22个查询，
其中-q参数指定生成查询的编号，这里我们生成查询编号为1的查询。
```
cd TPCtest/TPC-H V3.0.1
./qgen
```
生成文件在dbgen目录下query1.sql



# ++++++
1. sql分割修改
2. 存储数据部分
3. 硬编码部分（sql计算部分）

方法1：纯编码：
目前完成q1测试：
q1.cpp --> q1.out


方法二：面向对象 

class Database
class Table
class Tuble
class Query


