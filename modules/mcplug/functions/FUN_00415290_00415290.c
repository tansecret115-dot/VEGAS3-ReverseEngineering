/* Module: mcplug.dll
   Function: FUN_00415290
   Address: 00415290
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00415290(int param_1,undefined4 *param_2)

{
  int iVar1;
  double dVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
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
  
  if (*(int *)(param_1 + 0x408) == 0) {
    param_2[1] = 0;
    param_2[0x13] = 0;
  }
  else {
    param_2[1] = 1;
    param_2[0x13] = 1;
  }
  FUN_00424410((undefined4 *)*param_2,0x1d,*(int *)(param_1 + 0x3f5),*(int *)(param_1 + 0x3f9),
               (uint *)0x0,0,(int *)0x0);
  uVar14 = *(uint *)*param_2;
  puVar15 = (uint *)*param_2;
  puVar16 = (uint *)param_2[0x12];
  for (uVar13 = uVar14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar16 = puVar16 + 1;
  }
  for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(char *)puVar16 = (char)*puVar15;
    puVar15 = (uint *)((int)puVar15 + 1);
    puVar16 = (uint *)((int)puVar16 + 1);
  }
  iVar1 = *(int *)(param_1 + 0x90);
  bVar3 = false;
  if (((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) {
    bVar3 = true;
  }
  local_80 = *(int *)(param_1 + 0x3f9);
  local_7c = *(int *)(param_1 + 0x3f5);
  if (bVar3) {
    dVar2 = _DAT_00476850;
    if (local_7c != 0) {
      switch(*(int *)(param_1 + 0xc0)) {
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
    dVar2 = *(double *)(&local_80 + *(int *)(param_1 + 0xc0) * 2);
  }
  *(double *)(param_2 + 0x1a) = dVar2;
  *(double *)(param_2 + 8) = dVar2;
  if (*(int *)(param_1 + 0x100) == 1) {
    param_2[0x17] = 0;
    param_2[5] = 0;
  }
  else if (*(int *)(param_1 + 0x248) == 0) {
    param_2[0x17] = 2;
    param_2[5] = 2;
  }
  else {
    param_2[0x17] = 1;
    param_2[5] = 1;
  }
  uVar12 = _DAT_00476fc8;
  uVar11 = _DAT_00476fc0;
  uVar10 = _DAT_00476fb8;
  uVar9 = _DAT_00476fb0;
  uVar8 = _DAT_00476fa8;
  uVar7 = _DAT_00476fa0;
  uVar6 = _DAT_00476f98;
  uVar5 = _DAT_00476f90;
  uVar4 = _DAT_00476800;
  switch(*(undefined4 *)(param_1 + 0xc4)) {
  case 1:
    *(undefined8 *)(param_2 + 0x18) = _DAT_00476fc8;
    *(undefined8 *)(param_2 + 6) = uVar12;
    return;
  case 2:
    *(undefined8 *)(param_2 + 0x18) = _DAT_00476fc0;
    *(undefined8 *)(param_2 + 6) = uVar11;
    return;
  case 3:
    *(undefined8 *)(param_2 + 0x18) = _DAT_00476fb8;
    *(undefined8 *)(param_2 + 6) = uVar10;
    return;
  case 4:
    *(undefined8 *)(param_2 + 0x18) = _DAT_00476fb0;
    *(undefined8 *)(param_2 + 6) = uVar9;
    return;
  case 5:
    *(undefined8 *)(param_2 + 0x18) = _DAT_00476f90;
    *(undefined8 *)(param_2 + 6) = uVar5;
    return;
  case 6:
    *(undefined8 *)(param_2 + 0x18) = _DAT_00476fa8;
    *(undefined8 *)(param_2 + 6) = uVar8;
    return;
  case 7:
    *(undefined8 *)(param_2 + 0x18) = _DAT_00476fa0;
    *(undefined8 *)(param_2 + 6) = uVar7;
    return;
  case 8:
    *(undefined8 *)(param_2 + 0x18) = _DAT_00476f98;
    *(undefined8 *)(param_2 + 6) = uVar6;
    return;
  default:
    *(undefined8 *)(param_2 + 0x18) = _DAT_00476800;
    *(undefined8 *)(param_2 + 6) = uVar4;
    return;
  }
}


