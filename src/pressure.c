// Conversion constants
const float MMHG_TO_PASCAL = 133.322;
const float INH2O_TO_PASCAL = 249.08891;
const float TORR_TO_PASCAL = 133.322;

// Functions for converting from mmHg to other units
float mmHg_to_inH2O(float mmHg) {
    return mmHg * MMHG_TO_PASCAL / INH2O_TO_PASCAL;
}

float mmHg_to_torr(float mmHg) {
    return mmHg * MMHG_TO_PASCAL / TORR_TO_PASCAL;
}

// Functions for converting from inH2O to other units
float inH2O_to_mmHg(float inH2O) {
    return inH2O * INH2O_TO_PASCAL / MMHG_TO_PASCAL;
}

float inH2O_to_torr(float inH2O) {
    return inH2O * INH2O_TO_PASCAL / TORR_TO_PASCAL;
}

// Functions for converting from torr to other units
float torr_to_mmHg(float torr) {
    return torr * TORR_TO_PASCAL / MMHG_TO_PASCAL;
}

float torr_to_inH2O(float torr) {
    return torr * TORR_TO_PASCAL / INH2O_TO_PASCAL;
}

// Functions for converting from pascal to other units
float pascal_to_mmHg(float pascal) {
    return pascal / MMHG_TO_PASCAL;
}

float pascal_to_inH2O(float pascal) {
    return pascal / INH2O_TO_PASCAL;
}

float pascal_to_torr(float pascal) {
    return pascal / TORR_TO_PASCAL;
}