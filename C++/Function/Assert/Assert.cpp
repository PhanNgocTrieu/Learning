#include <iostream>
#include <cassert>
#include <cmath>

double calculateTimeUntilObjectHitsGround(double initialHeight, double gravity)
{
    
    assert(gravity > 0.0); // the object won't reach the ground unless there is positive gravity
    // the above line will declare "Took Assertion failed: gravity > 0.0"

    
    if (initialHeight <= 0.0)
    {
        // the object is already on the ground. Or buried
        return 0.0;
    }
    
    return std::sqrt((2.0 * initialHeight)/gravity);
}

int main()
{
    std::cout << "Took " << calculateTimeUntilObjectHitsGround(100.0,-9.8) << " second(s)\n";
    return 0;
}