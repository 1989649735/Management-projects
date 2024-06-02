#pragma once
#include<iostream>
#include<string>
using namespace std;

//职工抽象基类
class Worker
{
public:

	//显示个人信息
	virtual void showInfo() = 0;

	//获取岗位名称
	virtual string getDeptName() = 0; //由于是以int型数据存储岗位类型，因此需要一个函数进行映射，将岗位编号转换为岗位名称

	//职工编号
	int m_Id;

	//职工姓名
	string m_Name; 

	//职工所在部门名称编号
	int m_DeptId; 
};
