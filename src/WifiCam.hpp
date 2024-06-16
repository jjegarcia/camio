#ifndef WIFICAM_HPP
#define WIFICAM_HPP

#include <esp32cam.h>

#include <WebServer.h>

extern esp32cam::Resolution initialResolution;

extern WebServer server;

void addRequestHandlers();

bool handleClickedOption();

bool hasChangedResolution(esp32cam::Resolution &r, long width, long height);

bool areArgumentsInLocation(esp32cam::Resolution &r, long width, long height, String &format);

void routeFromFormat(String &format);

bool isValidResolution(esp32cam::Resolution &r);

bool areValidArguments(long width, long height, String &format);

void captureImage();

#endif // WIFICAM_HPP
