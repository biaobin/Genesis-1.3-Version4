#ifndef __GENESIS_TRACK__
#define __GENESIS_TRACK__

#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <map>
#include <stdlib.h>

#include <hdf5.h>
#include <mpi.h>

#include "Setup.h"
#include "Lattice.h"
#include "AlterLattice.h"
#include "GenTime.h"
#include "Beam.h"
#include "Field.h"
#include "Diagnostic.h"

using namespace std;

class Track{
 public:
   Track();
   virtual ~Track();
   bool init(int, int, map<string,string> *,Beam *, vector<Field *> *,Setup *, Lattice *, AlterLattice *, Time *, FilterDiagnostics &);
 private:
   void usage();
   bool atob(string);

   double zstop,slen,s0;
   int output_step,dumpFieldStep,dumpBeamStep,sort_step,bunchharm;
   int rank, size;
   bool exclharm;
};


#endif
