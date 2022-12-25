#ifndef SCENE_HPP
#define SCENE_HPP

#include <vector>

#include "volume3D.hpp"
#include "Pave3D.hpp"

class Scene
{
    private:
        std::vector<Volume3D*> volumes;
    public:
        Scene();
        Scene(std::vector<Volume3D*> _volumes);
        std::vector<Volume3D*> getVolumes() const;
        void addVolume(Volume3D* _volume);
        std::vector<Vector3> getPoints();
};


#endif
