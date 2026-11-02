/* Module: vegas30.exe
   Function: FUN_00401f40
   Address: 00401f40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00401f40(void)

{
  if (DAT_00647620 != (HWND)0x0) {
    ShowWindow(DAT_00647620,0);
    DestroyWindow(DAT_00647620);
    DAT_00647620 = (HWND)0x0;
    _SfKernel_SetSplash_4(0);
  }
  return;
}


