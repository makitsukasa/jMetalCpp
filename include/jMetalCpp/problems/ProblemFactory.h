//  ProblemFactory.h
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

#ifndef __PROBLEM_FACTORY__
#define __PROBLEM_FACTORY__

#include <jMetalCpp/core/Problem.h>
#include <stdio.h>
#include <string.h>

#include <jMetalCpp/problems/singleObjective/CEC2005Problem.h>
#include <jMetalCpp/problems/DTLZ/DTLZ1.h>
#include <jMetalCpp/problems/DTLZ/DTLZ2.h>
#include <jMetalCpp/problems/DTLZ/DTLZ3.h>
#include <jMetalCpp/problems/DTLZ/DTLZ4.h>
#include <jMetalCpp/problems/DTLZ/DTLZ5.h>
#include <jMetalCpp/problems/DTLZ/DTLZ6.h>
#include <jMetalCpp/problems/DTLZ/DTLZ7.h>
#include <jMetalCpp/problems/Fonseca.h>
#include <jMetalCpp/problems/singleObjective/Griewank.h>
#include <jMetalCpp/problems/Kursawe.h>
#include <jMetalCpp/problems/LZ09/LZ09_F1.h>
#include <jMetalCpp/problems/LZ09/LZ09_F2.h>
#include <jMetalCpp/problems/LZ09/LZ09_F3.h>
#include <jMetalCpp/problems/LZ09/LZ09_F4.h>
#include <jMetalCpp/problems/LZ09/LZ09_F5.h>
#include <jMetalCpp/problems/LZ09/LZ09_F6.h>
#include <jMetalCpp/problems/LZ09/LZ09_F7.h>
#include <jMetalCpp/problems/LZ09/LZ09_F8.h>
#include <jMetalCpp/problems/LZ09/LZ09_F9.h>
#include <jMetalCpp/problems/singleObjective/OneMax.h>
#include <jMetalCpp/problems/singleObjective/Rastrigin.h>
#include <jMetalCpp/problems/singleObjective/Rosenbrock.h>
#include <jMetalCpp/problems/Schaffer.h>
#include <jMetalCpp/problems/singleObjective/Sphere.h>
#include <jMetalCpp/problems/Srinivas.h>
#include <jMetalCpp/problems/Tanaka.h>
#include <jMetalCpp/problems/ZDT/ZDT1.h>
#include <jMetalCpp/problems/ZDT/ZDT2.h>
#include <jMetalCpp/problems/ZDT/ZDT3.h>
#include <jMetalCpp/problems/ZDT/ZDT4.h>
#include <jMetalCpp/problems/ZDT/ZDT5.h>
#include <jMetalCpp/problems/ZDT/ZDT6.h>

class ProblemFactory {

public:
  static Problem * getProblem(char * name);
  static Problem * getProblem(int argc, char ** argv);
  static Problem * getProblem(char * name, int argc, char ** argv);
};

#endif // __PROBLEM_FACTORY__

