class CfgSFX
{
	class Smoke_Loop
	{
		name="Smoke Loop";
		sound0[]={"a3\sounds_f\weapons\smokeshell\smoke_loop1",1,1.5,50,1,0,0,0};
		sounds[]={"sound0"};
		titles[]={};
		empty[]={"",0,0,0,0,0,0,0};
	};
};
//////////////////////////////////////////////////////////////
///////////////////////Burst Effects//////////////////////////
//////////////////////////////////////////////////////////////
class AAW_WP_Burst
{
	class Light
	{
		simulation="light";
		type="AAW_Shell_Burst_Light";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=6;
	};
};

//Shell
class AAW_Bomb_Burst
{
	class Shell_Burst_Smoke
	{
		simulation="particles";
		type="AAW_Bomb_Burst_Particle";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Sparks
	{
		simulation="particles";
		type="AAW_Bomb_Burst_Sparks_Effect";
		position[]={0,0,0};
		interval=1;
		intensity=1;
		lifeTime=1;
	};
};
class AAW_Rocket_Burst
{
	class Shell_Burst_Smoke
	{
		simulation="particles";
		type="AAW_Rocket_Burst_Particle";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Sparks
	{
		simulation="particles";
		type="AAW_Rocket_Burst_Sparks_Effect";
		position[]={0,0,0};
		interval=1;
		intensity=1;
		lifeTime=1;
	};
};
//SFW
class AAW_SFW_Effect
{
	class AAW_SFW_Particle
	{
		simulation="particles";
		type="AAW_SFW_Burst_Particle";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
//////////////////////////////////////////////////////////////
////////////////////////Fly Effects///////////////////////////
//////////////////////////////////////////////////////////////
class AAW_WP_Fly_Effect
{
	class Light1
	{
		simulation="light";
		type="AAW_WP_Light";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=8;
	};
	class Trails
	{
		simulation="particles";
		type="AAW_WPTrails";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class ArtilleryTrails
{
	class ClusterExplosion
	{
		simulation="particles";
		type="ClusterExplosion";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		enabled="flyTime interpolate [0,0.15,1,-1]";
	};
};

//////////////////////////////////////////////////////////////
/////////////////////Explosion Effects////////////////////////
//////////////////////////////////////////////////////////////
//WP
class AAW_WP_Explosion_Smoke
{
	class Particles
	{
		simulation="particles";
		type="AAW_WP_Explosion_Spark";
		position[]={0,0,0};
		interval=1;
		intensity=1;
		lifeTime=0.5;
	};
};
//WP Crater
class AAW_WP_Crater
{
	class sound
	{
		simulation="sound";
		type="Smoke_Loop";
		interval=1;
		intensity=1;
		lifeTime=15;
	};
	class Light
	{
		simulation="light";
		type="AAW_WP_Burst_Light";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=15;
	};
	class Burn_Smoke
	{
		simulation="particles";
		type="AAW_Explo_WPSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=15;
	};
};
//WP Impact
class AAW_WPTrailEffect_Sec
{
	class sound
	{
		simulation="sound";
		type="Smoke_Loop";
		interval=1;
		intensity=1;
		lifeTime=15;
	};
	class Trails
	{
		simulation="particles";
		type="AAW_WPTrailEffect";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=10;
	};
	class Light
	{
		simulation="light";
		type="AAW_WP_Burst_Trail_Light";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=10;
	};
};
//Single WP
class AAW_SWP_Explosion
{
	class Smoke
	{
		simulation="particles";
		type="AAW_Explo_SWP";
		position[]={0,0,0};
		interval=1;
		intensity=1;
		lifeTime=0.5;
	};
	class Particles
	{
		simulation="particles";
		type="AAW_SWP_Explosion_Spark";
		position[]={0,0,0};
		interval=1;
		intensity=1;
		lifeTime=0.5;
	};
};
//Crater
class AAW_SWP_Crater
{
	class sound
	{
		simulation="sound";
		type="Smoke_Loop";
		interval=1;
		intensity=1;
		lifeTime=10;
	};
	class Light
	{
		simulation="light";
		type="AAW_WP_Burst_Light";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=10;
	};
	class Burn_Smoke
	{
		simulation="particles";
		type="AAW_Burn_SWPSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=10;
	};
};

//Napalm
class AAW_NP_Explosion
{
	class NapalmFireBall
	{
		simulation="particles";
		type="AAW_NP_Explosion_Spark";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class AAW_NP_Fire_Ball_Explosion
{
	class Sound
	{
		simulation="sound";
		type="Fire";
		interval=1;
		intensity=1;
		lifeTime=20;
	};
	class Object
	{
		simulation="particles";
		type="AAW_NPFire_Ball";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=20;
	};
	class Smoke
	{
		simulation="particles";
		type="NPFireBallSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=20;
	};
	class Light
	{
		simulation="light";
		type="AAW_NP_Light";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=20;
	};
};
//Crater
class AAW_NPSmokeCrater
{
	class NapalmFireLight
	{
		simulation="light";
		type="LargeFireLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=20;
	};
	class Sound
	{
		simulation="sound";
		type="Fire";
		interval=1;
		intensity=1;
		lifeTime=20;
	};
	class Refract
	{
		simulation="particles";
		type="AAW_NPRefract";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=20;
	};
	class NP_Fire_Explo
	{
		simulation="particles";
		type="NP_Fire_Explo";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=20;
	};
	class NapalmTallSmoke
	{
		simulation="particles";
		type="NPSmoke_Up";
		position[]={0,5,0};
		intensity=1;
		interval=1;
		lifeTime=20;
	};
	class Napalm_Smoke
	{
		simulation="particles";
		type="NPSmoke_Ground";
		position[]={0,1,0};
		intensity=1;
		interval=1;
		lifeTime=20;
	};
	class Napalm_Sparks
	{
		simulation="particles";
		type="FireSparks";
		position[]={0,2,0};
		intensity=1;
		interval=1;
		lifeTime=20;
	};
};
//Single
class AAW_SNP_Explosion
{
	class Particles
	{
		simulation="particles";
		type="AAW_SNP_Explosion_Spark";
		position[]={0,0,0};
		interval=1;
		intensity=1;
		lifeTime=0.5;
	};
	class Smoke
	{
		simulation="particles";
		type="AAW_Explo_Smoke_SNP";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
};
//Crater
class AAW_SNPSmokeCrater: AAW_NPSmokeCrater
{
	class NP_Fire_Explo
	{
		simulation="particles";
		type="SNP_Fire_Explo";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=20;
	};
	class NapalmTallSmoke
	{
		simulation="particles";
		type="SNPSmoke_Up";
		position[]={0,5,0};
		intensity=1;
		interval=1;
		lifeTime=20;
	};
	class Napalm_Smoke
	{
		simulation="particles";
		type="SNPSmoke_Ground";
		position[]={0,1,0};
		intensity=1;
		interval=1;
		lifeTime=20;
	};
};
/////////////////////////////////////////////////////////
////////////////////Sound Effects////////////////////////
/////////////////////////////////////////////////////////
class AAW_Sound_SFW_Effect
{
	class AAW_Sound_Effect
	{
		simulation="particles";
		type="AAW_Sound_Effect_SFW";
		position[]={0,0,0};
		intensity=1;
		interval=0;
		lifeTime=1;
	};
};
class AAW_Sound_Bomb_Effect
{
	class AAW_Sound_Effect
	{
		simulation="particles";
		type="AAW_Sound_Effect_Bomb";
		position[]={0,0,0};
		intensity=1;
		interval=0;
		lifeTime=0.1;
	};
};
class AAW_Sound_Rocket_Effect
{
	class AAW_Sound_Effect
	{
		simulation="particles";
		type="AAW_Sound_Effect_Rocket";
		position[]={0,0,0};
		intensity=1;
		interval=0;
		lifeTime=0.1;
	};
};
///////Flare////////
class AAW_CM_Flare
{
	class Trail
	{
		simulation="particles";
		type="AAW_CMTrails";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime = 30.5;
	};
	class Light
	{
		simulation = "light";
		type="AAW_CM_Flare";
		position[] = {0,0.5,0};
		intensity = 1;
		interval = 1;
		lifeTime=30;
	};
};
class CfgCloudlets
{
	class Default;
	class ClusterExplosion;
	class SmokeShellWhiteSmall;
	//Sounds
	class AAW_Sound_Effect_Bomb: ClusterExplosion
	{
		color[]={{1,1,1,0}};
		lifeTime=0.25;
		timerPeriod = 1;
		//Script
		beforeDestroyScript="MG8\AdtionRks\Scripts\BombEffect.sqf";
	};
	class AAW_Sound_Effect_Rocket: AAW_Sound_Effect_Bomb
	{
		beforeDestroyScript="MG8\AdtionRks\Scripts\RocketEffect.sqf";
	};
	class AAW_Sound_Effect_SFW: AAW_Sound_Effect_Bomb
	{
		//Script
		beforeDestroyScript="MG8\AdtionRks\Scripts\SFWEffect.sqf";
	};
	class AAW_SmokeShellWhite: SmokeShellWhiteSmall
	{
		rubbing=1;
	};
	class WPTrails;
	class WPCloud;
	class AAW_WPTrails: Default
	{
		interval=0.006;
		particleShape="\A3\Data_F\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=8;
		particleFSLoop=0;
		particleType="Billboard";
		animationName="";
		animationSpeed[]={1000};
		timerPeriod=0;
		lifeTime=8;
		position[]={0,0,1};
		moveVelocity[]={0,0,0};
		rotationVelocity=0;
		weight=1.25;
		volume=1;
		rubbing=2;
		size[]={1.5,2};
		color[]=
		{
			{0.7,0.8,1,0.8},
			{0.7,0.8,1,0.5},
			{0.7,0.8,1,0.05},
			{0.7,0.8,1,0.01},
			{0.7,0.8,1,0}
		};
		lifeTimeVar=1;
		positionVar[]={0.2,0.2,0.2};
		positionVarConst[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
		sizeVar=0.1;
		MoveVelocityVarConst[]={0,0,0};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		angleVar=1;
	};
	class WPTrailEffect;
	class NPTrails: WPTrails
	{
		sizeVar=0.2;
		colorVar[]={0.1,0.1,0.1,0};
		color[]=
		{
			{1,1,1,0},
			{1,1,1,-1},
			{1,1,1,-1},
			{1,1,1,-1},
			{1,1,1,-1},
			{1,1,1,0}
		};
	};
	class WPSmoke: Default
	{
		lifeTime=0.8;
	};
	
