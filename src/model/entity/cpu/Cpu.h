#ifndef NANOGAME_CPU_H
#define NANOGAME_CPU_H

#include <algorithm>

#include "CpuModule.h"
#include "CpuTrait.h"

#include <memory>
#include <string>
#include <vector>

namespace nano {
    class Cpu {
        std::vector<std::unique_ptr<CpuTrait>>  traits_;
        std::vector<std::unique_ptr<CpuModule>> modules_;

        std::string name_;
        std::string architecture_;

    public:
        const CpuTrait* getTrait(const std::string& name) const {
            for (const std::unique_ptr<CpuTrait>& trait: traits_) {
                if (trait->name() == name) return trait.get();
            }

            return nullptr;
        }

        const CpuModule* getModule(const std::string& name) const {
            for (const std::unique_ptr<CpuModule>& module: modules_) {
                if (module->name() == name) return module.get();
            }

            return nullptr;
        }

        std::string name()          { return name_; }
        std::string architecture()  { return architecture_; }

        Cpu(std::vector<std::unique_ptr<CpuTrait>> traits, std::vector<std::unique_ptr<CpuModule>> modules,
            std::string name, std::string architecture)
            : traits_(std::move(traits)),
              modules_(std::move(modules)),
              name_(std::move(name)),
              architecture_(std::move(architecture)) {
        }

        std::size_t robustness()  const;
        std::size_t quality()     const;
        std::size_t performance() const;
        std::size_t size()        const;
        std::size_t cost()        const;
        std::size_t frequency()   const;
    };
} // nano

#endif //NANOGAME_CPU_H