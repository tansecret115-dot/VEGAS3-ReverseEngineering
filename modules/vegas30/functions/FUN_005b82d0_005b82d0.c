/* Module: vegas30.exe
   Function: FUN_005b82d0
   Address: 005b82d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005b82d0(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x1c4) == 0) {
      _mbscpy(&DAT_0064789c,(uchar *)(param_1 + 0xb8));
      return;
    }
    DAT_0064789c = 0;
  }
  return;
}