	//Napalm
	class NPSmoke_Up: Default
	{
		interval=0.3;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth=8;
		particleFSIndex=0;
		particleFSFrameCount=40;
		particleFSLoop=1;
		animationName="";
		ignoreWind=0;
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=10;
		moveVelocity[]={0,60,0};
		rotationVelocity=0;
		weight=0.01;
		volume=0.04;
		rubbing=1;
		size[]={8,10,15};
		color[]={{0.1,0.1,0.1,0.1},{0.1,0.1,0.1,0.8},{0.1,0.1,0.1,0.5},{0.1,0.1,0.1,0.01},{0.1,0.1,0.1,0}};
		animationSpeed[]={0.5};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=1.5;
		positionVar[]={1,2,1};
		MoveVelocityVar[]={1.8,1,1.8};
		rotationVelocityVar=0.1;
		sizeVar=0.5;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.1;
	};
	class SNPSmoke_Up: NPSmoke_Up
	{
		size[]={10,13,18};
		moveVelocity[]={0,75,0};
	};
	class NPSmoke_Ground: NPSmoke_Up
	{
		interval=0.2;
		color[]={{0.1,0.1,0.1,0.8},{0.1,0.1,0.1,1},{0.1,0.1,0.1,1},{0.1,0.1,0.1,0.05},{0.1,0.1,0.1,0.01},{0.1,0.1,0.1,0}};
		rubbing=0.5;
		weight=0.04;
		volume=0.06;
		lifeTime=10;
		size[]={3,5,8};
		
