#include "ScriptMgr.h"
#include "InstanceScript.h"
#include "mana_tombs.h"
#include "Map.h"

class instance_mana_tombs : public InstanceMapScript
{
    public:
        instance_mana_tombs() : InstanceMapScript(MTScriptName, 557) { }

        struct instance_mana_tombs_InstanceMapScript : public InstanceScript
        {
            instance_mana_tombs_InstanceMapScript(Map* map) : InstanceScript(map)
            {
                SetHeaders(DataHeader);
                SetBossNumber(EncounterCount);
            }
        };

        InstanceScript* GetInstanceScript(InstanceMap* map) const override
        {
            return new instance_mana_tombs_InstanceMapScript(map);
        }
};

void AddSC_instance_mana_tombs()
{
    new instance_mana_tombs();
}
