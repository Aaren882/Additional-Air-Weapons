class mfdElements
{
	class Plane_CAS_02
	{
		class Bones
		{
			class Center
			{
				type = "fixed";
				pos[] = {0.0,0.0};
			};
		};
		class Draw
		{
			class BlackBackgroundGroup
			{
				color[] = {0.0,0.0,0.0};
				alpha = 1;
				class BlackBackground
				{
					type = "polygon";
					points[] = {{{{0.1,0.11},1},{{0.17,0.11},1},{{0.17,0.33},1},{{0.1,0.33},1}}};
				};
			};
			class Default
			{
				condition = "(PylonAmmoRelative>0.01) - PylonSelected";
				color[] = {1,1,1};
				alpha = 0.2;
				class Shape
				{
					type = "polygon";
					texture = "a3\Weapons_F\MFD\UI\icon_place_cas_02_rocket_01_ca.paa";
					points[] = {{{{0.1,0.1},1},{{0.18,0.1},1},{{0.18,0.34},1},{{0.1,0.34},1}}};
				};
				class PylonText1
				{
					type = "text";
					source = "pylonammo";
					scale = 1;
					sourceScale = 1;
					align = "center";
					pos[] = {{0.14,0.27},1};
					right[] = {{0.18,0.27},1};
					down[] = {{0.14,0.301},1};
				};
			};
			class Selected: Default
			{
				color[] = {0,0.12,0};
				condition = "(PylonSelected +  PylonAmmoRelative)/2";
				alpha = 1;
				class Shape: Shape{};
				class PylonText1: PylonText1{};
			};
			class Empty: Selected
			{
				condition = "PylonAmmoRelative <= 0";
				color[] = {1.0,0.0,0.0,1.0};
				class Shape: Shape{};
				class PylonText1: PylonText1{};
			};
		};
	};
	class VTOL_02
	{
		class Bones
		{
			class Center
			{
				type = "fixed";
				pos[] = {0.0,0.0};
			};
			class R1: Center
			{
				pos[] = {0.0,0.0125};
			};
		};
		class Draw
		{
			class Default
			{
				condition = "PylonAmmoRelative>0";
				color[] = {0.15,1.0,0.15,1.0};
				alpha = 0.22;
				class Shape
				{
					type = "line";
					width = 2.0;
					points[] = {{"R1",{-0.013,-0.025},1},{"R1",{0.013,-0.025},1},{"R1",{0.024,-0.0},1},{"R1",{0.013,0.025},1},{"R1",{-0.013,0.025},1},{"R1",{-0.024,-0.0},1},{"R1",{-0.013,-0.025},1}};
				};
				class PylonText1
				{
					type = "text";
					source = "static";
					text = "RKT";
					scale = 1;
					sourceScale = 1;
					align = "center";
					pos[] = {"Center",1,{0.0,-0.051},1};
					right[] = {"Center",1,{0.018,-0.051},1};
					down[] = {"Center",1,{0.0,-0.03},1};
				};
				class PylonAmmo1
				{
					type = "text";
					source = "pylonammo";
					scale = 1;
					sourceScale = 1;
					align = "center";
					pos[] = {{0.0,0},1};
					right[] = {{0.027,0},1};
					down[] = {{0.0,0.028},1};
				};
			};
			class Selected: Default
			{
				condition = "(PylonSelected +  PylonAmmoRelative)/2";
				alpha = 1;
				class Shape: Shape{};
				class PylonText1: PylonText1{};
			};
			class Empty: Selected
			{
				condition = "PylonAmmoRelative <= 0";
				color[] = {1.0,0.0,0.0,1.0};
				class Shape: Shape{};
				class PylonText1: PylonText1{};
				class PylonAmmo1: PylonAmmo1{};
				class Background
				{
					type = "polygon";
					points[] = {{{"R1",1,{0,0},1},{"R1",{0.0169706,-0.0212132},1},{"R1",{0.024,1.31134e-09},1},{"R1",{0.0169706,0.0212132},1}},{{"R1",1,{0,0},1},{"R1",{0.0169706,0.0212132},1},{"R1",{-2.09815e-09,0.03},1},{"R1",{-0.0169706,0.0212132},1}},{{"R1",1,{0,0},1},{"R1",{-0.0169706,0.0212132},1},{"R1",{-0.024,-3.57746e-10},1},{"R1",{-0.0169706,-0.0212132},1}},{{"R1",1,{0,0},1},{"R1",{-0.0169706,-0.0212132},1},{"R1",{4.19629e-09,-0.03},1},{"R1",{0.0169706,-0.0212132},1}}};
				};
			};
		};
	};
	class Plane_Fighter_02
	{
		class Bones{};
		class Draw
		{
			class BackgroundGroup
			{
				color[] = {0.0,0.0,0.0};
				class Background
				{
					type = "polygon";
					points[] = {{{{0.135,-0.025},1},{{0.165,-0.025},1},{{0.165,0.175},1},{{0.135,0.175},1}}};
				};
			};
			class Default
			{
				condition = "PylonAmmoRelative>0+PylonSelected";
				color[] = {0.94,0.83,0};
				alpha = 0.22;
				class Shape
				{
					type = "line";
					width = 4.0;
					points[] = {{{0.160769,0.106213},1},{{0.156154,0.0863314},1},{{0.156154,0.0243195},1},{{0.159231,0.0243195},1},{{0.159231,0.0191124},1},{{0.156538,0.0153254},1},{{0.153462,-0.00976331},1},{{0.152308,-0.0121302},1},{{0.150769,-0.0135503},1},{{0.148846,-0.014497},1},{{0.146923,-0.0135503},1},{{0.145,-0.0121302},1},{{0.144231,-0.00976331},1},{{0.141154,0.0153254},1},{{0.138462,0.0191124},1},{{0.138462,0.0243195},1},{{0.141538,0.0243195},1},{{0.141538,0.0863314},1},{{0.136923,0.106213},1},{{0.136923,0.119941},1},{{0.143462,0.118047},1},{{0.143462,0.144556},1},{{0.143462,0.14787},1},{{0.144231,0.149763},1},{{0.145769,0.151657},1},{{0.147308,0.152604},1},{{0.148846,0.15355},1},{{0.148846,0.15355},1},{{0.150385,0.152604},1},{{0.151923,0.151657},1},{{0.153077,0.149763},1},{{0.154231,0.14787},1},{{0.154231,0.144556},1},{{0.154231,0.118047},1},{{0.160769,0.119941},1},{{0.160769,0.106213},1}};
				};
				class PylonText1
				{
					type = "text";
					source = "static";
					text = "AG";
					scale = 1;
					sourceScale = 1;
					align = "center";
					pos[] = {{"0.00+0.148",0.03},1};
					right[] = {{0.168,0.03},1};
					down[] = {{"0.00+0.148",0.055},1};
				};
				class PylonText2
				{
					type = "text";
					source = "static";
					text = "R";
					scale = 1;
					sourceScale = 1;
					align = "center";
					pos[] = {{"0.00+0.148",0.05},1};
					right[] = {{0.168,0.05},1};
					down[] = {{"0.00+0.148",0.075},1};
				};
			};
			class Selected: Default
			{
				condition = "(PylonSelected +  PylonAmmoRelative)/2";
				alpha = 1;
				color[] = {0,0.12,0};
				class Shape: Shape{};
				class PylonText1: PylonText1{};
				class PylonText2: PylonText2{};
			};
			class Empty: Selected
			{
				condition = "PylonAmmoRelative <= 0";
				color[] = {1.0,0.0,0.0,1.0};
				class Shape: Shape{};
				class PylonText1: PylonText1{};
				class PylonText2: PylonText2{};
			};
		};
	};
};