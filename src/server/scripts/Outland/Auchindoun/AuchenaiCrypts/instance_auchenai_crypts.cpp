#include "ScriptMgr.h"
#include "auchenai_crypts.h"
#include "InstanceScript.h"
#include "Map.h"

class instance_auchenai_crypts : public InstanceMapScript
{
    public:
        instance_auchenai_crypts() : InstanceMapScript(ACScriptName, 558) { }

        struct instance_auchenai_crypts_InstanceMapScript : public InstanceScript
        {
            instance_auchenai_crypts_InstanceMapScript(Map* map) : InstanceScript(map)
            {
                SetHeaders(DataHeader);
                SetBossNumber(EncounterCount);
            }
        };

        InstanceScript* GetInstanceScript(InstanceMap* map) const override
        {
            return new instance_auchenai_crypts_InstanceMapScript(map);
        }
};

void AddSC_instance_auchenai_crypts()
{
    new instance_auchenai_crypts();
}