		moveVelocity[]={0,1,0};
		positionVar[]={1,0,1};
		MoveVelocityVar[]={1.5,1.2,1.5};
		
		rotationVelocity=0;
		rotationVelocityVar=0.1;
	};
	class SNPSmoke_Ground: NPSmoke_Ground
	{
		moveVelocity[]={0,3,0};
		size[]={5,8,10};
	};
	class AAW_NPRefract: NPSmoke_Up
	{
		particleShape="\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth=1;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		
		interval=0.8;
		
		moveVelocity[]={0,0.5,0};
		positionVar[]={0.3,0.3,0.3};
		moveVelocityVar[]={0.5,0.1,0.5};
		
		angleVar=1;
		lifeTime=2;
		
		rotationVelocity=1;
		weight=0.8;
		volume=1;
		rubbing=0.5;
		size[]={4,5,8};
		color[]=
		{
			{0.3,0.3,0.3,1},
			{0.3,0.3,0.3,0.8},
			{0.3,0.3,0.3,0.4},
			{0.3,0.3,0.3,0.2},
			{0.3,0.3,0.3,0}
		};
		//colorCoef[]={1,1,1,1.4};
		animationSpeed[]={2,1};
		
		destroyOnWaterSurface=1;
		lifeTimeVar=0.5;
		rotationVelocityVar=20;
		sizeVar=0.03;
	};
	class AAW_WPRefract: AAW_NPRefract
	{
		interval=1;
		moveVelocity[]={0,0.25,0};
		size[]={0.5,2};
	};
	//Napalm Explosion
	class NP_Fire_Explo: Default
	{
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		animationSpeed[]={0.5,1};
		
