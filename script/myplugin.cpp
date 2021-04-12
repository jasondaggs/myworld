#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginMyPlugin : public WorldPlugin
  {

    public: WorldPluginMyPlugin() : WorldPlugin()
    {
              printf("Welcome to Jasons World!\n");
    }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
    {
    }
  };

  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyPlugin)
}
