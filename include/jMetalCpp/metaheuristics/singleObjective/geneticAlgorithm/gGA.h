//  gGA.h
//
//  Author:
//       Antonio J. Nebro <antonio@lcc.uma.es>
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

#ifndef __GGA_H__
#define __GGA_H__

#include <jMetalCpp/core/Algorithm.h>
#include <jMetalCpp/core/Problem.h>
#include <jMetalCpp/core/SolutionSet.h>
#include <jMetalCpp/util/comparators/ObjectiveComparator.h>

class gGA : public Algorithm {
private:
  int populationSize_;
  int maxEvaluations_;
public:
  gGA(Problem * problem);
  SolutionSet * execute();
};

#endif /* GGA_H_ */