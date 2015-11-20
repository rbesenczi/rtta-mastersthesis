typedef struct GPGAA_ {
    unsigned char hour, min, sec;
    enum NS lns;
    double latitude;
    enum EW lew;
    double longitude;
    unsigned char gps_fix, sat_num;
} GPGAA;