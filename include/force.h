#ifndef FORCE_H
#define FORCE_H

// Conversion constants
#define DYNE_TO_NEWTON 1e-5
#define KILOPOND_TO_NEWTON 9.80665
#define STHENE_TO_NEWTON 1e3

// Functions for converting from dyne to other units
float dyne_to_kilopond(float dyne);
float dyne_to_sthene(float dyne);

// Functions for converting from kilopond to other units
float kilopond_to_dyne(float kilopond);
float kilopond_to_sthene(float kilopond);

// Functions for converting from sthène to other units
float sthene_to_dyne(float sthene);
float sthene_to_kilopond(float sthene);

// Functions for converting from newton to other units
float newton_to_dyne(float newton);
float newton_to_kilopond(float newton);
float newton_to_sthene(float newton);

#endif