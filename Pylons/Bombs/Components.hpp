class Components
{
	class SensorsManagerComponent
	{
		class Components
		{
			//IR
			class IRSensorComponent: SensorTemplateIR
			{
				class AirTarget
				{
					minRange = 50;
					maxRange = 200;
					objectDistanceLimitCoef = -1;
					viewDistanceLimitCoef = 1;
				};
				class GroundTarget
				{
					minRange = 50;
					maxRange = 200;
					objectDistanceLimitCoef = 1;
					viewDistanceLimitCoef = 1;
				};
				maxTrackableSpeed = 60;
				angleRangeHorizontal = 90;
				angleRangeVertical = 70;
			};
			//Visual
			class VisualSensorComponent: SensorTemplateVisual
			{
				class AirTarget
				{
					minRange = 50;
					maxRange = 200;
					objectDistanceLimitCoef = -1;
					viewDistanceLimitCoef = 1;
				};
				class GroundTarget
				{
					minRange = 50;
					maxRange = 200;
					objectDistanceLimitCoef = 1;
					viewDistanceLimitCoef = 1;
				};
				maxTrackableSpeed = 60;
				nightRangeCoef = 0.8;
				angleRangeHorizontal = 90;
				angleRangeVertical = 70;
				maxTrackableATL = 50;
			};
			//Men
			class MenSensorComponent: SensorTemplateMan
			{
				class AirTarget
				{
					minRange = 50;
					maxRange = 200;
					objectDistanceLimitCoef = -1;
					viewDistanceLimitCoef = 1;
				};
				class GroundTarget
				{
					minRange = 50;
					maxRange = 200;
					objectDistanceLimitCoef = 1;
					viewDistanceLimitCoef = 1;
				};
				maxTrackableSpeed = 60;
				nightRangeCoef = 0.8;
				angleRangeHorizontal = 90;
				angleRangeVertical = 70;
				maxTrackableATL = 50;
			};
		};
	};
};