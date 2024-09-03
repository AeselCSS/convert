// Conversion constants
#define DYNE_TO_NEWTON 1e-5
#define KILOPOND_TO_NEWTON 9.80665
#define STHENE_TO_NEWTON 1e3

// Functions for converting from dyne to other units
float dyne_to_kilopond(float dyne) {
    return dyne * DYNE_TO_NEWTON / KILOPOND_TO_NEWTON;
}

float dyne_to_sthene(float dyne) {
    return dyne * DYNE_TO_NEWTON / STHENE_TO_NEWTON;
}

// Functions for converting from kilopond to other units
float kilopond_to_dyne(float kilopond) {
    return kilopond * KILOPOND_TO_NEWTON / DYNE_TO_NEWTON;
}

float kilopond_to_sthene(float kilopond) {
    return kilopond * KILOPOND_TO_NEWTON / STHENE_TO_NEWTON;
}

// Functions for converting from sthène to other units
float sthene_to_dyne(float sthene) {
    return sthene * STHENE_TO_NEWTON / DYNE_TO_NEWTON;
}

float sthene_to_kilopond(float sthene) {
    return sthene * STHENE_TO_NEWTON / KILOPOND_TO_NEWTON;
}

// Functions for converting from newton to other units
float newton_to_dyne(float newton) {
    return newton / DYNE_TO_NEWTON;
}

float newton_to_kilopond(float newton) {
    return newton / KILOPOND_TO_NEWTON;
}

float newton_to_sthene(float newton) {
    return newton / STHENE_TO_NEWTON;
}
