#ifndef WIFICAM_HPP
#define WIFICAM_HPP

#include <esp32cam.h>

#include <WebServer.h>

extern esp32cam::Resolution initialResolution;

extern WebServer server;

void addRequestHandlers();

bool handleClickedOption();

bool checkValidArguments(long width, long height, String &format);

// static void
// serveStill(bool wantBmp);

void captureImage();

#endif // WIFICAM_HPP
