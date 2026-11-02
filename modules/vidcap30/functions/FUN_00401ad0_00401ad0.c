/* Module: vidcap30.exe
   Function: FUN_00401ad0
   Address: 00401ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00401ad0(void)

{
  if (DAT_005ba4b8 != (HWND)0x0) {
    ShowWindow(DAT_005ba4b8,0);
    DestroyWindow(DAT_005ba4b8);
    DAT_005ba4b8 = (HWND)0x0;
  }
  return;
}


