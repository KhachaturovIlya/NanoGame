#ifndef NANOGAME_WORKER_H
#define NANOGAME_WORKER_H

#include "WorkerStat.h"

#include <array>
#include <memory>
#include <string>

namespace nano {
    class Worker {
        int id_ = 0;
        std::string name_;
        std::array<unsigned, CNT> stats_;

    public:
        [[nodiscard]] int id() const { return id_; }
        [[nodiscard]] std::string name() const { return name_; }
        [[nodiscard]] unsigned getStat(const WorkerStat stat) const { return stats_[stat]; }

        Worker(const int id, std::string name, const std::array<unsigned, CNT> stats) :
            id_(id), name_(std::move(name)), stats_(stats) {}
    };
} // nano

#endif //NANOGAME_WORKER_H
