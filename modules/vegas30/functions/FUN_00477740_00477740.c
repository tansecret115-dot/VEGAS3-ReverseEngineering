/* Module: vegas30.exe
   Function: FUN_00477740
   Address: 00477740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00477740(int param_1)

{
  if (((_DAT_0064be7c & 4) != 0) && (DAT_0064be70 != DAT_0064be68)) {
    InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)&DAT_0064be68,0);
  }
  _DAT_0064be78 = 0;
  DAT_0064be68 = 0;
  _DAT_0064be6c = 0;
  DAT_0064be70 = 0;
  _DAT_0064be74 = 0;
  _DAT_0064be7c = _DAT_0064be7c & 0xfffffffb;
  return;
}


