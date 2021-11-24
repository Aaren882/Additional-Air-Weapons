class CfgPatches
{
	class ADtionBms
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"ADtionRks",
			"A3_Weapons_F",
			"A3_Weapons_F_Orange",
			"A3_Weapons_F_Sams"
		};
		requiredVersion=0.1;
	};
};
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"

class DS_Exp_Effect
{
	class Light1
	{
		simulation = "light";
		type = "GrenadeExploLight";
		position[] = {0,0,0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class GrenadeExp1
	{
		simulation = "particles";
		type = "GrenadeExp";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class GrenadeSmoke1
	{
		simulation = "particles";
		type = "GrenadeSmoke1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class GrenadeBubbles
	{
		simulation = "particles";
		type = "GrenadeBubbles1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class MineWater1
	{
		simulation = "particles";
		type = "MineUnderwaterWaterPDM";
		enabled = "distToWater interpolate [-5.0001,-5,-1,1]";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class MineWave
	{
		simulation = "particles";
		type = "GrenadeWaveSmall";
		enabled = "(distToWater interpolate [-10.0001,-10,-1,1]) * (distToWater interpolate [0.1,0.10001,-1,1])";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ExpSparks
	{
		simulation = "particles";
		type = "DS_ExpSparks";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class Explosion1Big
	{
		simulation = "particles";
		type = "VehExplosionParticles";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Smoke1Big
	{
		simulation = "particles";
		type = "VehExpSmoke";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SmallSmoke1Big
	{
		simulation = "particles";
		type = "DSExpSmoke2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class CfgCloudlets
{
	class ExpSparks;
	class VehExpSmoke2;
	class Default;
	class Cmeasures1M;
	class Cmeasures1L;
	class DS_ExpSparks: ExpSparks
	{
		color[] = {{247,255,3,1},{249,255,64,1}};
		size[] = {2,1.8,1.6,1.6,1.6,1.2,1.2,1.2,1.2,0};
	};
	class DSExpSmoke2: VehExpSmoke2
	{
		size[] = {1.5,1.3,1.1,1.1,1.1,0.7,0.7,0.7,0.7,0};
	};
	class Cmeasures1MWP: Cmeasures1M
	{
		lifeTime = 10;
	};
	class CmeasuresWP: Cmeasures1L
	{
		lifeTime = 10;
	};
};
class CounterMeasureFlare;
class WPFlare: CounterMeasureFlare
{
	class Cmeasures1
	{
		simulation = "particles";
		type = "Cmeasures1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 10;
		qualityLevel = 2;
	};
	class Cmeasures1M
	{
		simulation = "particles";
		type = "Cmeasures1MWP";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 10;
		qualityLevel = 1;
	};
	class Cmeasures1L
	{
		simulation = "particles";
		type = "CmeasuresWP";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 10;
		qualityLevel = 0;
	};
	class Cmeasures2
	{
		simulation = "particles";
		type = "Cmeasures2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 5;
	};
};