		angleVar=360;
		rotationVelocity=0;
		rotationVelocityVar=10;
		
		interval=0.01;
		
		color[]={{1,0.8,0.8,-50},{1,0.8,0.8,0}};
		colorVar[]={0.1,0.1,0.1,0};
		
		weight=0.04;
		volume=0.05;
		rubbing=0.5;
		lifeTime=1.5;
		lifeTimeVar=1;
		
		moveVelocity[]={0,0.5,0};
		positionVar[]={0.3,0.3,0.3};
		moveVelocityVar[]={0.5,0.1,0.5};
		
		size[]={3,2,1.5,0};
		sizeVar=0.5;
		
		damageType="Fire";
		coreIntensity=3;
		coreDistance=3;
		damageTime=0.1;
		constantDistance=3;
	};
	class SNP_Fire_Explo: NP_Fire_Explo
	{
		size[]={3,2,1.5,0};
		lifeTime=2;
		moveVelocity[]={0,10,0};
	};
	//Explosion
	class AAW_Explo_SWP: WPCloud
	{
		interval=0.1;
		lifeTime=10;
		lifeTimeVar=1.5;
		size[]={5,8};
		color[]=
		{
			{1,1,1,0.3},
			{1,1,1,0.05},
			{1,1,1,0}
		};
		weight=0.04;
		volume=0.05;
		rubbing=0.8;
		
		animationSpeed[]={1000};
		
		positionVar[]={0.5,0.5,0.5};
		position[]={0,0,0};
		moveVelocity[]={0,5,0};
		MoveVelocityVar[]={0.5,0.75,0.5};
		rotationVelocity=0;
		rotationVelocityVar=0.2;
		
