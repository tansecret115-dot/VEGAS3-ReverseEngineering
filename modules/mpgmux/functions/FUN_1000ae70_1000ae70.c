/* Module: mpgmux.dll
   Function: FUN_1000ae70
   Address: 1000ae70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000ae70(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar1 = param_1[5];
  iVar2 = param_1[7];
  if (iVar2 == iVar1) {
    param_1[5] = iVar1 + param_2;
    return;
  }
  iVar3 = param_1[2];
  if ((uint)(param_2 + iVar2) < (uint)param_1[3]) {
    puVar6 = (undefined4 *)(iVar3 * iVar2 + *param_1);
    puVar7 = (undefined4 *)(iVar3 * iVar1 + *param_1);
    for (uVar4 = (uint)(iVar3 * param_2) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = iVar3 * param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    param_1[5] = iVar1 + param_2;
    return;
  }
  uVar5 = (param_1[3] - iVar2) * iVar3;
  puVar6 = (undefined4 *)(iVar3 * iVar2 + *param_1);
  puVar7 = (undefined4 *)(iVar3 * iVar1 + *param_1);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  param_1[5] = param_1[7] + param_2;
  return;
}


