//  ssNSGAII.h
//
//  Author:
//       Esteban López-Camacho <esteban@lcc.uma.es>
//
//  Copyright (c) 2011 Antonio J. Nebro, Juan J. Durillo
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef __SSNSGAII__
#define __SSNSGAII__

#include <jMetalCpp/core/Algorithm.h>
#include <jMetalCpp/core/Problem.h>
#include <jMetalCpp/core/SolutionSet.h>
#include <jMetalCpp/util/Distance.h>
#include <jMetalCpp/util/Ranking.h>
#include <jMetalCpp/util/comparators/CrowdingComparator.h>
//#include <jMetalCpp/qualityIndicator/QualityIndicator.h>

/**
  * @class ssNSGAII
  * @brief This class implements a steady-state version of NSGA-II.
**/

class ssNSGAII : public Algorithm {

private:
  int populationSize_;
  int maxEvaluations_;
  //QualityIndicator *indicators_;

public:
  ssNSGAII(Problem * problem);
  SolutionSet * execute();

};


#endif /* __SSNSGAII__ */
