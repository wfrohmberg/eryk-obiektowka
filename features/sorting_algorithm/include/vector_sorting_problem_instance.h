#pragma once

#include <vector>
#include <functional>
#include <sorting_problem_instance.h>


template<class T>
class VectorSortingProblemInstance: public SortingProblemInstance {
protected:
    std::vector<T> data;
public:
    VectorSortingProblemInstance(std::vector<T> const& data) : data(data) {}

    virtual bool isGreater(int index1, int index2) const override {
        return data[index1] > data[index2];
    }

    virtual void swap(int index1, int index2) override {
        std::swap(data[index1], data[index2]);
    }

    virtual int size() const override {
        return static_cast<int>(data.size());
    }

    virtual SortingProblemInstance* clone() const override {
        return new VectorSortingProblemInstance<T>(data);
    }

    void forEach(std::function<void(T)> func) const {
        for (const auto& item : data) {
            func(item);
        }
    }
};