//  Kursawe.h
//
//  Authors:
//       Antonio J. Nebro <antonio@lcc.uma.es>
//       Juan J. Durillo <durillo@lcc.uma.es>
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

#ifndef __KURSAWE__
#define __KURSAWE__

#include <jMetalCpp/core/Problem.h>
#include <math.h>
#include <jMetalCpp/encodings/solutionType/BinaryRealSolutionType.h>
#include <jMetalCpp/encodings/solutionType/RealSolutionType.h>
#include <jMetalCpp/encodings/solutionType/ArrayRealSolutionType.h>
#include <jMetalCpp/util/wrapper/XReal.h>
#include <jMetalCpp/core/Solution.h>

//using namespace std;

/**
 * Class representing problem Kursawe
 */
class Kursawe : public Problem {

public:
  Kursawe(string solutionType, int numberOfVariables = 3);
  ~Kursawe();
  void evaluate(Solution *solution);  
};

#endif
