/* Module: vidcap30.exe
   Function: FUN_0041eeb0
   Address: 0041eeb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041eeb0(int *param_1)

{
  HWND pHVar1;
  HCURSOR hCursor;
  
  if (param_1[0x3f] != 0) {
    param_1[0x3f] = 0;
    if (DAT_005ba514 == &LAB_0041ee10) {
      FUN_00404100(0,0);
    }
    pHVar1 = GetCapture();
    if ((HWND)*param_1 == pHVar1) {
      ReleaseCapture();
    }
    param_1[0x40] = 0;
    hCursor = (HCURSOR)_SfGetUICursor_4(0x7f00);
    SetCursor(hCursor);
  }
  return;
}


