#include"employee.h"

Employee::Employee(int id, string name, int dld)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dld;
}

void Employee::showInfo()
{
	cout << "职工编号：" << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t岗位：" << this->getDeptName()
		<< "\t岗位职责：完成经理交给的任务" << endl;
}

string Employee::getDeptName()
{
	return string("员工");//"员工"是一个const char*的类型，但是在返回时编译器会自动将其转换为string类型
}
