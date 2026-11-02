/* Module: vegas30k.dll
   Function: FUN_01075410
   Address: 01075410
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_01075410(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_01072870(param_1,1,0,0x10);
  if (-1 < (int)uVar1) {
    FUN_01074370(param_1);
    uVar1 = FUN_01072870(param_1,2,0,1);
    if ((-1 < (int)uVar1) && (uVar1 = FUN_01072870(param_1,2,0,1), -1 < (int)uVar1)) {
      if (*(int *)(param_1 + 0xc) == 2) {
        uVar1 = FUN_01072870(param_1,3,0,1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        FUN_010744d0(param_1);
      }
      uVar1 = FUN_01072870(param_1,4,0,1);
      uVar1 = uVar1 & (-1 < (int)uVar1) - 1;
    }
  }
  return uVar1;
}


