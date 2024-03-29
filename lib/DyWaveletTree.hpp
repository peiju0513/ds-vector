/* 
 *  Copyright (c) 2012 Daisuke Okanohara
  * 
 *   Redistribution and use in source and binary forms, with or without
 *   modification, are permitted provided that the following conditions
 *   are met:
 * 
 *   1. Redistributions of source code must retain the above Copyright
 *      notice, this list of conditions and the following disclaimer.
 *
 *   2. Redistributions in binary form must reproduce the above Copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *
 *   3. Neither the name of the authors nor the names of its contributors
 *      may be used to endorse or promote products derived from this
 *      software without specific prior written permission.
 */

#ifndef PREFIX_SUM_DYWAVELET_TREE_HPP_
#define PREFIX_SUM_DYWAVELET_TREE_HPP_

#include <stdint.h>
#include "DyBitVec.hpp"

namespace ds_vector {

class DyWaveletTree{
public:
  DyWaveletTree();
  ~DyWaveletTree();
  void Clear();
  void Insert(uint64_t ind, uint8_t c);
  uint64_t Rank(uint64_t ind, uint8_t c) const;
  uint8_t Lookup(uint64_t ind) const;
  uint64_t Size() const {
    return size_;
  }

private:
  DyBitVec dbvs_[0x100];
  uint64_t size_;
};

}

#endif // PREFIX_SUM_DYWAVELET_TREE_HPP_
