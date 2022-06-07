#pragma once

#ifdef PI_PLATFORM_WINDOWS
	#ifdef PI_BUILD_DLL
		#define	 PINCHASI_API __declspec(dllexport)
	#else	
		#define PINCHASI_API __declspec(dllimport)
	#endif
#else
	#error Pinchasi only support Windows!
#endif