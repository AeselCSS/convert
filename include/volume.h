#ifndef VOLUME_H
#define VOLUME_H

// Conversion constants
#define MINIM_TO_LITRE 0.0000616115
#define PECK_TO_LITRE 9.09218
#define FIRKIN_TO_LITRE 40.9148

// Functions for converting from minim to other units
float minim_to_peck(float minim);
float minim_to_firkin(float minim);

// Functions for converting from peck to other units
float peck_to_minim(float peck);
float peck_to_firkin(float peck);

// Functions for converting from firkin to other units
float firkin_to_minim(float firkin);
float firkin_to_peck(float firkin);

// Functions for converting from litre to other units
float litre_to_minim(float litre);
float litre_to_peck(float litre);
float litre_to_firkin(float litre);

#endif