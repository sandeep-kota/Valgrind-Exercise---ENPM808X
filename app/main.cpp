/** 
 *  @file    main.cpp
 *  @author  Sandeep Kota Sai Pavan
 *  @copyright GNU Public License
 *  @brief Valgrind Exerciise ENPM808X
 *  @section DESCRIPTION
 *  A program to get hands on experience in 
 *	working with valgrind.
 */
#include <iostream>
#include <AnalogSensor.hpp>

/**
*	@brief  Main Function of the project
*	@param	None
*	@return int 0
*/
int main() {
AnalogSensor lightSensor(5);
std::cout << "Averaged sensor reading: " \
          << lightSensor.Read() << std::endl;
bool terminator = true;  // Changed to true to avoid memory leak.
if(terminator) {
    std::cout << "DONE" << std::endl;
}
return 0;
}
