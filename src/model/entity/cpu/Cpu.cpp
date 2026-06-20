#include "Cpu.h"

namespace nano {
    std::size_t Cpu::robustness() const {
        size_t robustness = 0;

        for (const std::unique_ptr<CpuModule>& module: modules_) {
            robustness += module->robustness();
        }

        return robustness;
    }

    std::size_t Cpu::quality() const {
        size_t quality = 0;

        for (const std::unique_ptr<CpuModule>& module: modules_) {
            quality += module->quality();
        }

        return quality / modules_.size();
    }

    std::size_t Cpu::performance() const {
        size_t performance = 0;

        for (const std::unique_ptr<CpuModule>& module: modules_) {
            performance += module->performance();
        }

        return performance;
    }

    std::size_t Cpu::size() const {
        size_t size = 0;

        for (const std::unique_ptr<CpuModule>& module: modules_) {
            size += module->size();
        }

        return size;
    }

    std::size_t Cpu::cost() const {
        size_t cost = 0;

        for (const std::unique_ptr<CpuModule>& module: modules_) {
            cost += module->cost();
        }

        return cost;
    }

    std::size_t Cpu::frequency() const {
        size_t frequency = SIZE_MAX;

        for (const std::unique_ptr<CpuModule>& module: modules_) {
            frequency = std::min(frequency, module->frequency());
        }

        return frequency;
    }

}
