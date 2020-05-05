#include <iostream>
#include <algorithm>
#include <string>
#include "../include/parser.h"
#include "../include/riscvGenerator.h"

using namespace std;

int 
main(int argc, char *argv[])
{
    if(argc < 2) cout << "ERROR" << endl;
    Parser p(argv[1]);   //语法分析器
    riscvGenerator rv(argv[1]);   //代码生成器

    rv.printAsmCode(p);  //打印汇编代码
    return 0;
}