		blockAIVisibility=1;
		
		randomDirectionPeriodVar=0.2;
		randomDirectionIntensityVar=0.1;
	};
	class AAW_Explo_WPSmoke: AAW_Explo_SWP
	{
		interval=0.1;
		lifeTime=4;
		lifeTimeVar=1.5;
		size[]={1,2};
		color[]=
		{
			{1,1,1,0.01},
			{1,1,1,0.5},
			{1,1,1,0.3},
			{1,1,1,0.05},
			{1,1,1,0}
		};
		
		moveVelocity[]={0,5,0};
		
		weight=0.05;
		volume=0.04;
		
		damageType="Fire";
		coreIntensity=2;
		coreDistance=3;
		damageTime=0.1;
		constantDistance=3;
		
		positionVar[]={0.1,0.3,0.1};
		position[]={0,0,0};
	};
	class AAW_Burn_SWPSmoke: AAW_Explo_WPSmoke
	{
		weight=0.04;
		volume=0.05;
		lifeTime=5;
		size[]={5,10};
		moveVelocity[]={0,20,0};
		MoveVelocityVar[]={0.5,0.75,0.5};
		positionVar[]={1,1,1};
	};
	
	class AAW_WPTrailEffect: WPTrailEffect
	{
		interval=0.05;
		lifeTime=4;
		color[]=
		{
			{1,1,1,0.5},
			{1,1,1,0.1},
			{1,1,1,0.05},
			{1,1,1,0}
		};
		volume=0.0501;
		weight=0.05;
		size[]={0.75,1.75,2,3};
		
		moveVelocity[]={0,2,0};
		MoveVelocityVar[]={0.5,0.75,0.5};
		
		rubbing=3;
		
		blockAIVisibility=1;
	};
	//Napalm
	class AAW_Explo_Smoke_SNP: AAW_Explo_SWP
	{
		color[]=
		{
			{0.1,0.1,0.1,0.8},
			{0.1,0.1,0.1,1},
			{0.1,0.1,0.1,1},
			{0.1,0.1,0.1,0.05},
			{0.1,0.1,0.1,0.01},
			{0.1,0.1,0.1,0}
		};
	};
	//Sparks
	class ExpSparks1;
	class AAW_WP_Explosion_Spark: ExpSparks1
	{
		interval=0.2;
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=7;
		particleFSLoop=0;
		particleType="Billboard";
		
		animationSpeed[]={0.25};
		rotationVelocity=0;
		lifeTime=8;
		lifeTimeVar=2;
		size[]={0};
		color[]=
		{
			{0.8,0.6,0.16,-1},
			{0.8,0.6,0.16,0}
		};
		rubbing=1;
		moveVelocity[]={0,6,0};
		MoveVelocityVar[]={4,1,4};
		bounceOnSurface=0.4;
		bounceOnSurfaceVar=0.3;
		position[]={0,0,0};
		positionVar[]={0.1,0,0.1};
		rotationVelocityVar=2;
		randomDirectionPeriod=0.2;
		sizeVar=1;
		randomDirectionIntensity=0.2;
		angleVar=2;
		
		damageType="Fire";
		coreIntensity=1.25;
		coreDistance=3;
		damageTime=0.1;
		constantDistance=3;
		
		emissiveColor[]=
		{
			{10000,6000,1600,0.5}
		};
		particleEffects="AAW_WPTrailEffect_Sec";
	};
	class AAW_SWP_Explosion_Spark: AAW_WP_Explosion_Spark
	{
		interval=0.02;
		lifeTime=10;
		lifeTimeVar=5;
		moveVelocity[] = {"outDirX * outSpeed * 50",10,"outDirZ * outSpeed * 50"};
		MoveVelocityVar[]={5,6,5};
		positionVar[]={3,3,3};
		
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.2;
		
