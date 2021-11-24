//Settings
class CfgSound3DProcessors
{
	class AWS_Explosion_3DProcessor
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
	class AWS_Explosion_distance_filter
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
	class AWS_SFW_Explosion_SoundSet
	{
		soundShaders[]=
		{
			"AWS_SFW_Explosion_Near_SoundShader",
			"AWS_SFW_Explosion_Mid_SoundShader",
			"AWS_SFW_Explosion_Far_SoundShader"
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
		sound3DProcessingType="AWS_Explosion_3DProcessor";
		distanceFilter="AWS_Explosion_distance_filter";
	};
	class AWS_Shell_Explosion_SoundSet: AWS_SFW_Explosion_SoundSet
	{
		soundShaders[]=
		{
			"AWS_Shell_Explosion_Near_SoundShader",
			"AWS_Shell_Explosion_Mid_SoundShader",
			"AWS_Shell_Explosion_Far_SoundShader"
		};
	};
};
class CfgSoundShaders
{
	class AWS_SFW_Explosion_Near_SoundShader
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
			{199,0.8},
			{200,0}
		};
	};
	class AWS_SFW_Explosion_Mid_SoundShader
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
			{200,0},
			{501,1},
			{999,0.8},
			{1000,0}
		};
	};
	class AWS_SFW_Explosion_Far_SoundShader
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
	class AWS_Shell_Explosion_Near_SoundShader
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
		volume=10;
		range=200;
		rangeCurve[]=
		{
			{0,1},
			{199,0.8},
			{200,0}
		};
	};
	class AWS_Shell_Explosion_Mid_SoundShader
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
		volume=10;
		range=1000;
		rangeCurve[]=
		{
			{0,0},
			{200,0},
			{501,1},
			{999,0.8},
			{1000,0}
		};
	};
	class AWS_Shell_Explosion_Far_SoundShader
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
		volume=10;
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