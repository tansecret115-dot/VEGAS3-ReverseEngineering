/* Module: mp3plug.dll
   Function: FUN_5f6f45e0
   Address: 5f6f45e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_5f6f45e0(double *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  double local_8c;
  double local_84;
  uint local_74;
  float *local_70;
  uint local_6c;
  uint local_4c;
  uint uStack_48;
  uint local_3c;
  uint uStack_38;
  uint local_2c;
  uint uStack_28;
  uint local_1c;
  uint uStack_18;
  
  dVar3 = param_1[1];
  iVar4 = *(int *)(param_1 + 2);
  iVar5 = *(int *)((int)param_1 + 0x2c);
  local_8c = *param_1 * dVar3;
  dVar6 = _DAT_5f75e060 * local_8c;
  uStack_48 = (uint)((ulonglong)dVar6 >> 0x20);
  local_4c = SUB84(dVar6,0);
  uVar9 = uStack_48 >> 0x14 & 0x7ff;
  if (uVar9 < 0x3ff) {
    local_74 = 0;
  }
  else {
    local_74 = (uStack_48 << 0xb | local_4c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar9 & 0x1f);
    if ((longlong)dVar6 < 0) {
      local_74 = -local_74;
    }
  }
  local_70 = param_2;
  dVar6 = param_1[4] - *param_1;
  uStack_38 = (uint)((ulonglong)dVar6 >> 0x20);
  local_3c = SUB84(dVar6,0);
  uVar9 = uStack_38 >> 0x14 & 0x7ff;
  if (uVar9 < 0x3ff) {
    local_6c = 0;
  }
  else {
    local_6c = (uStack_38 << 0xb | local_3c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar9 & 0x1f);
    if ((longlong)dVar6 < 0) {
      local_6c = -local_6c;
    }
  }
  if ((local_6c & 1) == 0) {
    local_84 = _DAT_5f75e078;
  }
  else {
    local_70 = param_2 + -1;
    local_6c = local_6c - 1;
    local_84 = (local_8c * (double)*(float *)(iVar5 + 4 + (local_74 >> 9) * 8) +
               (double)*(float *)(iVar5 + (local_74 >> 9) * 8)) * (double)*param_2;
    local_74 = local_74 + iVar4;
    local_8c = dVar3 + local_8c;
  }
  dVar6 = 0.0;
  do {
    dVar8 = (double)*(float *)(iVar5 + 4 + (local_74 >> 9) * 8) * local_8c;
    uVar9 = local_74 + iVar4 >> 9;
    dVar7 = local_8c + dVar3;
    local_8c = dVar7 + dVar3;
    dVar6 = (double)*local_70 * (dVar8 + (double)*(float *)(iVar5 + (local_74 >> 9) * 8)) +
            local_84 + dVar6;
    local_74 = local_74 + iVar4 + iVar4;
    local_6c = local_6c - 2;
    local_84 = (double)local_70[-1] *
               ((double)*(float *)(iVar5 + uVar9 * 8) +
               (double)*(float *)(iVar5 + 4 + uVar9 * 8) * dVar7);
    local_70 = local_70 + -2;
  } while (local_6c != 0);
  local_84 = local_84 + dVar6;
  dVar6 = (_DAT_5f75e068 - *param_1) * dVar3;
  dVar7 = _DAT_5f75e070 * dVar6;
  uStack_28 = (uint)((ulonglong)dVar7 >> 0x20);
  local_2c = SUB84(dVar7,0);
  uVar9 = uStack_28 >> 0x14 & 0x7ff;
  if (uVar9 < 0x3ff) {
    local_74 = 0;
  }
  else {
    local_74 = (uStack_28 << 0xb | local_2c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar9 & 0x1f);
    if ((longlong)dVar7 < 0) {
      local_74 = -local_74;
    }
  }
  dVar7 = param_1[4] + *param_1;
  uStack_18 = (uint)((ulonglong)dVar7 >> 0x20);
  local_1c = SUB84(dVar7,0);
  uVar9 = uStack_18 >> 0x14 & 0x7ff;
  if (uVar9 < 0x3ff) {
    uVar9 = 0;
  }
  else {
    uVar9 = (uStack_18 << 0xb | local_1c >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar9 & 0x1f);
    if ((longlong)dVar7 < 0) {
      uVar9 = -uVar9;
    }
  }
  local_6c = uVar9 - 1;
  local_8c = dVar6;
  local_70 = param_2 + 1;
  if ((local_6c & 1) != 0) {
    local_70 = param_2 + 2;
    local_6c = uVar9 - 2;
    local_8c = dVar6 + dVar3;
    local_84 = ((double)*(float *)(iVar5 + 4 + (local_74 >> 9) * 8) * dVar6 +
               (double)*(float *)(iVar5 + (local_74 >> 9) * 8)) * (double)param_2[1] + local_84;
    local_74 = local_74 + iVar4;
  }
  dVar6 = 0.0;
  do {
    dVar8 = (double)*(float *)(iVar5 + 4 + (local_74 >> 9) * 8) * local_8c;
    uVar9 = local_74 + iVar4 >> 9;
    dVar7 = local_8c + dVar3;
    fVar2 = *local_70;
    pfVar1 = local_70 + 1;
    local_70 = local_70 + 2;
    local_8c = dVar7 + dVar3;
    dVar6 = (double)fVar2 * (dVar8 + (double)*(float *)(iVar5 + (local_74 >> 9) * 8)) +
            local_84 + dVar6;
    local_74 = local_74 + iVar4 + iVar4;
    local_6c = local_6c - 2;
    local_84 = (double)*pfVar1 *
               ((double)*(float *)(iVar5 + uVar9 * 8) +
               (double)*(float *)(iVar5 + 4 + uVar9 * 8) * dVar7);
  } while (local_6c != 0);
  *param_3 = (float)(local_84 + dVar6);
  return;
}


