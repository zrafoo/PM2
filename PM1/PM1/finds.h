/*
* @file finds.h
* @brief header �������
*/
#pragma once
#include <vector>
#include <string>
#include "lect.h"
/** @brief �������� �����
	*/
int linear(std::vector<lect>& data, int start,int size, std::string l);
/** @brief �������� �����
	*/
int binary(std::vector<lect>& data, int start, int end, std::string l);