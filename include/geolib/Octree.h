#ifndef _Octree_H_
#define _Octree_H_

#include "datatypes.h"
#include "OctreeNode.h"

namespace vwm {

class Octree {

    friend class OctreeNode;

public:

    Octree(double size, double resolution = 0.1);

    Octree(const Octree& orig);

    virtual ~Octree();

    void clear();

    void add(const Vector3& p);

    void getCubes(std::vector<Box>& cubes) const;

    double setResolution(double resolution);

    double getResolution() const;

    bool intersect(const Ray& r, float t0, float t1, double& distance) const;

    void raytrace(const Ray& r, float t0, float t1);

    bool intersect(const Vector3& p) const;

    bool intersect(const Box& b) const;

protected:

    double resolution_;

    Vector3 offset_;

    Vector3 max_;

    double size_;

    OctreeNode* root_;

};

}

#endif
