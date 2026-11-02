/* Module: extmondrv.dll
   Function: FUN_004012d0
   Address: 004012d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 *
FUN_004012d0(undefined4 *param_1,SIZE_T param_2,uint param_3,int param_4,SIZE_T *param_5,
            SIZE_T *param_6)

{
  LPVOID pvVar1;
  undefined4 *lpAddress;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint local_28;
  undefined4 *local_24;
  uint local_20;
  _MEMORY_BASIC_INFORMATION local_1c;
  
  uVar2 = 0;
  puVar3 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_20 = 0;
  local_28 = 0;
  if (param_5 != (SIZE_T *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (SIZE_T *)0x0) {
    *param_6 = 0;
  }
  if ((param_3 < param_2) && (param_2 != 0x80000000)) {
    param_3 = param_2;
  }
  if (param_3 == 0) {
    param_3 = 1;
  }
  if (param_1 != (undefined4 *)0x0) {
    VirtualQuery(param_1,&local_1c,0x1c);
    puVar3 = local_1c.AllocationBase;
    if (local_1c.State == 0x2000) {
      local_28 = local_1c.RegionSize;
    }
    else {
      if (local_1c.State != 0x1000) {
        return (undefined4 *)0x0;
      }
      uVar2 = (int)local_1c.BaseAddress + (local_1c.RegionSize - (int)local_1c.AllocationBase);
      VirtualQuery((LPCVOID)(local_1c.RegionSize + (int)param_1),&local_1c,0x1c);
      local_28 = uVar2;
      if (puVar3 == local_1c.AllocationBase) {
        local_28 = local_1c.RegionSize + uVar2;
      }
    }
  }
  if (param_2 <= uVar2) {
    if (param_5 != (SIZE_T *)0x0) {
      *param_5 = uVar2;
    }
    if (param_6 != (SIZE_T *)0x0) {
      *param_6 = local_28;
    }
    return param_1;
  }
  if (local_28 < param_2) {
    lpAddress = (undefined4 *)0x0;
    if (param_1 == (undefined4 *)0x0) goto LAB_004013d4;
    if (param_4 != 0) {
      local_24 = puVar3;
      local_20 = uVar2;
    }
LAB_004013d8:
    puVar3 = VirtualAlloc((LPVOID)0x0,param_3,0x2000,4);
    if (puVar3 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    VirtualQuery(puVar3,&local_1c,0x1c);
    if (param_6 != (SIZE_T *)0x0) {
      *param_6 = local_1c.RegionSize;
    }
    if (param_2 == 0x80000000) {
      param_2 = local_1c.RegionSize;
    }
    if (param_2 == 0) {
      lpAddress = puVar3;
      if (param_5 != (SIZE_T *)0x0) {
        *param_5 = 0;
      }
      goto joined_r0x00401501;
    }
    lpAddress = VirtualAlloc(puVar3,param_2,0x1000,4);
    if (lpAddress == (undefined4 *)0x0) {
      VirtualFree(puVar3,0,0x8000);
      return (undefined4 *)0x0;
    }
  }
  else {
    pvVar1 = VirtualAlloc((undefined1 *)((int)puVar3 + uVar2),param_2 - uVar2,0x1000,4);
    if (pvVar1 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    lpAddress = puVar3;
    if (param_6 != (SIZE_T *)0x0) {
      *param_6 = local_28;
    }
LAB_004013d4:
    if (puVar3 == (undefined4 *)0x0) goto LAB_004013d8;
  }
  if (param_5 != (SIZE_T *)0x0) {
    VirtualQuery(lpAddress,&local_1c,0x1c);
    *param_5 = local_1c.RegionSize;
  }
  if (local_20 != 0) {
    puVar3 = local_24;
    puVar4 = lpAddress;
    for (uVar2 = local_20 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (local_20 = local_20 & 3; local_20 != 0; local_20 = local_20 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
joined_r0x00401501:
  if (local_24 != (undefined4 *)0x0) {
    VirtualFree(local_24,0,0x8000);
  }
  return lpAddress;
}


