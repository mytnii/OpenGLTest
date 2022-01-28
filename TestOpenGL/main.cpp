#define GLFW_INCLUDE_NONE

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>

int main()
{
	if (!glfwInit())
	{
		std::cout << "Initialization failed" << std::endl;
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

	GLFWwindow* window = glfwCreateWindow(640, 480, "Hello", NULL, NULL);
	if (!window)
	{
		std::cout << "window or OpenGL context creation failed" << std::endl;
		return -1;
	}
	glfwMakeContextCurrent(window);

	gladLoadGL();

	glfwDestroyWindow(window);
	glfwTerminate();

	return 0;
}