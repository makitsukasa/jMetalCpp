//  ZDT2.h
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

#ifndef __ZDT2_H__
#define __ZDT2_H__

#include <jMetalCpp/core/Problem.h>
#include <math.h>
#include <jMetalCpp/encodings/solutionType/BinaryRealSolutionType.h>
#include <jMetalCpp/encodings/solutionType/RealSolutionType.h>
#include <jMetalCpp/encodings/solutionType/ArrayRealSolutionType.h>
#include <jMetalCpp/util/wrapper/XReal.h>
#include <jMetalCpp/core/Solution.h>


class ZDT2 : public Problem{
private:
	double evalG(XReal *x) ;
	double evalH(double f, double g) ;
	double * fx_ ;

public:
	ZDT2(string solutionType, int numberOfVariables = 30);
	void evaluate(Solution *solution);

	virtual ~ZDT2();
};

#endif /* __ZDT2_H__ */
