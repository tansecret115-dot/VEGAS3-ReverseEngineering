/* Module: vegas30.exe
   Function: FUN_004e8390
   Address: 004e8390
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e8390(LPCSTR param_1)

{
  if (DAT_0064cfd8 == 0) {
    lstrcpynA(&DAT_0064ce84,param_1,0x154);
    DAT_0064cfd7 = 0;
    if (DAT_0064ce28 != (HWND)0x0) {
      InvalidateRect(DAT_0064ce28,(RECT *)&DAT_0064ce64,0);
    }
  }
  return;
}


