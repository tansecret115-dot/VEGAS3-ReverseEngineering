/* Module: vidcap30.exe
   Function: FUN_00410ef0
   Address: 00410ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00410ef0(LPCSTR param_1)

{
  if (DAT_005bbfe0 == 0) {
    lstrcpynA(&DAT_005bbe8c,param_1,0x154);
    DAT_005bbfdf = 0;
    if (DAT_005bbe30 != (HWND)0x0) {
      InvalidateRect(DAT_005bbe30,(RECT *)&DAT_005bbe6c,0);
    }
  }
  return;
}


