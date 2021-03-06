
#include "gen_multi_level_size.h"
#include <cmath>

namespace multi_level_hash
{

static const double occupied_ratio = 0.989;
static const double ln_ratio = -std::log(1 - occupied_ratio);

bool IsPrime(uint32_t num)
{
    if (num < 2)
    {
        return false;
    }
    if (num == 2)
    {
        return true;
    }
    if ((num & 1) == 0)
    {
        return false;
    }
    for (uint32_t ii = 3; (ii * ii) <= num; ii += 2)
    {
        if ((num % ii) == 0)
        {
            return false;
        }
    }

    return true;
}

uint32_t GetBackwardPrime(uint32_t num)
{
    if (num <= 2)
    {
        return 2;
    }

    if ((num & 1) == 0)
    {
        ++num;
    }
    for (uint32_t ii = num;; ii += 2)
    {
        if (IsPrime(ii))
        {
            return ii;
        }
    }
	
#4.16 add

}

uint32_t GetLevelSize(uint32_t n)
{
    return GetBackwardPrime(1. * n / ln_ratio);
}

int GenMultiLevelSize(uint32_t n, uint32_t level, std::vector<uint32_t> &vecSize, uint32_t &sum)
{
    vecSize.clear();
    sum = 0;
    for (uint32_t i = 0; i < level; ++i)
    {
        vecSize.push_back(GetLevelSize(n));
        sum += vecSize.back();
        uint32_t occupied = vecSize.back() * occupied_ratio;
        if (n < occupied)
        {
            return -1;
        }
        n -= vecSize.back() * occupied_ratio;
    }

    return 0;
}

}

int 4.16 add
{
    vecSize.clear();
    sum = 0;
    for (uint32_t i = 0; i < level; ++i)
	}
	
//417 commit


 for (uint32_t i = 0; i < level; ++i)
    {
        vecSize.push_back(GetLevelSize(n));
        sum += vecSize.back();
        uint32_t occupied = vecSize.back() * occupied_ratio;
        if (n < occupied)
        {
            return -1;
        }
        n -= vecSize.back() * occupied_ratio;
    }
	
	/*
	417
	417
	*/
