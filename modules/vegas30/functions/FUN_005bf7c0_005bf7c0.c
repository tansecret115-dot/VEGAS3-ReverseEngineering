/* Module: vegas30.exe
   Function: FUN_005bf7c0
   Address: 005bf7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005bf7c0(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int *_Memory;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 local_28 [10];
  
  iVar1 = FUN_005be790(param_2,param_5,&param_5);
  if (iVar1 == 1) {
    piVar2 = *(int **)(param_1 + 0x78);
    if (piVar2 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *piVar2;
    }
    if ((param_5 < 0) || (iVar1 + -1 < param_5)) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(piVar2[2] + param_5 * 4);
    }
    if (iVar1 == 0) {
      return;
    }
    piVar2 = *(int **)(iVar1 + 0x60);
    if (piVar2 == (int *)0x0) {
      return;
    }
    if (*piVar2 <= param_3) {
      return;
    }
    if (*piVar2 <= param_4) {
      return;
    }
    puVar7 = (undefined4 *)(piVar2[1] * param_3 + piVar2[2]);
    puVar9 = local_28;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    uVar5 = piVar2[1];
    puVar7 = (undefined4 *)(uVar5 * param_4 + piVar2[2]);
    puVar9 = (undefined4 *)(uVar5 * param_3 + piVar2[2]);
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    iVar1 = *(int *)(iVar1 + 0x60);
    uVar5 = *(uint *)(iVar1 + 4);
  }
  else {
    if (iVar1 == 2) {
      if (param_1 == -0x80) {
        return;
      }
      piVar2 = (int *)FUN_00522a00(param_5);
      if (piVar2 == (int *)0x0) {
        return;
      }
      if (*piVar2 <= param_3) {
        return;
      }
      if (*piVar2 <= param_4) {
        return;
      }
      piVar6 = (int *)(param_3 * piVar2[1] + piVar2[2]);
      uVar5 = *piVar6 + 8;
      _Memory = calloc(1,uVar5);
      if (_Memory == (int *)0x0) {
        return;
      }
      piVar8 = _Memory;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *piVar8 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar8 = piVar8 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)piVar8 = (char)*piVar6;
        piVar6 = (int *)((int)piVar6 + 1);
        piVar8 = (int *)((int)piVar8 + 1);
      }
      uVar5 = piVar2[1];
      puVar7 = (undefined4 *)(uVar5 * param_4 + piVar2[2]);
      puVar9 = (undefined4 *)(uVar5 * param_3 + piVar2[2]);
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      uVar5 = piVar2[1];
      piVar6 = _Memory;
      piVar2 = (int *)(uVar5 * param_4 + piVar2[2]);
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *piVar2 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar2 = piVar2 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)piVar2 = (char)*piVar6;
        piVar6 = (int *)((int)piVar6 + 1);
        piVar2 = (int *)((int)piVar2 + 1);
      }
      free(_Memory);
      return;
    }
    if (iVar1 != 3) {
      return;
    }
    piVar2 = *(int **)(param_1 + 0x7c);
    if (piVar2 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *piVar2;
    }
    if ((param_5 < 0) || (iVar1 + -1 < param_5)) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(piVar2[2] + param_5 * 4);
    }
    if (iVar1 == 0) {
      return;
    }
    piVar2 = *(int **)(iVar1 + 0x60);
    if (piVar2 == (int *)0x0) {
      return;
    }
    if (*piVar2 <= param_3) {
      return;
    }
    if (*piVar2 <= param_4) {
      return;
    }
    puVar7 = (undefined4 *)(piVar2[1] * param_3 + piVar2[2]);
    puVar9 = local_28;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    uVar5 = piVar2[1];
    puVar7 = (undefined4 *)(uVar5 * param_4 + piVar2[2]);
    puVar9 = (undefined4 *)(uVar5 * param_3 + piVar2[2]);
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    iVar1 = *(int *)(iVar1 + 0x60);
    uVar5 = *(uint *)(iVar1 + 4);
  }
  puVar7 = local_28;
  puVar9 = (undefined4 *)(uVar5 * param_4 + *(int *)(iVar1 + 8));
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  return;
}


