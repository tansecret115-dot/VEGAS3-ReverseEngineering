/* Module: vegas30.exe
   Function: FUN_00506150
   Address: 00506150
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00506150(void)

{
  if (DAT_0064b4a8 != (HWND)0x0) {
    DestroyWindow(DAT_0064b4a8);
    DAT_0064b4a8 = (HWND)0x0;
  }
  return;
}


