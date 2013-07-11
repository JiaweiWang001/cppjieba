#ifndef GLOBALS_H
#define GLOBALS_H

#include <map>
#include <vector>
#include <string>

namespace CppJieba
{
	//file path
	const char * const DICT_FILE_PATH = "dict.txt";

	//typedefs
	typedef uint16_t ChUnicode;
	typedef unsigned int uint;
	typedef std::vector<std::string>::iterator VSI;

}

#endif
