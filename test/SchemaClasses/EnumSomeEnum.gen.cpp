// Auto-generated by SchemaClassGenerator - Do not manually edit!
#include "EnumSomeEnum.gen.h"

#include <stdexcept>

using namespace SchemaClasses;
using namespace std;

string SomeEnumToString(SomeEnum value)
{
	if(value == SomeEnum::Enum1) return "Enum1";
	if(value == SomeEnum::Enum2) return "Enum2";
	if(value == SomeEnum::Enum3) return "Enum3";
	throw std::invalid_argument("Value was not a valid SomeEnum");
};

SomeEnum SomeEnumFromString(string value)
{
	if(value == "Enum1") return SomeEnum::Enum1;
	if(value == "Enum2") return SomeEnum::Enum2;
	if(value == "Enum3") return SomeEnum::Enum3;
	throw std::invalid_argument(value + " was not a valid SomeEnum");
};

vector<string> SomeEnumValues()
{
	vector<string> list;
	list.reserve(3);
	list.push_back("Enum1");
	list.push_back("Enum2");
	list.push_back("Enum3");
	return list;
};
