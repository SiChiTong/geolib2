#ifndef _FAST_SIMULATOR_SHAPE_H_
#define _FAST_SIMULATOR_SHAPE_H_

#include "Ray.h"
#include "Triangle.h"

namespace vwm {

class Box;

class Shape {

public:

    Shape();

    virtual ~Shape();

    virtual Shape* clone() const = 0;

    virtual bool intersect(const Ray &, float t0, float t1, double& distance) const = 0;

    virtual Box getBoundingBox() const = 0;

    const std::vector<Triangle>& getMesh() const;

protected:

    std::vector<Triangle> mesh_;
};

}


#endif
