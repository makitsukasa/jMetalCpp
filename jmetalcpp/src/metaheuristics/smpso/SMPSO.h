/*
 * @file SMPSO.h
 * @author Esteban L�pez
 * @date 13 December 2011
 */

#ifndef SMPSO_H_
#define SMPSO_H_

#include <Algorithm.h>
#include <CrowdingArchive.h>
#include <Distance.h>
//#include <Hypervolume.h>
#include <Problem.h>
//#include <QualityIndicator.h>
#include <SolutionSet.h>
#include <XReal.h>
#include <PseudoRandom.h>
#include <Math.h>
#include <vector>
#include <string>

/**
 * This class implements the SMPSO algorithm described in:
 * A.J. Nebro, J.J. Durillo, J. Garcia-Nieto, C.A. Coello Coello, F. Luna and E. Alba
 * "SMPSO: A New PSO-based Metaheuristic for Multi-objective Optimization".
 * IEEE Symposium on Computational Intelligence in Multicriteria Decision-Making
 * (MCDM 2009), pp: 66-73. March 2009
 */

class SMPSO : public Algorithm {

private:

  /**
   * Stores the number of particles_ used
   */
  int swarmSize_;
  /**
   * Stores the maximum size for the archive
   */
  int archiveSize_;
  /**
   * Stores the maximum number of iteration_
   */
  int maxIterations_;
  /**
   * Stores the current number of iteration_
   */
  int iteration_;
  /**
   * Stores the particles
   */
  SolutionSet * particles_;
  /**
   * Stores the best_ solutions founds so far for each particles
   */
  Solution ** best_;
  /**
   * Stores the leaders_
   */
  CrowdingArchive * leaders_;
  /**
   * Stores the speed_ of each particle
   */
  double ** speed_;
  /**
   * Stores a comparator for checking dominance
   */
  Comparator * dominance_;
  /**
   * Stores a comparator for crowding checking
   */
  Comparator * crowdingDistanceComparator_;
  /**
   * Stores a <code>Distance</code> object
   */
  Distance * distance_;
  /**
   * Stores a operator for non uniform mutations
   */
  Operator * polynomialMutation_;

  //QualityIndicator * indicators_; // QualityIndicator object

  double r1Max_;
  double r1Min_;
  double r2Max_;
  double r2Min_;
  double C1Max_;
  double C1Min_;
  double C2Max_;
  double C2Min_;
  double WMax_;
  double WMin_;
  double ChVel1_;
  double ChVel2_;

  double trueHypervolume_;
  //Hypervolume * hy_;
  SolutionSet * trueFront_;
  double * deltaMax_;
  double * deltaMin_;
  bool success_;

  Problem *problem_;

  double inertiaWeight(int iter, int miter, double wma,
                                            double wmin);
  double constrictionCoefficient(double c1, double c2);
  double velocityConstriction(double v, double * deltaMax,
                                        double * deltaMin,
                                        int variableIndex,
                                        int particleIndex);
  void computeSpeed(int iter, int miter);
  void computeNewPositions();
  void mopsoMutation(int actualIteration, int totalIterations);

public:
  SMPSO(Problem * problem);
  //TODO: SMPSO(Problem * problem, vector<double> variables, string trueParetoFront);
  //TODO: SMPSO(Problem * problem, string trueParetoFront);
  void initParams();
  SolutionSet * execute();
  //TODO: SolutionSet * getLeader();
};

#endif /* SMPSO_H_ */
