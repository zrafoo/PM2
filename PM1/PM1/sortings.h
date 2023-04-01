/*
* @file sortings.h
* @brief header ����������
*/
#pragma once
#include <string>
#include "lect.h"
#include <vector>

/** @brief ���������� ���������
*  @param vector<lect>
*  @param int
*/
void bubble(std::vector<lect> &bbl, int size);
/** @brief ������� ����������
*  @param vector<lect>
*  @param int
*  @param int
*  @param int
*/
void quickSort(std::vector<lect>& qwk, int low, int high);
/** @brief �������� ���������� ��������(�������� ��� ��������)
*  @param vector<lect>
*  @param int
*  @param int
*  @param int
*/
void merge(std::vector<lect>& array, int const left, int const mid, int const right);
/** @brief ���������� ��������
*  @param vector<lect>
*  @param int
*  @param int
*/
void mergeSort(std::vector<lect>& array, int const begin, int const end);