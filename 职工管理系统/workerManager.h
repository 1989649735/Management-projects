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

	//���캯��
	WorkerManager();

	//��ʾ�˵�
	void Show_Menu();

	//�˳�����
	void exitSystem();

	//��¼�ļ��е���������
	int m_EmpNum;

	//Ա�������ָ��
	Worker** m_EmpArray;//ע�ⲻҪдΪWorker** employer_record[]; //���鱾���Ͼ���һ��ָ��

	//����ְ��
	void Add_Emp();

	//�����ļ�
	void save();

	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;

	//ͳ������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//����ְ������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�ã������ڷ���-1
	int IsExist(int id);

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//����ְ��
	void Sort_Emp();

	//����ļ�
	void Clean_File();


	//��������
	~WorkerManager();
};
