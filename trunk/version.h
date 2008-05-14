#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "14";
	static const char MONTH[] = "05";
	static const char YEAR[] = "2008";
	static const double UBUNTU_VERSION_STYLE = 8.05;
	
	//Software Status
	static const char STATUS[] = "Alpha";
	static const char STATUS_SHORT[] = "a";
	
	//Standard Version Type
	static const long MAJOR = 0;
	static const long MINOR = 0;
	static const long BUILD = 141;
	static const long REVISION = 734;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT = 240;
	#define RC_FILEVERSION 0,0,141,734
	#define RC_FILEVERSION_STRING "0, 0, 141, 734\0"
	static const char FULLVERSION_STRING[] = "0.0.141.734";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY = 1;
	

}
#endif //VERSION_h
