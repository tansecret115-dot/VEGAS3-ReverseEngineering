/* Module: vegas30.exe
   Function: FUN_0059c0d0
   Address: 0059c0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0059c416) */
/* WARNING: Removing unreachable block (ram,0x0059c17b) */
/* WARNING: Removing unreachable block (ram,0x0059c514) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0059c0d0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                uint param_6,int param_7,uint param_8,int param_9,int param_10,float param_11,
                float param_12,int param_13,undefined4 param_14,int param_15)

{
  int *piVar1;
  uint uVar2;
  float fVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 fVar12;
  float10 extraout_ST0_02;
  longlong lVar13;
  undefined8 uVar14;
  float local_e4;
  uint local_dc;
  double local_cc [2];
  int local_bc;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0 [4];
  float local_90;
  float local_8c;
  int local_88;
  int iStack_84;
  int local_80;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_50 [4];
  float local_40;
  float local_3c;
  
  local_bc = -1;
  param_2 = (uint)*(ushort *)(param_1 + 0xc) * param_4 + param_2;
  uVar5 = param_6 - param_8;
  iVar6 = (param_7 - param_9) - (uint)(param_6 < param_8);
  lVar4 = CONCAT44(iVar6,uVar5);
  iVar8 = 0;
  uVar10 = (*(uint **)(param_13 + 0x30))[2];
  uVar2 = **(uint **)(param_13 + 0x30);
  if (1 < uVar2) {
    local_cc[0] = (double)(ulonglong)*(uint *)(param_1 + 4);
    local_dc = 1;
    do {
      lVar13 = ftol();
      if (lVar4 < lVar13) {
        local_bc = iVar8;
        if (iVar8 != -1) {
          iVar9 = iVar8 * 0x10 + uVar10;
          fVar3 = *(float *)(iVar9 + 8) * _DAT_00629a78;
          local_e4 = *(float *)(iVar9 + 0x18) * _DAT_00629a78;
          goto LAB_0059c1ef;
        }
        break;
      }
      iVar8 = iVar8 + 1;
      local_dc = local_dc + 1;
    } while (local_dc < uVar2);
  }
  local_e4 = *(float *)(uVar2 * 0x10 + -8 + uVar10) * _DAT_00629a78;
  fVar3 = local_e4;
LAB_0059c1ef:
  fVar3 = fVar3 + param_12;
  local_e4 = local_e4 + param_12;
  local_b0 = _DAT_00629a78;
  if ((_DAT_00629a78 <= fVar3) && (local_b0 = fVar3, _DAT_00619ab0 < fVar3)) {
    local_b0 = _DAT_00619ab0;
  }
  if (_DAT_00629a78 <= local_e4) {
    if (_DAT_00619ab0 < local_e4) {
      local_e4 = 1.0;
    }
  }
  else {
    local_e4 = -1.0;
  }
  if ((local_bc == -1) || (local_b0 == local_e4)) {
    if ((local_b0 == (float)_DAT_00610fd8) && (param_15 == 0)) {
      FUN_0059bd70(param_2,param_3,param_10,(double)param_11,param_14);
      return param_10;
    }
    local_b4 = param_11;
    local_ac = 0;
    local_a8 = 0;
    local_a4 = 0;
    FUN_0059dc60();
    FUN_0059aef0(param_2,param_3,param_10,local_cc,param_14);
    return param_10;
  }
  local_a0[0] = *(undefined4 *)(iVar8 * 0x10 + 0xc + uVar10);
  piVar1 = (int *)(iVar8 * 0x10 + 0xc + uVar10);
  local_cc[0] = (double)(ulonglong)*(uint *)(param_1 + 4);
  local_70 = 0;
  local_cc[0] = (double)(longlong)local_cc[0];
  local_6c = 0x3ff00000;
  local_68 = 0;
  local_64 = 0;
  uVar14 = ftol();
  iVar9 = uVar5 - (uint)uVar14;
  iStack_84 = (iVar6 - (int)((ulonglong)uVar14 >> 0x20)) - (uint)(uVar5 < (uint)uVar14);
  local_88 = iVar9;
  local_bc = ftol();
  iVar8 = ftol();
  local_80 = iVar8 - local_bc;
  iVar9 = (iVar8 - local_bc) - iVar9;
  if (iVar9 <= param_10) {
    param_10 = iVar9;
  }
  uVar10 = 0;
  local_b8 = 0;
  fVar12 = extraout_ST0;
  if ((extraout_ST0 <= (float10)_DAT_00610fd8) || ((float)_DAT_00610fd8 <= local_e4)) {
    if ((local_e4 <= (float)_DAT_00610fd8) || ((float10)_DAT_00610fd8 <= extraout_ST0))
    goto LAB_0059c584;
    if (*piVar1 == 1) {
      ftol();
      lVar13 = ftol();
      uVar10 = (uint)lVar13;
      if (lVar4 < lVar13) {
        iVar6 = ftol();
        local_e4 = 0.0;
        local_80 = uVar10 - iVar6;
        fVar12 = extraout_ST0_02;
      }
      else {
        local_88 = uVar5 - uVar10;
        iStack_84 = (iVar6 - (int)((ulonglong)lVar13 >> 0x20)) - (uint)(uVar5 < uVar10);
        iVar6 = ftol();
        fVar12 = (float10)_DAT_00610f20;
        local_80 = iVar6 - uVar10;
      }
    }
    iVar6 = uVar10 - uVar5;
  }
  else {
    iVar8 = *piVar1;
    if (iVar8 == 1) {
      ftol();
      lVar13 = ftol();
      uVar10 = (uint)lVar13;
      if (lVar4 < lVar13) {
        iVar6 = ftol();
        local_e4 = 0.0;
        local_80 = uVar10 - iVar6;
        fVar12 = extraout_ST0_01;
      }
      else {
        local_88 = uVar5 - uVar10;
        iStack_84 = (iVar6 - (int)((ulonglong)lVar13 >> 0x20)) - (uint)(uVar5 < uVar10);
        iVar6 = ftol();
        fVar12 = (float10)_DAT_00610f20;
        local_80 = iVar6 - uVar10;
      }
    }
    else if (iVar8 == 2) {
      uVar14 = ftol();
      local_88 = uVar5 - (uint)uVar14;
      iStack_84 = (iVar6 - (int)((ulonglong)uVar14 >> 0x20)) - (uint)(uVar5 < (uint)uVar14);
      fVar12 = extraout_ST0_00;
    }
    iVar6 = uVar10 - uVar5;
  }
  if ((0 < iVar6) && (iVar6 <= param_10)) {
    param_10 = iVar6;
  }
LAB_0059c584:
  puVar7 = local_a0;
  puVar11 = local_50;
  for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar11 = puVar11 + 1;
  }
  local_90 = (float)fVar12;
  if (((float10)CONCAT44(iStack_84,local_88) * ((float10)local_e4 - fVar12)) / (float10)local_80 +
      fVar12 < (float10)_DAT_00610fd8) {
    local_40 = (float)fVar12;
    local_8c = local_e4;
    local_3c = local_e4;
    FUN_0059b090(local_a0,local_50,param_3,param_2,param_10,(double)param_11,param_14,1,param_15);
    return param_10;
  }
  local_40 = (float)fVar12;
  local_8c = local_e4;
  local_3c = local_e4;
  FUN_0059b090(local_a0,local_50,param_3,param_2,param_10,(double)param_11,param_14,0,param_15);
  return param_10;
}


