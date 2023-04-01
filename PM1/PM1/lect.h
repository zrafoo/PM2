/*
* @file lect.h
* @brief �����, ���������� ������ �� ��������� ���������������.
*/
#pragma once
#include <string>
#include <map>

class lect
{
public:
	//! ��� �������������
	std::string name;
	//! ��������� �������������
	std::string fac;
	//! ������ ������ �������������
	std::string title;
	//! ������ ������� �������������
	std::string degree;
	//! map-������, ���������� ������������ ������ �������� � �� "���".
	std::map<std::string, int> degrees = { {"AD",0},{"BD",1},{"FD",2},{"MD",3},{"DD",4} };
	// �������(degrees), ������������� � ������� �����������: AD -> BD -> FD -> MD -> DD
	// ������(titles), ������������� � ������� �����������:  Assistant Professor -> Associated Professor -> Senior Lecturer - ��������� � ���������� ����������� �����, ���������� ������� map � "������" ��� ���������� �� ���������
	/** @brief ������������� ���������
	*/
	void setData(std::string l_name, std::string  l_fac, std::string  l_degree, std::string  l_title);
	//! ����� ������� ������� ������ lect
	void clear();
	/** @brief ������ ����� �������������
	*  @return string
	*/
	std::string getName() { return name; }
	/** @brief ������ ���������� �������������
	*  @return string
	*/
	std::string getFac() { return fac; }
	/** @brief ������ ������ �������������
	*  @return string
	*/
	std::string getTitle() { return title; }
	/** @brief ������ ������� �������������
	*  @return string
	*/
	std::string getDegree() { return degree; }
	/** @brief ������������� ���������
	*  @return lect
	*/
	lect operator*(lect lec) { return lec; }
	/** @brief �������� ���������(������)
	*  @return bool
	*/
	friend bool operator> (lect c1, lect c2);
	/** @brief �������� ���������(������)
	*  @return bool
	*/
	friend bool operator< (lect c1, lect c2);
	/** @brief �������� ���������(������ ��� �����)
	*  @return bool
	*/
	friend bool operator<= (lect c1, lect c2);
	/** @brief �������� ���������(�����)
	*  @return bool
	*/
	friend bool operator== (lect c1, lect c2);
};
