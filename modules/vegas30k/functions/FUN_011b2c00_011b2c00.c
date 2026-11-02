/* Module: vegas30k.dll
   Function: FUN_011b2c00
   Address: 011b2c00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011b2c00(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int local_4;
  
  piVar1 = *(int **)(param_1 + 0x1a0);
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    iVar2 = 0;
    if (0 < *piVar1) {
      do {
        local_4 = iVar2 * piVar1[1] + piVar1[2];
        if (*(int *)(local_4 + 0x14) == 0) {
          if (local_4 != 0) {
            return local_4;
          }
          break;
        }
        iVar2 = iVar2 + 1;
        local_4 = 0;
      } while (iVar2 < *piVar1);
    }
  }
  if (param_2 != 0) {
    FUN_011b3a80(&local_4);
  }
  return local_4;
}


