//Settings
class CfgSound3DProcessors
{
	class AAW_Explosion_3DProcessor
	{
		type="panner";
		innerRange=500;
		range=2000;
		rangeCurve="LinearCurve";
		radius=6;
	};
};
class cfgDistanceFilters
{
	class AAW_Explosion_distance_filter
	{
		type="lowpassfilter";
		mincutofffrequency=30;
		qfactor=1;
		innerrange=500;
		range=2000;
		powerfactor=30;
	};
};
//Sounds
class CfgSoundSets
{
	class AAW_SFW_Explosion_SoundSet
	{
		soundShaders[]=
		{
			"AAW_SFW_Explosion_Near_SoundShader",
			"AAW_SFW_Explosion_Mid_SoundShader",
			"AAW_SFW_Explosion_Far_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="InverseSquare2Curve";
		spatial=1;
		doppler=0;
		loop=0;
		obstructionFactor=0.3;
		occlusionFactor=0.5;
		frequencyRandomizer=0.6;
		frequencyRandomizerMin=0.3;
		sound3DProcessingType="AAW_Explosion_3DProcessor";
		distanceFilter="AAW_Explosion_distance_filter";
	};
	class AAW_Shell_Explosion_SoundSet: AAW_SFW_Explosion_SoundSet
	{
		soundShaders[]=
		{
			"AAW_Shell_Explosion_Near_SoundShader",
			"AAW_Shell_Explosion_Mid_SoundShader",
			"AAW_Shell_Explosion_Far_SoundShader"
		};
	};
};
class CfgSoundShaders
{
	class AAW_SFW_Explosion_Near_SoundShader
	{
		samples[]=
		{
			
			{
				"MG8\AdtionRks\Sounds\Burst1_near",
				1
			},
			{
				"MG8\AdtionRks\Sounds\Burst2_near",
				1
			}
		};
		volume=5;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{499,0.8},
			{500,0}
		};
	};
	class AAW_SFW_Explosion_Mid_SoundShader
	{
		samples[]=
		{
			
			{
				"MG8\AdtionRks\Sounds\Burst1_near",
				1
			},
			{
				"MG8\AdtionRks\Sounds\Burst2_near",
				1
			}
		};
		volume=5;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{500,0},
			{501,1},
			{999,0.8},
			{1000,0}
		};
	};
	class AAW_SFW_Explosion_Far_SoundShader
	{
		samples[]=
		{
			
			{
				"MG8\AdtionRks\Sounds\Burst1_far",
				1
			},
			{
				"MG8\AdtionRks\Sounds\Burst2_far",
				1
			}
		};
		volume=5;
		range=1500;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1001,1},
			{1400,0.8},
			{1500,0}
		};
	};
	//Shell
	class AAW_Shell_Explosion_Near_SoundShader
	{
		samples[]=
		{
			
			{
				"MG8\AdtionRks\Sounds\Shell_Burst1_near",
				1
			},
			{
				"MG8\AdtionRks\Sounds\Shell_Burst2_near",
				1
			}
		};
		volume=5;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{499,0.8},
			{500,0}
		};
	};
	class AAW_Shell_Explosion_Mid_SoundShader
	{
		samples[]=
		{
			
			{
				"MG8\AdtionRks\Sounds\Shell_Burst1_mid",
				1
			},
			{
				"MG8\AdtionRks\Sounds\Shell_Burst2_mid",
				1
			}
		};
		volume=5;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{500,0},
			{501,1},
			{999,0.8},
			{1000,0}
		};
	};
	class AAW_Shell_Explosion_Far_SoundShader
	{
		samples[]=
		{
			
			{
				"MG8\AdtionRks\Sounds\Shell_Burst1_far",
				1
			},
			{
				"MG8\AdtionRks\Sounds\Shell_Burst2_far",
				1
			}
		};
		volume=5;
		range=1500;
		rangeCurve[]=
		{
			{0,0},
			{1000,0},
			{1001,1},
			{1400,0.8},
			{1500,0}
		};
	};
};