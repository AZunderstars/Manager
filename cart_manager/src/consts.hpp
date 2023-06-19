#ifndef __CONSTS_HPP__
#define __CONSTS_HPP__

#include <string>

const int EMPTY_BOX_COST = 0,
          EMPTY_BOX_WEIGHT = 0,
          SMALL_PACK_WEIGHT_LIMIT = 20,
          SMALL_PACK_RATIO = 2,
          BIG_PACK_RATIO = 10;

const std::string DUPLICATE_ITEM = "Item already exists in cart",
                  NOT_FOUND = "Not found in cart",
                  INVALID_ADD = "Not a box";

#endif
