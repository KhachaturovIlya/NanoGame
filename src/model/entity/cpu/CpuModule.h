#ifndef NANOGAME_CPUMODULE_H
#define NANOGAME_CPUMODULE_H

#include <cstddef>
#include <string>

class CpuModule {
public:
    CpuModule() = delete;

    virtual std::string name()        const = 0;

    virtual std::size_t robustness()  const = 0;
    virtual std::size_t quality()     const = 0;
    virtual std::size_t performance() const = 0;
    virtual std::size_t size()        const = 0;
    virtual std::size_t cost()        const = 0;
    virtual std::size_t frequency()   const = 0;

    virtual ~CpuModule() = default;
};


#endif //NANOGAME_CPUMODULE_H
