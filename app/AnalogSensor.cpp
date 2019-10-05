/** 
 *  @file    AnalogSensor.cpp
 *  @author  Sandeep Kota Sai Pavan
 *  @copyright GNU Public License
 *  @brief Valgrind Exerciise ENPM808X
 *  @section DESCRIPTION
 *  A program having member functions definition
 *	for the class AnalogSensor
 */
#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>
#include <memory>

/**
*	@brief Constructor for the AnalogSensor class
*	@param int Number of samples
*	@return None 
*/
AnalogSensor::AnalogSensor(unsigned int samples)
	:mSamples(samples) {
}

/**
*	@brief Destructor for the AnalogSensor class
*	@param None
*	@return None 
*/
AnalogSensor::~AnalogSensor() {
}

/**
*	@brief Read function to return the average of class attributes
*	@param Nome
*	@return int Result
*/
int AnalogSensor::Read()
{
    std::shared_ptr<std::vector<int>> readings = std::make_shared< std::vector<int>> (mSamples, 10);

    double result = std::accumulate( readings->begin(), readings->end(), 0.0 ) / readings->size();
    return result;
}


