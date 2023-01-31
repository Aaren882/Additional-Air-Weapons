class CfgPatches
{
	class ADtional_WP
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Orange",
			"A3_Data_F_ParticleEffects",
			"A3_Modules_F_Curator_Ordnance",
			"ADtionBms",
			"ADtionRks",
			"ADtionRksMn",
			"ADtionRksArty"
		};
		requiredVersion=0.1;
	};
};
#include "Sounds\Sounds.hpp"
#include "Curator\Supports.hpp"
#include "Effects.hpp"
#include "CfgFunctions.hpp"


#if __has_include("\MG8\TWA_SonCore\config.bin")
#else
	class CfgFactionClasses
	{
		class Aaren_Modules
		{
			displayName = "Aaren's Modules";
			priority = 10;
			side = 7;
		};
	};
#endif