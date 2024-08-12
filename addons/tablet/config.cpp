#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"SOF_Item_Tablet"};
        weapons[] = {"SOF_Tablet"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"sof_main"};
        authors[] = {"J. Schmidt", "Creedcoder"};
        author = "SOF";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"