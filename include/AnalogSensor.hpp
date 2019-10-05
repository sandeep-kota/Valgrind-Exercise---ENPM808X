/** 
 *  @file    AnanlogSensor.hpp
 *  @author  Sandeep Kota Sai Pavan
 *  @copyright GNU Public License
 *  @brief Valgrind Exerciise ENPM808X
 *  @section DESCRIPTION
 *  A program containing the class definition 
 *	of the attributes of the class AnalogSensor
 */
#pragma once

#include <iostream>

/**
*	@brief Class AnalogSensor
*	@param int Number of samples
*	@return None 
*/
class AnalogSensor
{
public:
    AnalogSensor(unsigned int samples);
    ~AnalogSensor();
    int Read();
private:
    unsigned int mSamples;
};
