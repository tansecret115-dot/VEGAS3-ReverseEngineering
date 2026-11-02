/* Module: sftrkfx1.dll
   Function: FUN_5cbef935
   Address: 5cbef935
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbef935(undefined4 param_1,int param_2)

{
  uint uVar1;
  int local_8;
  
  local_8 = 0;
  if (0 < DAT_5cc0f0c0) {
    do {
      if (param_2 == 0) {
        uVar1 = FUN_5cbef880();
      }
      else {
        uVar1 = FUN_5cbef6f4();
      }
    } while ((-1 < (int)uVar1) && (local_8 = local_8 + 1, local_8 < DAT_5cc0f0c0));
  }
  return;
}


