/* Module: erv33260.dll
   Function: FUN_67078b70
   Address: 67078b70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_67078b70(int *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int local_8;
  
  uVar1 = param_1[0x22] + 0xfU >> 4;
  uVar5 = param_1[0x23] + 0xfU >> 4;
  param_1[0x74] = uVar1;
  local_8 = 0;
  param_1[0x73] = uVar5;
  param_1[0x75] = uVar1 * uVar5;
  pvVar2 = (void *)FUN_67072130(0x2c);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_6707b4a0(pvVar2,0,param_1[0x22],param_1[0x23],param_1[0xcb],&local_8);
  }
  param_1[0x76] = (int)puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    return 2;
  }
  if (local_8 != 0) {
    if (puVar3 != (undefined4 *)0x0) {
      FUN_6707b5e0(puVar3);
      FUN_67072140(puVar3);
    }
    param_1[0x76] = 0;
    return local_8;
  }
  param_1[0x77] = (int)puVar3;
  pvVar2 = (void *)FUN_67072130(0x2c);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_6707b4a0(pvVar2,0x800,param_1[0x22],param_1[0x23],param_1[0xcb],&local_8);
  }
  param_1[0x78] = (int)puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    return 2;
  }
  if (local_8 != 0) {
    if (puVar3 != (undefined4 *)0x0) {
      FUN_6707b5e0(puVar3);
      FUN_67072140(puVar3);
    }
    param_1[0x78] = 0;
    return local_8;
  }
  param_1[0x79] = (int)puVar3;
  pvVar2 = (void *)FUN_67072130(0x2c);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_6707b4a0(pvVar2,0,param_1[0x22],param_1[0x23],param_1[0xcb],&local_8);
  }
  param_1[0x7a] = (int)puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    return 2;
  }
  if (local_8 != 0) {
    if (puVar3 != (undefined4 *)0x0) {
      FUN_6707b5e0(puVar3);
      FUN_67072140(puVar3);
    }
    param_1[0x7a] = 0;
    return local_8;
  }
  param_1[0x7b] = (int)puVar3;
  if (param_1[0xc9] == 0) {
    iVar4 = (**(code **)(*param_1 + 0x5c))(param_1[0x22],param_1[0x23]);
    puVar3 = FUN_67071030(iVar4 * 2,1);
    param_1[0x89] = (int)puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      return 2;
    }
    param_1[0xc9] = 1;
    param_1[200] = (int)puVar3 + 0x1fU & 0xffffffe0;
  }
  iVar4 = 1;
  *(undefined1 *)(param_1 + 0x8b) = 1;
  *(undefined1 *)((int)param_1 + 0x22d) = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  if (param_1[0x29] == 1) {
    param_1[0x72] = param_1[0x2a];
  }
  else {
    param_1[0x72] = 0;
  }
  if (param_1[0x87] != 0) {
    iVar4 = param_1[0x73];
  }
  (**(code **)(*(int *)param_1[0x5b] + 8))
            (param_1[0x74],iVar4,param_1[0x74],param_1[0x73],param_1[0x77],param_1[0x79]);
  return local_8;
}