		weight=15;
		volume=1;
	};
	class AAW_SNP_Explosion_Spark: AAW_SWP_Explosion_Spark
	{
		moveVelocity[] = {"outDirX * outSpeed * 10",5,"outDirZ * outSpeed * 10"};
		bounceOnSurface=0.05;
		bounceOnSurfaceVar=0.1;
		positionVar[]={2,2,2};
		particleEffects="AAW_NP_Fire_Ball_Explosion";
		
		weight = 24;
		volume = 8;
	};
	//Burst
	class AAW_Bomb_Burst_Sparks_Effect: AAW_WP_Explosion_Spark
	{
		particleShape = "\A3\data_f\ParticleEffects\Universal\Smoke";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		particleType = "Billboard";
		
		animationSpeed[] = {-2};
		size[]={0.1};
		sizeVar=0.5;
		interval = 0.05;
		rubbing=0.15;
		moveVelocity[]={"(inDirX  / 2) * 1000","(inDirX  / 2)","(inDirX  / 2) * 1000"};
		moveVelocityVar[] = {3,3,3};
		
		position[]={0,0,5};
		positionVar[]={1,1,1};
		
		angleVar = 360;
		
		color[]=
		{
			{0.8,0.6,0.16,-1},
			{0.8,0.6,0.16,0}
		};
		
		colorVar[] = {0.05,0.05,0.05,0};
		
		rotationVelocity = 1;
		lifeTime=5;
		lifeTimeVar=1.5;
		
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		
		weight=3;
		volume=1.5;
		
		emissiveColor[]=
		{
			{10000,6000,1600,0.5}
		};
		particleEffects="AAW_WP_Burst";
	};
	class AAW_Rocket_Burst_Sparks_Effect: AAW_Bomb_Burst_Sparks_Effect
	{
		position[]={0,0,0};
		positionVar[]={0.05,0.05,0.05};
	};
	
	//Napalm
	class ObjectDestructionShards;
	class AAW_NP_Explosion_Spark: ObjectDestructionShards
	{
		particleShape = "\A3\data_f\ParticleEffects\Shard\shard.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		particleType = "SpaceObject";
		
		interval=0.05;
		
		bounceOnSurface=0.2;
		bounceOnSurfaceVar=0.1;
		
		lifeTime=20;
		lifeTimeVar=5;
		size[] = {0.3};
		
		weight = 40;
		volume = 7.9;
		
		rotationVelocity = 3;
		rotationVelocityVar = 2.5;
		
		moveVelocity[]={0,6,0};
		MoveVelocityVar[]={10,8,10};
		
		particleEffects="AAW_NP_Fire_Ball_Explosion";
	};
	class ObjectDestructionFire1;
	class AAW_NPFire_Ball: ObjectDestructionFire1
	{
		interval=0.1;
		
		rubbing=2;
		lifeTime=3;
		
		MoveVelocityVar[]={0,1,0};
		position[]={0,0,0};
		positionVar[]={0,0,0};
		
		size[]={0.5,0.25,0};
	};
	class NPFireBallSmoke: AAW_WPTrailEffect
	{
		interval=0.05;
		
		volume=0.1;
		weight=0.08;
		
		lifeTime=6;
		
		color[]=
		{
			{0.01,0.01,0.01,1},
			{0.01,0.01,0.01,0.8},
			{0.01,0.01,0.01,0.5},
			{0.01,0.01,0.01,0.01},
			{0.01,0.01,0.01,0}
		};
		colorVar[] = {0,0,0,0};
	};
	class AAW_CMTrails: AAW_WPTrails
	{
		rubbing=4;
		lifeTime=2;
		color[]=
		{
			{0.7,0.8,1,0.8},
			{0.7,0.8,1,0.5},
			{0.7,0.8,1,0.1},
			{0.7,0.8,1,0.05},
			{0.7,0.8,1,0.01},
			{0.7,0.8,1,0}
		};
		lifeTimeVar=4;
		weight=1.25;
		volume=2;
		size[]={0.6,1.5,1.5,1.5};
		
