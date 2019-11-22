#include <emscripten.h>

extern "C"
{
    int EMSCRIPTEN_KEEPALIVE fibonacci(int num)
    {
        if(num <= 1)
        {
            return 1;
        }

        return fibonacci(num - 1) + fibonacci(num - 2);
    }

    int EMSCRIPTEN_KEEPALIVE add(int a, int b)
    {
        return a + b;
    }
}