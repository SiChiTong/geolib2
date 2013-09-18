#include "wire_volume/datatypes.h"

namespace vwm {

std::ostream& operator<< (std::ostream& out, const Vector3& v) {
    out << "(" << v.x() << ", " << v.y() << ", " << v.z() << ")";
    return out;
}

std::ostream& operator<< (std::ostream& out, const Quaternion& q) {
    tf::Matrix3x3 m(q);
    double roll, pitch, yaw;
    m.getRPY(roll, pitch, yaw);
    out << "(" << roll << ", " << pitch << ", " << yaw << ")";
    return out;
}

}
