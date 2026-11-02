/* Module: vegas30.exe
   Function: FUN_005aa930
   Address: 005aa930
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005aa930(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = param_1;
  if (0 < param_1[0x90]) {
    do {
      if (*piVar2 != 0) {
        _SfDibFree_8(*piVar2,0);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < param_1[0x90]);
  }
  for (iVar1 = 0xa0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}


