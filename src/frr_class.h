/*
Copyright (C) 2017 Melissa Gymrek <mgymrek@ucsd.edu>
and Nima Mousavi (mousavi@ucsd.edu)

This file is part of GangSTR.

GangSTR is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

GangSTR is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GangSTR.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SRC_FRR_CLASS_H__
#define SRC_FRR_CLASS_H__

#include "src/read_class.h"

/*
  Type of ReadClass

  FRRs have one completely repetitive pair, and the other outside the repeat region

 */
class FRRClass: public ReadClass {
 public:
  bool GetLogClassProb(const int32_t& allele,
		       const int32_t& read_len, const int32_t& motif_len,
		       double* log_class_prob);
  bool GetLogReadProb(const int32_t& allele, const int32_t& data,
		      const int32_t& read_len, const int32_t& motif_len,
		      const int32_t& ref_count,
		      double* log_allele_prob);
  bool GetCountLogLikelihood(const int32_t& allele1,
			     const int32_t& allele2,
			     const int32_t& read_len,
			     const int32_t& motif_len,
			     const double& coverage,
			     const int32_t& ploidy,
			     const int32_t& offtarget_count,
			     double* count_ll);
  bool GetGridBoundaries(int32_t* min_allele, int32_t* max_allele,
			 const int32_t& read_len, const int32_t& motif_len,
			 const double& coverage, const int32_t& offtarget_count);
};

#endif  // SRC_FRR_CLASS_H__
