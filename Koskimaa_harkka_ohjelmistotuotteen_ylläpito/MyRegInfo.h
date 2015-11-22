// https://msdn.microsoft.com/en-us/library/windows/desktop/ms724884(v=vs.85).aspx
#include "Windows.h"

#define MAX_KEY_LENGTH 255
#define MAX_VALUE_NAME 16383
#define TOTALBYTES    8192

struct MyRegInfo
{
	TCHAR    achKey[MAX_KEY_LENGTH];	// buffer for subkey name
	DWORD    cbName;					// size of name string 
	TCHAR    achClass[MAX_PATH];		// buffer for class name 
	DWORD    cchClassName = MAX_PATH;	// size of class string 
	DWORD    cSubKeys;					// number of subkeys 
	DWORD    cbMaxSubKey;				// longest subkey size 
	DWORD    cchMaxClass;				// longest class string 
	DWORD    cValues;					// number of values for key 
	DWORD    cchMaxValue;				// longest value name 
	DWORD    cbMaxValueData;			// longest value data 
	DWORD    cbSecurityDescriptor;		// size of security descriptor 
	FILETIME ftLastWriteTime;			// last write time 
};