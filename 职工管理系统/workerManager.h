#pragma once
#include <fstream>
#define  FILENAME "empFile.txt"
#include<iostream>
#include "worker.h"
#include"employee.h"
#include"boss.h"
#include"manager.h"
using namespace std;

class WorkerManager
{
public:

	//构造函数
	WorkerManager();

	//显示菜单
	void Show_Menu();

	//退出函数
	void exitSystem();

	//记录文件中的人数个数
	int m_EmpNum;

	//员工数组的指针
	Worker** m_EmpArray;//注意不要写为Worker** employer_record[]; //数组本质上就是一个指针

	//增加职工
	void Add_Emp();

	//保存文件
	void save();

	//标志文件是否为空
	bool m_FileIsEmpty;

	//统计人数
	int get_EmpNum();

	//初始化员工
	void init_Emp();

	//显示职工
	void Show_Emp();

	//删除职工
	void Del_Emp();

	//按照职工编号判断职工是否存在,若存在返回职工在数组中位置，不存在返回-1
	int IsExist(int id);

	//修改职工
	void Mod_Emp();

	//查找职工
	void Find_Emp();

	//排序职工
	void Sort_Emp();

	//清空文件
	void Clean_File();


	//析构函数
	~WorkerManager();
};
