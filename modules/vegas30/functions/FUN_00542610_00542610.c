/* Module: vegas30.exe
   Function: FUN_00542610
   Address: 00542610
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00542610(int *param_1)

{
  HWND pHVar1;
  HCURSOR hCursor;
  
  if (param_1[0x44] != 0) {
    param_1[0x44] = 0;
    if (DAT_00647684 == &LAB_00542560) {
      FUN_00404660(0,0);
    }
    pHVar1 = GetCapture();
    if ((HWND)*param_1 == pHVar1) {
      ReleaseCapture();
    }
    param_1[0x45] = 0;
    hCursor = (HCURSOR)_SfGetUICursor_4(0x7f00);
    SetCursor(hCursor);
    DAT_0064767c = DAT_0064767c | 4;
  }
  return;
}


