#ifndef SIMIT_VISUALIZER_VISUALIZER_H
#define SIMIT_VISUALIZER_VISUALIZER_H

#include "graph.h"

namespace simit {

void initDrawing();
void drawPoints(const Set<>& points, FieldRef<double,3> coordField,
                float r, float g, float b, float a);
void drawEdges(Set<2>& edges, FieldRef<double,3> coordField,
               float r, float g, float b, float a);
void drawFaces(Set<3>& faces, FieldRef<double,3> coordField,
               float r, float g, float b, float a);

} // namespace simit

#endif // SIMIT_VISUALIZER_VISUALIZER_H
