/* Module: vegas30.exe
   Function: FUN_00468f30
   Address: 00468f30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00468f30(void)

{
  if (DAT_0064be64 != (HWND)0x0) {
    DestroyWindow(DAT_0064be64);
    DAT_0064be64 = (HWND)0x0;
  }
  return;
}


