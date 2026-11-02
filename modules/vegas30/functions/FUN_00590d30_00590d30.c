/* Module: vegas30.exe
   Function: FUN_00590d30
   Address: 00590d30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00590ece) */
/* WARNING: Removing unreachable block (ram,0x00590ea0) */
/* WARNING: Removing unreachable block (ram,0x00590fae) */

undefined4 FUN_00590d30(int param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 uVar17;
  int local_4c;
  uint local_44;
  uint local_40;
  uint local_3c;
  int iStack_38;
  uint local_34;
  int iStack_30;
  int local_2c;
  undefined8 local_28;
  uint local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  int local_8;
  int iStack_4;
  
  iVar4 = param_1;
  iVar3 = DAT_0065ab40;
  local_3c = *(uint *)(*(int *)(param_1 + 0x18) + 0x2c);
  if (*(short *)(local_3c + 2) == 1) {
    param_1 = *(int *)(DAT_0065a06c + 0x84);
  }
  else {
    param_1 = *(int *)(DAT_0065a06c + 0x6c);
  }
  local_2c = *(int *)(iVar4 + 0x20);
  uVar1 = *(uint *)(iVar4 + 0x4c);
  local_44 = (uint)(0xa0000 / (ulonglong)(longlong)(int)(uint)*(ushort *)(param_1 + 0xc));
  local_40 = ftol();
  iVar13 = *(int *)(iVar4 + 0x2c);
  uVar11 = *(uint *)(iVar4 + 0x28);
  local_1c = (int)uVar1 >> 0x1f;
  local_20 = uVar1;
  uVar14 = __allrem(uVar11,iVar13,uVar1,local_1c);
  local_28._0_4_ = uVar11 - (uint)uVar14;
  uVar9 = *(uint *)(iVar4 + 0x34);
  local_28._4_4_ = (iVar13 - (int)((ulonglong)uVar14 >> 0x20)) - (uint)(uVar11 < (uint)uVar14);
  uVar14 = __allrem(uVar9 + uVar11,
                    ((int)uVar9 >> 0x1f) + *(int *)(iVar4 + 0x2c) + (uint)CARRY4(uVar9,uVar11),
                    local_20,local_1c);
  uVar12 = uVar9 - (uint)uVar14;
  local_34 = uVar12 + uVar11;
  iStack_30 = ((((int)uVar9 >> 0x1f) - (int)((ulonglong)uVar14 >> 0x20)) -
              (uint)(uVar9 < (uint)uVar14)) + *(int *)(iVar4 + 0x2c) + (uint)CARRY4(uVar12,uVar11);
  uVar14 = ftol();
  local_8 = (int)uVar14;
  local_10._0_4_ = local_20 + (uint)local_28;
  local_10._4_4_ = local_1c + local_28._4_4_ + (uint)CARRY4(local_20,(uint)local_28);
  lVar15 = ftol();
  local_18 = ftol();
  local_10._0_4_ = local_20 + local_34;
  local_10._4_4_ = local_1c + iStack_30 + (uint)CARRY4(local_20,local_34);
  lVar16 = ftol();
  lVar2 = CONCAT44((int)((ulonglong)uVar14 >> 0x20),local_8);
  local_10._0_4_ = (int)lVar16;
  local_28 = lVar15 - (int)local_40;
  if (lVar2 < local_28) {
    local_28 = lVar2;
  }
  uVar11 = (uint)local_28;
  if (lVar16 < local_18 + (int)local_40) {
    lVar16 = local_18 + (int)local_40;
  }
  iStack_4 = (int)((ulonglong)lVar16 >> 0x20) + (uint)(0xffffffdf < (uint)lVar16);
  local_10 = ftol();
  iVar13 = ((uint)lVar16 - uVar11) + 0x40;
  if (iVar13 <= (int)local_44) {
    local_44 = iVar13;
  }
  if ((local_28 < 0x100000000) && (local_28 < 0)) {
    iVar13 = -uVar11;
    local_28._0_4_ = 0;
    local_28._4_4_ = 0;
    _SfAudio_FillSilence_12(param_1,DAT_0065ab40,iVar13);
    uVar11 = 0;
  }
  else {
    iVar13 = 0;
  }
  local_40 = 0;
  if (0 < *(int *)(iVar4 + 0xb8)) {
    piVar5 = (int *)(iVar4 + 0x58);
    lVar16 = local_28;
    do {
      local_28._4_4_ = (int)((ulonglong)lVar16 >> 0x20);
      local_28._0_4_ = (uint)lVar16;
      uVar9 = (uint)local_28;
      iVar6 = *piVar5;
      local_34 = *(uint *)(iVar6 + 0x20);
      if (iVar6 != piVar5[1]) {
        if ((*(int *)(iVar6 + 0x2c) <= local_28._4_4_) &&
           (((*(int *)(iVar6 + 0x2c) < local_28._4_4_ || (*(uint *)(iVar6 + 0x28) <= uVar11)) &&
            (uVar12 = *(uint *)(iVar6 + 0x34), uVar11 = (uint)local_28,
            lVar16 < CONCAT44(((int)uVar12 >> 0x1f) + *(int *)(iVar6 + 0x2c) +
                              (uint)CARRY4(uVar12,*(uint *)(iVar6 + 0x28)),
                              uVar12 + *(uint *)(iVar6 + 0x28)))))) {
          iVar6 = (uint)local_28 - *(int *)(iVar6 + 0x28);
          uVar12 = uVar12 - iVar6;
          if ((int)(local_44 - iVar13) <= (int)uVar12) {
            uVar12 = local_44 - iVar13;
          }
          if (0 < (int)uVar12) {
            local_28 = lVar16;
            _SfAudio_Copy_24(param_1,(uint)*(ushort *)(param_1 + 0xc) * iVar13 + iVar3,local_3c,
                             (uint)*(ushort *)(local_3c + 0xc) * iVar6 + local_34,uVar12,0x3f800000)
            ;
            iVar13 = iVar13 + uVar12;
            uVar11 = uVar9 + uVar12;
            lVar16 = CONCAT44(local_28._4_4_ + ((int)uVar12 >> 0x1f) + (uint)CARRY4(uVar9,uVar12),
                              uVar11);
          }
        }
      }
      local_28 = lVar16;
      local_40 = local_40 + 1;
      piVar5 = piVar5 + 1;
      lVar16 = local_28;
    } while ((int)local_40 < *(int *)(iVar4 + 0xb8));
  }
  if (0 < iVar13) {
    if ((*(int *)(iVar4 + 0x38) != 0) || (*(int *)(iVar4 + 0x3c) != 0x3ff00000)) {
      local_18._0_4_ = *(undefined4 *)(iVar4 + 0x38);
      local_18._4_4_ = *(undefined4 *)(iVar4 + 0x3c);
      iStack_4 = 0;
      iVar6 = *(int *)(param_1 + 4);
      uVar17 = 0x2101;
      uVar11 = (uint)*(ushort *)(param_1 + 2);
      local_8 = iVar6;
      uVar7 = ftol(uVar11,0x2101);
      uVar8 = _SfAudio_GetSampleType_4(param_1);
      _SfAudio_ResampleOpen_24(&local_40,uVar8,iVar6,uVar7,uVar11,uVar17);
      iVar6 = iVar3;
      uVar7 = ftol(iVar3,iVar13);
      _SfAudio_ResampleStupid_20(local_40,iVar3,uVar7,iVar6,iVar13);
      _SfAudio_ResampleClose_4(local_40);
    }
    iVar13 = *(int *)(iVar4 + 0x34);
    uVar11 = *(uint *)(iVar4 + 0x28);
    local_28._4_4_ = *(int *)(iVar4 + 0x2c);
    local_4c = 0;
    if (0 < iVar13) {
      do {
        local_28._0_4_ = uVar11;
        uVar14 = __allrem(uVar11,local_28._4_4_,local_20,local_1c);
        uVar9 = (uint)uVar14;
        local_44 = uVar1 - uVar9;
        if (iVar13 - local_4c <= (int)(uVar1 - uVar9)) {
          local_44 = iVar13 - local_4c;
        }
        local_3c = uVar11 - uVar9;
        iStack_38 = (local_28._4_4_ - (int)((ulonglong)uVar14 >> 0x20)) - (uint)(uVar11 < uVar9);
        uVar11 = (uint)*(ushort *)(param_1 + 0xc);
        local_18._0_4_ = uVar9;
        iVar13 = ftol();
        local_34 = (uint)*(ushort *)(param_1 + 2);
        iVar6 = ((iVar13 - (int)local_10) + uVar9) * uVar11 + iVar3;
        iVar13 = local_34 * local_44 * 4;
        if (iVar3 + 0xa0000U <= (uint)(iVar6 + iVar13)) {
          return 0;
        }
        local_8 = local_20 + local_3c;
        iStack_4 = local_1c + iStack_38 + (uint)CARRY4(local_20,local_3c);
        iVar10 = ftol();
        iVar10 = (((iVar10 - (int)local_10) - uVar1) + (uint)local_18) * uVar11 + iVar3;
        if (iVar3 + 0xa0000U <= (uint)(iVar13 + iVar10)) {
          return 0;
        }
        FUN_00590b30(uVar11 * local_4c + local_2c,iVar6,iVar10,(uint)local_18,uVar1,
                     *(undefined4 *)(iVar4 + 0x50),local_44,local_34);
        local_4c = local_4c + local_44;
        uVar11 = (uint)local_28 + local_44;
        iVar13 = *(int *)(iVar4 + 0x34);
        local_28._4_4_ =
             local_28._4_4_ + ((int)local_44 >> 0x1f) + (uint)CARRY4((uint)local_28,local_44);
      } while (local_4c < iVar13);
    }
  }
  return 0;
}


