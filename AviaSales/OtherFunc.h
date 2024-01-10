#pragma once
#include <string>

std::string ConvertToString(System::String^ managedString)
{
	std::string result;
	for (size_t i = 0; i < managedString->Length; i++)
	{
		result += managedString[i];
	}

	return result;
}


System::String^ ConvertToSystemString(sql::SQLString sqlString) 
{
	return gcnew System::String(sqlString.c_str());
}