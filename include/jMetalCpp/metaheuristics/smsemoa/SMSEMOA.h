//  SMSEMOA.h
//
//  Author:
//       Cristian Zambrano V. <cristian_uteq@hotmail.com>
//
//  Copyright (c) 2013 Antonio J. Nebro, Juan J. Durillo
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


#ifndef SMSEMOA_H_
#define SMSEMOA_H_

#include <jMetalCpp/core/Algorithm.h>
#include <jMetalCpp/core/Problem.h>
#include <jMetalCpp/core/SolutionSet.h>
#include <jMetalCpp/util/PseudoRandom.h>
#include <jMetalCpp/qualityIndicator/QualityIndicator.h>
#include <jMetalCpp/qualityIndicator/util/MetricsUtil.h>
#include <jMetalCpp/qualityIndicator/Hypervolume.h>
#include <jMetalCpp/util/Ranking.h>
#include <jMetalCpp/util/comparators/CrowdingDistanceComparator.h>

class SMSEMOA : public Algorithm {

private:

  MetricsUtil * utils_;
  Hypervolume * hv_;

  vector<double> hvContributions(vector< vector<double> > front);


public:
  SMSEMOA(Problem * problem);
  ~SMSEMOA();
  SolutionSet * execute();
};


#endif /* SMSEMOA_H_ */
