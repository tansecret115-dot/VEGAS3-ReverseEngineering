/* Module: encn3260.dll
   Function: FUN_66497ef0
   Address: 66497ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66497ef0(uint param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  bool bVar5;
  bool bVar6;
  uint local_10;
  int *local_8;
  
  bVar6 = true;
  local_10 = 0;
  bVar5 = false;
  local_8 = (int *)0x0;
  if ((*(byte *)(param_1 + 0x20) & 8) != 0) {
    return 0x80040009;
  }
  *(undefined2 *)(param_1 + 0x46) = param_3;
  iVar1 = FUN_664c6f60(param_1);
  if (iVar1 == 0) {
    return 0x80004005;
  }
  FUN_664973c0(*(int *)(param_1 + 100));
  FUN_664c4d20();
  piVar2 = FUN_664c4bd0(1);
  *(int **)(param_1 + 0x14) = piVar2;
  if (piVar2 == (int *)0x0) {
    return 0x8007000e;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    (**(code **)(*piVar2 + 0x68))(*(int *)(param_1 + 0x6c));
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x6c))(*(int *)(param_1 + 0x70));
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x2c))();
  puVar3 = operator_new(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &PTR_FUN_664de928;
  }
  *(undefined4 **)(param_1 + 0x42) = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  puVar3[1] = param_1;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x48))(*(undefined4 *)(param_1 + 0x42));
  piVar2 = *(int **)(param_1 + 0x68);
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 8;
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)(*piVar2 + 0xc))(piVar2,s_MaxBandwidth_664e300c,&local_8);
  if (iVar1 == 0) {
    if (local_8 != (int *)0x0) {
      pcVar4 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
      local_10 = atoi(pcVar4);
      goto LAB_6649801d;
    }
  }
  else {
LAB_6649801d:
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
      local_8 = (int *)0x0;
    }
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x68) + 0xc))
                    (*(int **)(param_1 + 0x68),s_LoadTest_664e22e4,&local_8);
  if (iVar1 == 0) {
    if (local_8 != (int *)0x0) {
      pcVar4 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
      iVar1 = atoi(pcVar4);
      bVar5 = iVar1 == 1;
      goto LAB_66498063;
    }
  }
  else {
LAB_66498063:
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
      local_8 = (int *)0x0;
    }
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x68) + 0xc))
                    (*(int **)(param_1 + 0x68),s_EnforceMaxBandwidth_664e2ff8,&local_8);
  if (iVar1 == 0) {
    if (local_8 == (int *)0x0) goto LAB_664980b2;
    pcVar4 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
    iVar1 = atoi(pcVar4);
    bVar6 = iVar1 == 1;
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
LAB_664980b2:
  if ((!bVar6) || (bVar5)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (local_10 == 0) {
    if (bVar6) {
      return 0;
    }
  }
  else if (bVar6) {
    DAT_664ef9c8 = local_10 >> 3;
    return 0;
  }
  DAT_664ef9c8 = 0xffffffff;
  return 0;
}


