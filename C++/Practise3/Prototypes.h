#pragma once
struct Column
{
	int j;
	double value;
	Column* Next;
};
void ClearMatrix(int row, Column** ptr);
bool Add(int i, int j, double value, Column** ptr);
double Search(int i, int j, Column** ptr);
bool DeleteWithIndex(int i, int j, Column** ptr);
bool DeleteWithValue(int i, double value, Column** ptr);
bool ReplaceWithIndex(int i, int j, double value, Column** ptr);
bool ReplaceWithValue(int i, double value, double newValue, Column** ptr);
Column** Trasportation(int row, int column, Column** ptr);