		position[] = {0,0,0};
		positionVar[]={0,0,0};
		positionVarConst[]={0,0,0};
		MoveVelocityVar[]={0,0,0};
	};
	
	//Burst Effects
	class AAW_SFW_Burst_Particle: ClusterExplosion
	{
		interval=1;
		moveVelocity[]={0,-1,0};
		size[]={1,3,5};
		color[]={{1,1,1,1},{1,1,1,0.5},{1,1,1,0}};
		lifeTime=3;
		rubbing=1;
		moveVelocityVar[]={0,0,0};
		positionVar[]={0,0,0};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		lifeTimeVar=1.5;
	};
	class AAW_Bomb_Burst_Particle: AAW_Explo_WPSmoke
	{
		interval=1;
		size[] = {5.5};
		sizeVar = 0.3;
		lifeTime=1;
		rubbing=1;
		moveVelocityVar[]={0,0,0};
		positionVar[] = {0.25,0.25,0};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		lifeTimeVar=1.5;
		
		color[]=
		{
			{1,1,1,1},
			{1,1,1,0.8},
			{1,1,1,0.2},
			{1,1,1,0.05},
			{1,1,1,0}
		};
	};
	class AAW_Rocket_Burst_Particle: AAW_Bomb_Burst_Particle
	{
		positionVar[]={0.1,0.1,0.1};
	};
};

/////Lights/////
class CfgLights
{
	class LargeFireLight
	{
		diffuse[]={1,0.45,0.15};
		color[]={1,0.45,0.15};
		ambient[]={1,0.45,0.15};
		brightness=200;
		size=2.3;
		intensity=50000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=1;
			constant=3;
			linear=0;
			quadratic=22;
		};
		position[]={0,1.5,0};
	};
	class AAW_WP_Light
	{
		color[]={1,0.58,0.16};
		ambient[]={1,0.58,0.16};
		diffuse[]={1,0.58,0.16};
		brightness=2;
		intensity=6000;
		position[]={0,0,0};
		useFlare=1;
		drawLight=1;
		dayLight=1;
		flareSize=5;
		flareMaxDistance=6000;
		/*class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=1;
			hardLimitStart=1;
			hardLimitEnd=1500;
		};*/
	};
	class AAW_NP_Light: AAW_WP_Light
	{
		flareSize=0.5;
	};
	class AAW_WP_Explo_Light
	{
		color[]={1,0.58,0.16};
		ambient[]={1,0.58,0.16};
		diffuse[]={1,0.58,0.16};
		brightness=2;
		intensity=5000;
		useFlare=1;
		drawLight=1;
		dayLight=1;
		flareSize=10;
		flareMaxDistance=1000;
		position[]={0,0,0};
	};
	class AAW_WP_Burst_Light: AAW_WP_Light
	{
		flareSize=1;
		flareMaxDistance=500;
		intensity=10000;
		position[]={0,0,0};
	};
	class AAW_WP_Burst_Trail_Light: AAW_WP_Burst_Light
	{
		intensity=8000;
		flareSize=1;
	};
	class AAW_Shell_Burst_Light: AAW_WP_Burst_Trail_Light
	{
		brightness=3;
		flareMaxDistance=2000;
	};
	
	//Flare
	class AAW_CM_Flare
	{
		color[]={0.5,0.5,0.5};
		ambient[]={0.5,0.5,0.5};
		diffuse[]={1,0.5,0.2};
		brightness=12;
		intensity=100000;
		useFlare=1;
		drawLight=1;
		dayLight=1;
		flareSize=20;
		flareMaxDistance=2000;
		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 0.2;
			hardLimitStart = 1000;
			hardLimitEnd = 2000;
		};
	};
};