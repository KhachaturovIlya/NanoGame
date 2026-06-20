#ifndef NANOGAME_CPUTRAIT_H
#define NANOGAME_CPUTRAIT_H

#include <string>

class CpuTrait {
public:
    CpuTrait() = delete;

    virtual std::string name() = 0;

    virtual ~CpuTrait() = default;
};


#endif //NANOGAME_CPUTRAIT_H
