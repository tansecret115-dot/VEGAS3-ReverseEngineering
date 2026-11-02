/* Module: extmondrv.dll
   Function: FUN_00403a20
   Address: 00403a20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00403a20(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (param_2 == (undefined4 *)0x0) {
    FUN_00404600((undefined4 *)(param_1 + 0xc));
    puVar5 = &DAT_0044d608;
    puVar7 = (undefined4 *)(param_1 + 0x54);
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    return 0;
  }
  iVar1 = 4;
  bVar8 = true;
  piVar4 = &DAT_00456cac;
  piVar6 = param_2 + 0xb;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar8 = *piVar4 == *piVar6;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 1;
  } while (bVar8);
  if ((bVar8) && (param_2[0x10] == 0x20)) {
    puVar5 = param_2;
    puVar7 = (undefined4 *)(param_1 + 0xc);
    for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    uVar3 = param_2[0x10];
    puVar5 = (undefined4 *)param_2[0x11];
    puVar7 = (undefined4 *)(param_1 + 0x54);
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    piVar4 = *(int **)(param_1 + 0x48);
    *(undefined4 **)(param_1 + 0x50) = (undefined4 *)(param_1 + 0x54);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 8;
    return 0;
  }
  return 0x80040200;
}


