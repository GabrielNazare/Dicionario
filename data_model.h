#ifndef DATA_MODEL_H
#define DATA_MODEL_H

typedef struct {
    char* id;
    char* type;
    char* location;
    double* historical_data;
    int alarm_status;
} Sensor;

typedef struct {
    char* model;
    char* manufacturer;
    char* install_date;
    char* maintenance_history;
} Equipment;

typedef struct {
    char* batch_number;
    char* supplier;
    char* expiry_date;
    char* stock_location;
} Material;

#endif
