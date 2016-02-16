#include <iostream>
#include <string>

#include "..\GTA\RenderWare.h"
#include "..\GTA\game.h"
#include "..\GTA\CDraw.h"
#include "..\GTA\CCamera.h"
#include "..\GTA\CRGBA.h"
#include "..\GTA\CRect.h"

HWND hWnd;
int ResX, ResY;

RsGlobalType* RsGlobal;
float fCustomAspectRatioHor, fCustomAspectRatioVer;
float fEmergencyVehiclesFix;
float fvcLogoScale;
float fScreenAspectRatioAcd = SCREEN_AR_ACADEMY;
float fInvScreenAspectRatioAcd = 1.0f / SCREEN_AR_ACADEMY;
float fScreenFieldOfViewHStd = SCREEN_FOV_HORIZONTAL;
float fScreenFieldOfViewVStd = SCREEN_FOV_VERTICAL;

float fWideScreenWidthRatio, fWideScreenHeightRatio;
float fWideScreenWidthPerc, fWideScreenHeightPerc;
float fWideScreenWidthDiff, fWideScreenHeightDiff;
float fWideScreenWidthMult, fWideScreenHeightMult;
float fWideScreenWidthScaleUp, fWideScreenHeightScaleUp;
float fWideScreenWidthScaleMid, fWideScreenHeightScaleMid;
float fWideScreenWidthScaleDown, fWideScreenHeightScaleDown;
float fWideScreenWidthScaled, fWideScreenHeightScaled;
float fWideScreenWidthScaledInv, fWideScreenHeightScaledInv;
float fDynamicScreenFieldOfViewScale;

float fHudWidthScale, fHudHeightScale;
float fCustomWideScreenWidthScaleDown;
float fCustomWideScreenHeightScaleDown;
float fRadarWidthScale, fCustomRadarWidthScale, fCustomRadarRingWidthScale, fCustomRadarRingHeightScale, fSubtitlesScale;
float fCrosshairHeightScaleDown;
int SelectedMultisamplingLevels;
bool bRestoreCutsceneFOV;
float fPlayerMarkerPos;
float fCarSpeedDependantFOV;
bool bDontTouchFOV;
int NoLoadingBarFix;
float fRadarScaling;
char *szForceAspectRatio;
char *szFOVControl;
uint32_t* FOVControl;
float fFOVControlValue;
int AspectRatioWidth, AspectRatioHeight, ReplaceTextShadowWithOutline;
bool bSmallerTextShadows;
bool bSmartCutsceneBorders;
bool bHideAABug;
float gtaLogo128Coord1, gtaLogo128Coord2;
bool bIVRadarScaling;
int SmallerTextShadows;
float fTextShadowsSize;
float fCrosshairPosFactor;

float fCustomRadarWidthIV = 102.0f;
float fCustomRadarHeightIV = 79.0f;
float fCustomRadarPosXIV = 109.0f;
float fCustomRadarPosYIV = 107.0f;
float fCustomRadarRingWidthIV = 101.0f;
float fCustomRadarRingHeightIV = 83.0f;
float fCustomRadarRingPosXIV = 98.0f;
float fCustomRadarRingPosYIV = 109.5f;
float fCustomRadarRingPosXIV2 = fCustomRadarRingPosXIV - 19.0f;
void IVRadar();

uint32_t* BordersVar1;
uint32_t* BordersVar2;
bool* bWideScreen;
bool* bIsInCutscene;
int(__cdecl* CSprite2dDrawRect)(class CRect const &, class CRGBA const &);
int(__cdecl* FindPlayerVehicle)();
int(__cdecl* FindPlayerVehicleSA)(int, char);
void(__thiscall *funcCCameraAvoidTheGeometry)(void* _this, RwV3d const&, RwV3d const&, RwV3d&, float);
