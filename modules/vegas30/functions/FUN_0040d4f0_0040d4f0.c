/* Module: vegas30.exe
   Function: FUN_0040d4f0
   Address: 0040d4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040d4f0(int param_1)

{
  if ((DAT_0064b8b4 == 0) && ((*(byte *)(param_1 + 4) & 4) == 0)) {
    DAT_0064b8b4 = 1;
    UpdateWindow(DAT_00647624);
    FUN_004365a0(DAT_0064b138);
    DAT_0064b8b4 = 0;
  }
  return;
}


