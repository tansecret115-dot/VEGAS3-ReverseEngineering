/* Module: rmme3260.dll
   Function: FUN_6620e550
   Address: 6620e550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_6620e550(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_8;
  
  FUN_66208c50(param_1,0);
  param_1[0x36] = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined2 *)((int)param_1 + 0xe2) = 0;
  FUN_6624fd80(param_1 + 0x39);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  CMap<>(param_1 + 0x43,10);
  FUN_66224a00(param_1 + 0x4a);
  param_1[0xaa] = 0;
  FUN_6621ad90(param_1 + 0xab);
  *(undefined4 *)((int)param_1 + 0x2d6) = 0;
  *param_1 = &PTR_FUN_6626b640;
  pvVar1 = operator_new(0x500);
  param_1[0x40] = pvVar1;
  if (pvVar1 == (void *)0x0) {
    param_1[9] = 0x8007000e;
  }
  pvVar1 = operator_new(0x980);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    puVar5 = (undefined4 *)((int)pvVar1 + 0x14);
    local_8 = 0x40;
    do {
      FUN_66208c30(puVar5);
      puVar5 = (undefined4 *)((int)puVar5 + 0x26);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  param_1[0x42] = pvVar1;
  if (pvVar1 == (void *)0x0) {
    param_1[9] = 0x8007000e;
  }
  puVar5 = operator_new(0x2c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = FUN_662247a0(puVar5);
  }
  *(undefined4 **)((int)param_1 + 0x2d6) = puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    param_1[9] = 0x8007000e;
  }
  iVar2 = 0;
  iVar3 = 0;
  do {
    if (param_1[9] != 0) break;
    iVar4 = iVar3 + 0x14;
    *(undefined4 *)(iVar3 + 4 + param_1[0x40]) = 0;
    *(undefined4 *)(iVar3 + 8 + param_1[0x40]) = 0;
    *(undefined4 *)(iVar3 + 0xc + param_1[0x40]) = 0;
    *(undefined4 *)(iVar3 + 0x10 + param_1[0x40]) = 0;
    *(undefined4 *)(iVar2 + param_1[0x42]) = 0;
    *(undefined4 *)(iVar2 + 4 + param_1[0x42]) = 0;
    *(undefined4 *)(iVar2 + 8 + param_1[0x42]) = 0;
    *(undefined4 *)(iVar2 + 0xc + param_1[0x42]) = 0;
    *(undefined4 *)(iVar2 + 0x10 + param_1[0x42]) = 0;
    puVar5 = (undefined4 *)(iVar2 + 0x14 + param_1[0x42]);
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined2 *)(puVar5 + 2) = 0;
    *(undefined4 *)(iVar2 + 0x1e + param_1[0x42]) = 0;
    *(undefined4 *)(iVar2 + 0x22 + param_1[0x42]) = 0;
    iVar2 = iVar2 + 0x26;
    iVar3 = iVar4;
  } while (iVar4 < 0x500);
  *(undefined4 *)((int)param_1 + 0x2da) = 0;
  return param_1;
}


