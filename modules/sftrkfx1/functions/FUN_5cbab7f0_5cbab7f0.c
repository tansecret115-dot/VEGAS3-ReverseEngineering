/* Module: sftrkfx1.dll
   Function: FUN_5cbab7f0
   Address: 5cbab7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbab7f0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  uVar1 = 0;
  if (param_1[0x20] != 0) {
    piVar4 = param_1 + 0x21;
    do {
      if (*piVar4 == param_2) break;
      uVar1 = uVar1 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar1 < (uint)param_1[0x20]);
    if (0x1000 < uVar1) {
      return;
    }
  }
  param_1[uVar1 + 0x21] = param_2;
  uVar2 = uVar1 + 1;
  if (uVar1 + 1 < (uint)param_1[0x20]) {
    uVar2 = param_1[0x20];
  }
  param_1[0x20] = uVar2;
  uVar1 = 0;
  if (*(int *)(param_2 + 0x28) != 0) {
    puVar3 = (undefined4 *)(param_2 + 0x4c);
    do {
      puVar3[-1] = 0;
      *puVar3 = 0;
      uVar1 = uVar1 + 1;
      puVar3 = puVar3 + 8;
    } while (uVar1 < *(uint *)(param_2 + 0x28));
  }
  *(undefined4 *)(param_2 + 0xf0) = 0xffff;
  FUN_5cbab750(param_1);
  return;
}


