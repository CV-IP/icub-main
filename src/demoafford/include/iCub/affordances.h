// Class automatically generated by Dev-C++ New Class wizard

#ifndef AFFORDANCES_H
#define AFFORDANCES_H

#include <pnl_dll.hpp>
//#include "/usr/local/include/pnliNumericDenseMatrix.hpp"
//#include "/usr/local/include/pnliNumericSparseMatrix.hpp"
//#include "/usr/local/include/pnli2DNumericDenseMatrix.hpp"
PNL_USING

/*
 * Class to use PNL libraty to compute affordances
 *
 * \author Luisao Montesano
 *
 */
class Affordances
{
        public:
                // Public data

                // class constructor
                Affordances();

		// class destructor
                ~Affordances();

		// init network
		int InitializeNetStructure(int numNodes, int *sizes, int *edge_mat);
		int InitializeParameters(int node, float *CPD);
		int SolveQueryPerfectObs(int *evidence, int numQueryNds, int *queryNds, float *outP);
		int CreateEngine();

        private:
		// Private data
		CGraph *pGraph;
		CBNet* pBNet;
		CNaiveInfEngine* pNaiveInf;
		nodeTypeVector nodeTypes;

		CModelDomain* pMD;
		CFactor **myParams;
		int *nodeNumbers;
		int **domains;
		//intVector nodeSizes;
};
#endif // AFFORDANCES_H

