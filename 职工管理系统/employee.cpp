#include"employee.h"

Employee::Employee(int id, string name, int dld)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dld;
}

void Employee::showInfo()
{
	cout << "ְ����ţ�" << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t��λ��" << this->getDeptName()
		<< "\t��λְ����ɾ�����������" << endl;
}

string Employee::getDeptName()
{
	return string("Ա��");//"Ա��"��һ��const char*�����ͣ������ڷ���ʱ���������Զ�����ת��Ϊstring����
}
