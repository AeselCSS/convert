// Conversion constants
#define MINIM_TO_LITRE 0.0000616115
#define PECK_TO_LITRE 9.09218
#define FIRKIN_TO_LITRE 40.9148

// Functions for converting from minim to other units
float minim_to_peck(float minim) {
    return minim * MINIM_TO_LITRE / PECK_TO_LITRE;
}

float minim_to_firkin(float minim) {
    return minim * MINIM_TO_LITRE / FIRKIN_TO_LITRE;
}

// Functions for converting from peck to other units
float peck_to_minim(float peck) {
    return peck * PECK_TO_LITRE / MINIM_TO_LITRE;
}

float peck_to_firkin(float peck) {
    return peck * PECK_TO_LITRE / FIRKIN_TO_LITRE;
}

// Functions for converting from firkin to other units
float firkin_to_minim(float firkin) {
    return firkin * FIRKIN_TO_LITRE / MINIM_TO_LITRE;
}

float firkin_to_peck(float firkin) {
    return firkin * FIRKIN_TO_LITRE / PECK_TO_LITRE;
}

// Functions for converting from litre to other units
float litre_to_minim(float litre) {
    return litre / MINIM_TO_LITRE;
}

float litre_to_peck(float litre) {
    return litre / PECK_TO_LITRE;
}

float litre_to_firkin(float litre) {
    return litre / FIRKIN_TO_LITRE;
}