using namespace std;
#include "Prototypes.h"
#include <iostream>

void ClearMatrix(int row, Column** ptr) 
{
	Column* tmp;
	for (int i = 0; i < row; i++)
	{
		while (ptr[i] != NULL)
		{
			tmp = ptr[i];
			ptr[i] = tmp->Next;
			tmp->Next = NULL;
			delete tmp;
		}
	}
	delete[] ptr;
}
bool Add(int i, int j, double value, Column** ptr) 
{
	Column* tmp = ptr[i];
	Column *nw = new Column;
	nw->j = j;
	nw->value = value;
	nw->Next = NULL;
	if (ptr[i] == NULL)
	{
		ptr[i] = nw;
		return true;
	}
	else if (ptr[i]->j == j) { return false; }
	else
	{
		if (tmp->j > j)
		{
			nw->Next = ptr[i];
			ptr[i] = nw;
			return true;
		}
		else
		{
			while (tmp->Next != NULL && tmp->Next->j < j)
			{
				tmp = tmp->Next;
			}
			if (tmp->j == j) { return false; }
			else
			{
				nw->Next = tmp->Next;
				tmp->Next = nw;
				return true;
			}
		}
	}
}
double Search(int i , int j, Column**ptr) 
{
	if (ptr[i] == NULL)
	{
		return 0;
	}
	else
	{
		Column* tmp = ptr[i];
		while (tmp != NULL && tmp->j != j)
		{
			tmp = tmp->Next;
		}
		if (tmp != NULL && tmp->j == j)
		{
			return tmp->value;
		}
		else
		{
			return 0;
		}
	}
}
bool DeleteWithIndex(int i, int j, Column** ptr) 
{
	Column* tmp = ptr[i];
	Column* cur;
	if (ptr[i]->j == j && ptr[i]->Next == NULL)
	{
		delete ptr[i];
		ptr[i] = NULL;
		return true;
	}
	else if (ptr[i]->j == j && ptr[i]->Next != NULL)
	{
		cur = ptr[i];
		ptr[i] = tmp->Next;
		delete cur;
		return true;
	}
	else
	{
		while (tmp->Next != NULL && tmp->j != j )
		{
			cur = tmp;
			tmp = tmp->Next;
		}
		if (tmp->Next == NULL && tmp->j == j)
		{
			cur->Next = NULL;
			delete tmp;
			return true;
		}
		else if (tmp->Next != NULL && tmp->j == j)
		{
			cur->Next = tmp->Next;
			delete tmp;
			return true;
		}
	}
	return false;
}
bool DeleteWithValue(int row , double value, Column** ptr)
{
	Column* cur;
	for (int n = 0; n < row; n++)
	{
		Column* tmp = ptr[n];
		if (ptr[n]->value == value)
		{
			cur = ptr[n];
			ptr[n] = tmp->Next;
			delete cur;
			return true;
		}
		else
		{
			while (tmp->Next != NULL && tmp->value != value)
			{
				cur = tmp;
				tmp = tmp->Next;
			}
			if (tmp->Next == NULL && tmp->value == value)
			{
				cur->Next = NULL;
				delete tmp;
				return true;
			}
			else if (tmp->Next != NULL && tmp->value == value)
			{
				cur->Next = tmp->Next;
				delete tmp;
				return true;
			}
		}
		
	}
	return false;
}
bool ReplaceWithIndex(int i, int j, double value, Column** ptr)
{
	Column* tmp = ptr[i];
	if (ptr[i]->j == j)
	{
		ptr[i]->value = value;
		return true;
	}
	else
	{
		while (tmp->Next != NULL && tmp->j != j)
		{
			tmp = tmp->Next;
		}
		if (tmp->j == j)
		{
			tmp->value = value;
			return true;
		}
	}
	return false;
}
bool ReplaceWithValue(int row, double value, double newValue, Column** ptr)
{
	for (int n = 0; n < row; n++)
	{
		Column* tmp = ptr[n];
		if (ptr[n] == NULL) { continue; }
		else if (ptr[n] != NULL && ptr[n]->value == value)
		{
			ptr[n]->value = newValue;
			return true;
		}
		else
		{
			while (tmp->Next != NULL && tmp->value != value)
			{
				tmp = tmp->Next;
			}
			if (tmp->value == value)
			{
				tmp->value = newValue;
				return true;
			}
		}
	}
	return false;
}
Column** Trasportation(int row, int column, Column** ptr)
{
	Column** ptr2 = new Column * [column];
	for (int i = 0; i < column; i++)
	{
		ptr2[i] = nullptr;
	}
	for (int i = 0; i < row; i++)
	{
		Column* tmp = ptr[i];
		for (int j = 0; j < column; j++)
		{
			if (tmp == NULL)
			{
				break;
			}
			Column* tmp2 = ptr2[tmp->j];
			if (tmp != NULL && tmp2 == NULL)
			{
				ptr2[tmp->j] = tmp;
				ptr2[tmp->j]->j = i;
				tmp = tmp->Next;
			}
			else
			{
				while (tmp2->Next != NULL)
				{
					tmp2 = tmp2->Next;
				}
				tmp2->Next = tmp;
				tmp2->Next->j = i;
				tmp2->Next->Next = NULL;
				if (tmp->Next == NULL)
				{
					break;
				}
			}
		}
	}
	return ptr2;
}