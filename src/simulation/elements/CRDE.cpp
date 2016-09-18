#include "simulation/Elements.h"
//#TPT-Directive ElementClass Element_CRDE PT_CRDE 183
Element_CRDE::Element_CRDE()
{
	Identifier = "DEFAULT_PT_CRDE";
	Name = "CRDE";
	Colour = PIXPACK(0x262626);
	MenuVisible = 1;
	MenuSection = SC_LIQUID;
	Enabled = 1;

	Advection = 0.6f;
	AirDrag = 0.01f * CFDS;
	AirLoss = 0.98f;
	Loss = 0.95f;
	Collision = 0.0f;
	Gravity = 0.1f;
	Diffusion = 0.00f;
	HotAir = 0.000f  * CFDS;
	Falldown = 2;

	Flammable = 10;
	Explosive = 0;
	Meltable = 0;
	Hardness = 20;

	Weight = 18;

	Temperature = R_TEMP-2.0f  +273.15f;
	HeatConduct = 70;
	Description = "Crude oil. Floats on water, slightly flammable.";

	Properties = TYPE_LIQUID|PROP_NEUTPENETRATE|PROP_NEUTABSORB;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = ITH;
	HighTemperatureTransition = NT;

	Update = NULL;
	Graphics = NULL;
}
