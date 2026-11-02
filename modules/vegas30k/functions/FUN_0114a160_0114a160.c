/* Module: vegas30k.dll
   Function: FUN_0114a160
   Address: 0114a160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0114a160(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *unaff_EBX;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if (((param_2 == (undefined4 *)0x0) || (param_1 == (undefined4 *)0x0)) || (param_2[7] == 0)) {
    return 0xfffffffe;
  }
  puVar1 = param_1;
  for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar1 = *param_2;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  }
  puVar1 = (undefined4 *)(*(code *)param_1[8])(param_1[10],1,0x16b1);
  if (puVar1 == (undefined4 *)0x0) {
    return 0xfffffffc;
  }
  param_1[7] = puVar1;
  puVar8 = puVar1;
  for (iVar4 = 0x5ac; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *unaff_EBX;
    unaff_EBX = unaff_EBX + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined1 *)puVar8 = *(undefined1 *)unaff_EBX;
  *puVar1 = param_1;
  uVar2 = (*(code *)param_1[8])(param_1[10],*(undefined4 *)((int)puVar1 + 0x22),2);
  *(undefined4 *)((int)puVar1 + 0x2e) = uVar2;
  iVar4 = param_1[10];
  uVar2 = (*(code *)param_1[8])(iVar4,*(undefined4 *)((int)puVar1 + 0x22),2);
  *(undefined4 *)((int)puVar1 + 0x36) = uVar2;
  uVar2 = (*(code *)param_1[8])(param_1[10],*(undefined4 *)((int)puVar1 + 0x42),2);
  *(undefined4 *)((int)puVar1 + 0x3a) = uVar2;
  iVar3 = (*(code *)param_1[8])(param_1[10],*(undefined4 *)((int)puVar1 + 0x168f),4);
  puVar1[2] = iVar3;
  if (((*(undefined4 **)((int)puVar1 + 0x2e) != (undefined4 *)0x0) &&
      (*(int *)((int)puVar1 + 0x36) != 0)) && ((*(int *)((int)puVar1 + 0x3a) != 0 && (iVar3 != 0))))
  {
    uVar7 = *(uint *)((int)puVar1 + 0x22);
    puVar8 = *(undefined4 **)(iVar4 + 0x2e);
    puVar9 = *(undefined4 **)((int)puVar1 + 0x2e);
    for (uVar5 = (uVar7 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (iVar6 = (uVar7 & 1) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    uVar7 = *(uint *)((int)puVar1 + 0x22);
    puVar8 = *(undefined4 **)(iVar4 + 0x36);
    puVar9 = *(undefined4 **)((int)puVar1 + 0x36);
    for (uVar5 = (uVar7 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (iVar6 = (uVar7 & 1) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    uVar7 = *(uint *)((int)puVar1 + 0x42);
    puVar8 = *(undefined4 **)(iVar4 + 0x3a);
    puVar9 = *(undefined4 **)((int)puVar1 + 0x3a);
    for (uVar5 = (uVar7 & 0x7fffffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (iVar6 = (uVar7 & 1) << 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    uVar7 = puVar1[3];
    puVar8 = *(undefined4 **)(iVar4 + 8);
    puVar9 = (undefined4 *)puVar1[2];
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    puVar1[4] = (*(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 8)) + puVar1[2];
    uVar7 = *(uint *)((int)puVar1 + 0x168f);
    *(uint *)((int)puVar1 + 0x1697) = iVar3 + (uVar7 & 0xfffffffe);
    *(uint *)((int)puVar1 + 0x168b) = uVar7 + puVar1[2] + uVar7 * 2;
    *(undefined1 **)((int)puVar1 + 0xb0e) = (undefined1 *)((int)puVar1 + 0x8a);
    *(undefined1 **)((int)puVar1 + 0xb1a) = (undefined1 *)((int)puVar1 + 0x97e);
    *(undefined1 **)((int)puVar1 + 0xb26) = (undefined1 *)((int)puVar1 + 0xa72);
    return 0;
  }
  FUN_0114a0c0(param_1);
  return 0xfffffffc;
}


