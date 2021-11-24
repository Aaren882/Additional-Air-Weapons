class mfdElements
{
	class Plane_Fighter_01
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
			class Default
			{
				condition = "PylonAmmoRelative>0";
				color[] = {0,0.12,0};
				alpha = 0.22;
				class Shape
				{
					type = "line";
					width = 4.0;
					points[] = {{"Center",{0,-0.0147436},1},{"Center",{0.0075,-0.0127679},1},{"Center",{0.01299,-0.00737179},1},{"Center",{0.015,0},1},{"Center",{0.01299,0.00737179},1},{"Center",{0.0075,0.0127679},1},{"Center",{0,0.0147436},1},{"Center",{-0.0075,0.0127679},1},{"Center",{-0.01299,0.00737179},1},{"Center",{-0.015,0},1},{"Center",{-0.01299,-0.00737179},1},{"Center",{-0.0075,-0.0127679},1},{"Center",{0,-0.0147436},1},{},{"Center",{0.0106066,-0.0104253},1},{"Center",{0.0212132,-0.0208506},1},{},{"Center",{0.0106066,0.0104253},1},{"Center",{0.0212132,0.0208506},1},{},{"Center",{-0.0106066,0.0104253},1},{"Center",{-0.0212132,0.0208506},1},{},{"Center",{-0.0106066,-0.0104253},1},{"Center",{-0.0212132,-0.0208506},1},{}};
				};
				class PylonText1
				{
					type = "text";
					source = "static";
					text = "AGR";
					scale = 1;
					sourceScale = 1;
					align = "center";
					pos[] = {"Center",1,{-0.005,0.02},1};
					right[] = {"Center",1,{0.045,0.02},1};
					down[] = {"Center",1,{-0.005,0.065},1};
				};
			};
			class Selected: Default
			{
				condition = "(PylonSelected +  PylonAmmoRelative)/2";
				alpha = 1;
				class Shape: Shape{};
				class PylonText1: PylonText1{};
				class Background
				{
					type = "polygon";
					points[] = {{{"Center",1,{0,0},1},{"Center",{0.0106066,-0.0104253},1},{"Center",{0.015,6.44463e-10},1},{"Center",{0.0106066,0.0104253},1}},{{"Center",1,{0,0},1},{"Center",{0.0106066,0.0104253},1},{"Center",{-1.31134e-09,0.0147436},1},{"Center",{-0.0106066,0.0104253},1}},{{"Center",1,{0,0},1},{"Center",{-0.0106066,0.0104253},1},{"Center",{-0.015,-1.75816e-10},1},{"Center",{-0.0106066,-0.0104253},1}},{{"Center",1,{0,0},1},{"Center",{-0.0106066,-0.0104253},1},{"Center",{2.62268e-09,-0.0147436},1},{"Center",{0.0106066,-0.0104253},1}}};
				};
			};
			class Empty: Selected
			{
				condition = "PylonAmmoRelative <= 0";
				color[] = {1.0,0.0,0.0,1.0};
				class Shape: Shape{};
				class PylonText1: PylonText1{};
				class Background: Background{};
			};
		};
	};
	class Plane_Fighter_04
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
			class Default
			{
				condition = "PylonAmmoRelative>0";
				color[] = {0,0.12,0};
				alpha = 0.22;
				class Shape
				{
					type = "line";
					width = 4.0;
					points[] = {{"Center",{0,-0.0147436},1},{"Center",{0.0075,-0.0127679},1},{"Center",{0.01299,-0.00737179},1},{"Center",{0.015,0},1},{"Center",{0.01299,0.00737179},1},{"Center",{0.0075,0.0127679},1},{"Center",{0,0.0147436},1},{"Center",{-0.0075,0.0127679},1},{"Center",{-0.01299,0.00737179},1},{"Center",{-0.015,0},1},{"Center",{-0.01299,-0.00737179},1},{"Center",{-0.0075,-0.0127679},1},{"Center",{0,-0.0147436},1},{},{"Center",{0.0106066,-0.0104253},1},{"Center",{0.0212132,-0.0208506},1},{},{"Center",{0.0106066,0.0104253},1},{"Center",{0.0212132,0.0208506},1},{},{"Center",{-0.0106066,0.0104253},1},{"Center",{-0.0212132,0.0208506},1},{},{"Center",{-0.0106066,-0.0104253},1},{"Center",{-0.0212132,-0.0208506},1},{}};
				};
				class PylonText1
				{
					type = "text";
					source = "static";
					text = "AGR";
					scale = 1;
					sourceScale = 1;
					align = "center";
					pos[] = {"Center",1,{-0.005,0.02},1};
					right[] = {"Center",1,{0.045,0.02},1};
					down[] = {"Center",1,{-0.005,0.065},1};
				};
			};
			class Selected: Default
			{
				condition = "(PylonSelected +  PylonAmmoRelative)/2";
				alpha = 1;
				class Shape: Shape{};
				class PylonText1: PylonText1{};
				class Background
				{
					type = "polygon";
					points[] = {{{"Center",1,{0,0},1},{"Center",{0.0106066,-0.0104253},1},{"Center",{0.015,6.44463e-10},1},{"Center",{0.0106066,0.0104253},1}},{{"Center",1,{0,0},1},{"Center",{0.0106066,0.0104253},1},{"Center",{-1.31134e-09,0.0147436},1},{"Center",{-0.0106066,0.0104253},1}},{{"Center",1,{0,0},1},{"Center",{-0.0106066,0.0104253},1},{"Center",{-0.015,-1.75816e-10},1},{"Center",{-0.0106066,-0.0104253},1}},{{"Center",1,{0,0},1},{"Center",{-0.0106066,-0.0104253},1},{"Center",{2.62268e-09,-0.0147436},1},{"Center",{0.0106066,-0.0104253},1}}};
				};
			};
			class Empty: Selected
			{
				condition = "PylonAmmoRelative <= 0";
				color[] = {1.0,0.0,0.0,1.0};
				class Shape: Shape{};
				class PylonText1: PylonText1{};
				class Background: Background{};
			};
		};
	};
};