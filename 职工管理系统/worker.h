#pragma once
#include<iostream>
#include<string>
using namespace std;

//ְ���������
class Worker
{
public:

	//��ʾ������Ϣ
	virtual void showInfo() = 0;

	//��ȡ��λ����
	virtual string getDeptName() = 0; //��������int�����ݴ洢��λ���ͣ������Ҫһ����������ӳ�䣬����λ���ת��Ϊ��λ����

	//ְ�����
	int m_Id;

	//ְ������
	string m_Name; 

	//ְ�����ڲ������Ʊ��
	int m_DeptId; 
};
