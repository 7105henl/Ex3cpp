#include <iostream>
//#include "Enviroment.h"
using namespace std;

int main() {
    //todo decide whether to use the termianl or the script provided in env vars
    cout << "Hello, World!" << endl;
    return 0;
}

1. openDataServer 5400 10

2. connect 127.0.0.1 5402
3. var breaks = bind "/controls/flight/speedbrake"
4. var throttle = bind "/controls/engines/engine/throttle"
5. var heading = bind "/instrumentation/heading-indicator/offset-deg"
6. var airspeed = bind "/instrumentation/airspe