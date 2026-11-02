/* Module: rmme3260.dll
   Function: FUN_66228c90
   Address: 66228c90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66228c90(int param_1)

{
  int iVar1;
  void *this;
  void *pvVar2;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  *(short *)(param_1 + 0x110) = *(short *)(param_1 + 0x14) + *(short *)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x74);
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x70) < 0)) {
    local_8 = 0;
    if (*(short *)(param_1 + 0x38) != 0) {
      do {
        pvVar2 = *(void **)(*(int *)(param_1 + 0x3c) + (local_8 & 0xffff) * 4);
        if (pvVar2 == (void *)0x0) {
          return 0x80004005;
        }
        local_c = 0;
        local_10 = 0;
        FUN_66218070(pvVar2,(undefined4 *)0x0,&local_10,&local_c);
        if (*(uint *)(param_1 + 0x100) < local_c) {
          *(uint *)(param_1 + 0x100) = local_c;
        }
        if (*(uint *)(param_1 + 0x104) < local_10) {
          *(uint *)(param_1 + 0x104) = local_10;
        }
        local_14 = 0;
        local_18 = 0;
        FUN_66217fa0(pvVar2,&local_14,&local_18);
        *(uint *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + local_14;
        *(uint *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + local_18;
        local_1c = 0;
        local_20 = 0;
        FUN_66217ff0(pvVar2,&local_1c,&local_20);
        if (*(uint *)(param_1 + 0xf4) < local_1c) {
          *(uint *)(param_1 + 0xf4) = local_1c;
        }
        if (*(uint *)(param_1 + 0xf8) < local_20) {
          *(uint *)(param_1 + 0xf8) = local_20;
        }
        local_8 = local_8 + 1;
      } while ((ushort)local_8 < *(ushort *)(param_1 + 0x38));
      return 0;
    }
  }
  else {
    pvVar2 = (void *)0x0;
    this = (void *)0x0;
    if (-1 < iVar1) {
      pvVar2 = *(void **)(*(int *)(param_1 + 0x26) + iVar1 * 4);
    }
    if (-1 < *(int *)(param_1 + 0x70)) {
      this = *(void **)(*(int *)(param_1 + 0x26) + *(int *)(param_1 + 0x70) * 4);
    }
    local_20 = 0;
    local_18 = 0;
    local_1c = 0;
    local_14 = 0;
    local_c = 0;
    local_24 = 0;
    local_10 = 0;
    local_8 = 0;
    local_28 = 0;
    local_30 = 0;
    local_2c = 0;
    local_34 = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_66218070(pvVar2,(undefined4 *)0x0,&local_18,&local_20);
      FUN_66217fa0(pvVar2,&local_c,&local_24);
      FUN_66217ff0(pvVar2,&local_28,&local_30);
    }
    if (this != (void *)0x0) {
      FUN_66218070(this,(undefined4 *)0x0,&local_14,&local_1c);
      FUN_66217fa0(this,&local_10,&local_8);
      FUN_66217ff0(this,&local_2c,&local_34);
    }
    if (local_1c < local_20) {
      *(uint *)(param_1 + 0x100) = local_20;
    }
    else {
      *(uint *)(param_1 + 0x100) = local_1c;
    }
    if (local_14 < local_18) {
      *(uint *)(param_1 + 0x104) = local_18;
    }
    else {
      *(uint *)(param_1 + 0x104) = local_14;
    }
    *(uint *)(param_1 + 0xec) = local_10 + local_c;
    *(uint *)(param_1 + 0xf0) = local_8 + local_24;
    if (local_2c < local_28) {
      *(uint *)(param_1 + 0xf4) = local_28;
    }
    else {
      *(uint *)(param_1 + 0xf4) = local_2c;
    }
    if (local_34 < local_30) {
      *(uint *)(param_1 + 0xf8) = local_30;
      return 0;
    }
    *(uint *)(param_1 + 0xf8) = local_34;
  }
  return 0;
}


