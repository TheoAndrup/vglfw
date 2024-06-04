module vglfw

$if linux {
	#flag linux -I/usr/include/GLFW
	#flag linux -I@VROOT/include
	#flag linux -lglfw
	//#flag linux -DGLFW_INCLUDE_VULKAN=1

	#include "GLFW/glfw3.h"
	//#include "vulkan/vulkan.h"
	#include "gamepadstate.h"
	#include "gammaramp.h"
	#include "image.h"
	#include "vidmode.h"
	#include "helper.h"
}

$if windows {
	#flag -I/usr/include/GLFW
	#flag -I@VROOT/include
	#flag -lglfw
}
