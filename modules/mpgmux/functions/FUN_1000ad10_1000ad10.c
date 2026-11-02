/* Module: mpgmux.dll
   Function: FUN_1000ad10
   Address: 1000ad10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000ad10(int *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar2 = param_1[4];
  uVar3 = param_1[5];
  if (uVar3 < uVar2) {
    if (uVar2 - uVar3 < param_3) {
      param_3 = uVar2 - uVar3;
    }
    iVar1 = param_1[2];
  }
  else {
    uVar4 = param_1[6] - uVar3;
    if ((uint)param_1[3] < uVar2) {
      iVar1 = uVar2 - param_1[3];
    }
    else {
      iVar1 = 0;
    }
    if (iVar1 + uVar4 < param_3) {
      param_3 = iVar1 + uVar4;
    }
    iVar1 = param_1[2];
    if (uVar4 < param_3) {
      puVar5 = param_2;
      puVar6 = (undefined4 *)(iVar1 * uVar3 + *param_1);
      for (uVar2 = iVar1 * uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar2 = iVar1 * uVar4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      iVar1 = param_1[2];
      uVar3 = (param_3 - uVar4) * iVar1;
      puVar5 = (undefined4 *)(iVar1 * uVar4 + (int)param_2);
      puVar6 = (undefined4 *)(param_1[3] * iVar1 + *param_1);
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      param_1[5] = (param_1[3] - uVar4) + param_3;
      return;
    }
  }
  puVar5 = (undefined4 *)(iVar1 * uVar3 + *param_1);
  for (uVar2 = iVar1 * param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar2 = iVar1 * param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  param_1[5] = uVar3 + param_3;
  return;
}


