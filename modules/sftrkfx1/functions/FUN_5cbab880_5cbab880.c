/* Module: sftrkfx1.dll
   Function: FUN_5cbab880
   Address: 5cbab880
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbab880(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_2 == 0) {
    puVar4 = param_1 + 0x21;
    for (iVar3 = 0x1000; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    param_1[0x20] = 0;
  }
  else {
    uVar1 = 0;
    if (param_1[0x20] != 0) {
      piVar2 = param_1 + 0x21;
      do {
        if (*piVar2 == param_2) {
          param_1[uVar1 + 0x21] = 0;
          FUN_5cbab750(param_1);
          return;
        }
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar1 < (uint)param_1[0x20]);
      FUN_5cbab750(param_1);
      return;
    }
  }
  FUN_5cbab750(param_1);
  return;
}


