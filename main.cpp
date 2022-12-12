#include "mbed.h"
#include <chrono>

using namespace std::chrono;

Timer t;

int main()
{
    t.start();
    printf("Hello World\n");
    t.stop();
    printf("The time taken was %llu [ms]\n", duration_cast<milliseconds>(t.elapsed_time()).count());
}