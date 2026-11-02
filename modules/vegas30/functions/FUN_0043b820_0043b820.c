/* Module: vegas30.exe
   Function: FUN_0043b820
   Address: 0043b820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043b820(void)

{
  if ((DAT_0064b184 != 0) && (*(HWND *)(DAT_0064b184 + 0x80) != (HWND)0x0)) {
    InvalidateRect(*(HWND *)(DAT_0064b184 + 0x80),(RECT *)0x0,1);
  }
  return;
}


