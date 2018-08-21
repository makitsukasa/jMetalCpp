//  FastSMSEMOA.h
//
//  Author:
//       Esteban López-Camacho <esteban@lcc.uma.es>
//
//  Copyright (c) 2014 Antonio J. Nebro
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


#ifndef _FAST_SMSEMOA_H_
#define _FAST_SMSEMOA_H_

#include <jMetalCpp/core/Algorithm.h>
#include <jMetalCpp/core/Problem.h>
#include <jMetalCpp/core/SolutionSet.h>
#include <jMetalCpp/qualityIndicator/QualityIndicator.h>
#include <jMetalCpp/qualityIndicator/util/MetricsUtil.h>
#include <jMetalCpp/qualityIndicator/fastHypervolume/FastHypervolume.h>
#include <jMetalCpp/util/Ranking.h>
#include <jMetalCpp/util/comparators/CrowdingDistanceComparator.h>

class FastSMSEMOA : public Algorithm {

private:

  MetricsUtil * utils_;
  Hypervolume * hv_;

  vector<double> hvContributions(vector< vector<double> > front);


public:
  FastSMSEMOA(Problem * problem);
  ~FastSMSEMOA();
  SolutionSet * execute();
};


#endif /* _FAST_SMSEMOA_H_ */
