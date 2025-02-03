#ifndef VKTRIANGLESURFACE_H
#define VKTRIANGLESURFACE_H


#include <vector>
#include <string>
#include "Vector.h"
#include "VisualObject.h"


class VkTriangleSurface : public VisualObject

{
public:
    VkTriangleSurface();

    //std::vector<Vertex> mVertices;
    //std::vector<Vertex> getVertices() { return mVertices; }

    VkTriangleSurface(const std::string& filename);


};

#endif // VKTRIANGLESURFACE_H
