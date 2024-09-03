#ifndef PRESSURE_H
#define PRESSURE_H

// Conversion constants
#define MMHG_TO_PASCAL 133.322
#define INH2O_TO_PASCAL 249.08891
#define TORR_TO_PASCAL 133.322

// Functions for converting from mmHg to other units
float mmHg_to_inH2O(float mmHg);
float mmHg_to_torr(float mmHg);

// Functions for converting from inH2O to other units
float inH2O_to_mmHg(float inH2O);
float inH2O_to_torr(float inH2O);

// Functions for converting from torr to other units
float torr_to_mmHg(float torr);
float torr_to_inH2O(float torr);

// Functions for converting from pascal to other units
float pascal_to_mmHg(float pascal);
float pascal_to_inH2O(float pascal);
float pascal_to_torr(float pascal);

#endif