
#ifndef _GAIA_NETWORK
#define _GAIA_NETWORK

#include <ArduinoJson.h>

void wifiInit();

extern void uploaderInit();

#ifdef CONF_USE_MQTT
extern void mqttInit();
#endif
#ifdef CONF_USE_WEB_SERVER
void webServerInit();
#endif

#endif // _GAIA_NETWORK
