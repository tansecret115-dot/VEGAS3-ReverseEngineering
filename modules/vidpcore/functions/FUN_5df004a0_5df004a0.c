/* Module: vidpcore.dll
   Function: FUN_5df004a0
   Address: 5df004a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5df004a0(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  if (param_2 == 0x1000) {
    FUN_5df03f70(param_1);
    return;
  }
  if (param_2 == 0x800) {
    FUN_5df03f00(param_1);
    return;
  }
  if (param_2 == 0x400) {
    FUN_5df03e90(param_1);
    return;
  }
  if (param_2 == 0x200) {
    FUN_5df03e20(param_1);
    return;
  }
  uVar4 = 0;
  uVar6 = 0;
  puVar5 = param_1;
  if ((param_2 & 0x7fffffff) != 0) {
    do {
      uVar3 = param_2;
      if (uVar6 < uVar4) {
        uVar1 = param_1[uVar4 * 2];
        uVar2 = param_1[uVar4 * 2 + 1];
        param_1[uVar4 * 2] = *puVar5;
        param_1[uVar4 * 2 + 1] = puVar5[1];
        *puVar5 = uVar1;
        puVar5[1] = uVar2;
        uVar1 = param_1[uVar4 * 2 + 2];
        uVar2 = param_1[uVar4 * 2 + 3];
        param_1[uVar4 * 2 + 2] = puVar5[2];
        param_1[uVar4 * 2 + 3] = puVar5[3];
        puVar5[2] = uVar1;
        puVar5[3] = uVar2;
      }
      for (; (1 < uVar3 && (uVar3 <= uVar4)); uVar3 = uVar3 >> 1) {
        uVar4 = uVar4 - uVar3;
      }
      uVar4 = uVar4 + uVar3;
      uVar6 = uVar6 + 2;
      puVar5 = puVar5 + 4;
    } while (uVar6 < param_2 * 2);
  }
  return;
}


