#include "VkTriangleSurface.h"

VkTriangleSurface::VkTriangleSurface() : VisualObject()
{

    Vertex v1{0.0f,   0.0f,  0.0f,   1.0f, 0.0f, 0.0f, 0.0f, 0.0f};
    Vertex v2{1.0f,   0.0f,  0.0f,   0.0f, 1.0f, 0.0f, 0.0f, 0.0f};
    Vertex v3{0.0f,   1.0f,  0.0f,   0.0f, 0.0f, 1.0f, 0.0f, 0.0f};
    Vertex v4{1.0f,   1.0f,  0.0f,   1.0f, 1.0f, 0.0f, 0.0f, 0.0f};
    mVertices.push_back(v1);
    mVertices.push_back(v2);
    mVertices.push_back(v3);
    // mVertices.push_back(v3);
    // mVertices.push_back(v2);
    // mVertices.push_back(v4);

    mMatrix.scale(0.25f);

}

VkTriangleSurface::VkTriangleSurface(const std::string &filename)
{
    std::ifstream inn(filename);
    if (!inn.is_open())
        return;
    // read input from math part of compulsory
    int n;
    Vertex v;
    inn >> n;
    for (auto i=0; i<n; i++)
    {
        inn >> v;
        mVertices.push_back(v);
        qDebug() << v.x << v.y << v.z << v.r << v.g << v.b;


    }

      mMatrix.scale(0.8);
     mMatrix.translate(-0.5f,-0.5, 0);
      //mMatrix.rotate(45,0,1,0);



    inn.close();


}
