#include <stdlib.h>
#include <GLFW/glfw3.h>
#include <string.h>

void glfwGetGammaRampSizeHelper(GLFWgammaramp *gr, unsigned int *size)
{
    *size = (*gr).size;
}

void glfwGetGammaRampRGBBitsHelper(GLFWgammaramp *gr, void **r, void **g, void **b)
{
    unsigned int size = 0;
    glfwGetGammaRampSizeHelper(gr, &size);
    //
    memcpy((void *)(*r), (void *)(gr->red), size * sizeof(unsigned short));
    memcpy((void *)(*g), (void *)(gr->green), size * sizeof(unsigned short));
    memcpy((void *)(*b), (void *)(gr->blue), size * sizeof(unsigned short));
}

void glfwGetGammaRampRGBBitHelper(GLFWgammaramp *gr, int index, unsigned short *r, unsigned short *g, unsigned short *b)
{
    *r = (*gr).red[index];
    *g = (*gr).green[index];
    *b = (*gr).blue[index];
}

void glfwCreateGammaRampHelper(GLFWgammaramp *gr, unsigned int size, void *r, void *g, void *b)
{
    gr->size = size;
    gr->red = r;
    gr->green = g;
    gr->blue = b;
}