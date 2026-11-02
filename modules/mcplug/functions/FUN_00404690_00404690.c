/* Module: mcplug.dll
   Function: FUN_00404690
   Address: 00404690
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00404690(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6)

{
  undefined8 uVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  HANDLE pvVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    pvVar5 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
    *(HANDLE *)(param_1 + 0x10) = pvVar5;
  }
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),0xffffffff);
  *(undefined4 *)(param_1 + 0x1c) = param_5;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(int *)(param_1 + 0x24) = param_6;
  iVar6 = FUN_00424410((undefined4 *)(param_1 + 0x28),0x1d,*(int *)(param_6 + 0x2c),
                       *(int *)(param_6 + 0x30),(uint *)0x0,0,(int *)0x0);
  if (iVar6 < 0) goto LAB_00404a1f;
  iVar6 = *(int *)(param_1 + 0x24);
  bVar3 = false;
  iVar7 = *(int *)(iVar6 + 0xce8);
  if (((iVar7 == 2) || (iVar7 == 3)) || (iVar7 == 4)) {
    bVar3 = true;
  }
  local_80 = *(int *)(iVar6 + 0x30);
  local_7c = *(int *)(iVar6 + 0x2c);
  if (bVar3) {
    dVar2 = _DAT_00476850;
    if (local_7c != 0) {
      switch(*(int *)(iVar6 + 0x174)) {
      case 1:
        break;
      case 2:
        if ((local_7c != 0x2d0) ||
           ((dVar2 = _DAT_00476848, local_80 != 0x1e0 && (dVar2 = _DAT_00476840, local_80 != 0x240))
           )) {
          dVar2 = ((double)local_80 * _DAT_00476838) / ((double)local_7c * _DAT_00476830);
        }
        break;
      case 3:
        if ((local_7c != 0x2d0) ||
           ((dVar2 = _DAT_00476828, local_80 != 0x1e0 && (dVar2 = _DAT_00476820, local_80 != 0x240))
           )) {
          dVar2 = ((double)local_80 * _DAT_00476818) / ((double)local_7c * _DAT_00476810);
        }
        break;
      case 4:
        dVar2 = ((double)local_80 * _DAT_00476808) / (double)local_7c;
      }
    }
  }
  else {
    local_78 = 0;
    local_74 = 0x3ff00000;
    local_70 = 0xb7667022;
    local_6c = 0x3ff7c1a9;
    local_68 = 0x1d74b1d4;
    local_64 = 0x3ff6c1a1;
    local_60 = 0x864da842;
    local_5c = 0x3ff502db;
    local_58 = 0x54389232;
    local_54 = 0x3ff3dd0a;
    local_50 = 0x63d3b32c;
    local_4c = 0x3ff2f6ce;
    local_48 = 0x281ca6c0;
    local_44 = 0x3ff1e838;
    local_40 = 0xa8f87ac9;
    local_3c = 0x3ff17914;
    local_38 = 0x4ba3aaf8;
    local_34 = 0x3ff04d34;
    local_30 = 0x635abdf8;
    local_2c = 0x3fef344c;
    local_28 = 0x6f6c8d3a;
    local_24 = 0x3fedeba7;
    local_20 = 0x4e51d395;
    local_1c = 0x3fed3947;
    local_18 = 0x626b4402;
    local_14 = 0x3feba552;
    local_10 = 0xdc4fafe3;
    local_c = 0x3feaa224;
    dVar2 = *(double *)(&local_80 + *(int *)(iVar6 + 0x174) * 2);
  }
  if (*(int *)(iVar6 + 0x18c) == 0) {
    puVar8 = (undefined4 *)(param_1 + 0x50);
    uVar1 = *(undefined8 *)(iVar6 + 0x40);
    iVar7 = 0x10;
    puVar9 = puVar8;
    if (*(int *)(iVar6 + 500) == 0) {
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      *(undefined8 *)(param_1 + 0x60) = uVar1;
      dVar4 = _DAT_00476800;
      *puVar8 = 0x40;
      *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 2;
      goto joined_r0x004049d9;
    }
    for (; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(undefined8 *)(param_1 + 0x60) = uVar1;
    dVar4 = _DAT_00476800;
    *puVar8 = 0x40;
    *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 1;
    if (dVar2 <= dVar4) {
      dVar2 = _DAT_00476850;
    }
    *(double *)(param_1 + 0x68) = dVar2;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  else {
    uVar1 = *(undefined8 *)(iVar6 + 0x40);
    puVar8 = (undefined4 *)(param_1 + 0x50);
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined8 *)(param_1 + 0x60) = uVar1;
    dVar4 = _DAT_00476800;
    *(undefined4 *)(param_1 + 0x50) = 0x40;
    *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
joined_r0x004049d9:
    if (dVar2 <= dVar4) {
      dVar2 = _DAT_00476850;
    }
    *(double *)(param_1 + 0x68) = dVar2;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  *(undefined4 *)(param_1 + 0x90) = 0xfffffff6;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 1;
  iVar6 = 0;
LAB_00404a1f:
  ReleaseMutex(*(HANDLE *)(param_1 + 0x10));
  return iVar6;
}


