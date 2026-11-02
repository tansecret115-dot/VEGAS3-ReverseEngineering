/* Module: vegas30k.dll
   Function: FUN_01195e70
   Address: 01195e70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x01196138) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_01195e70(int *param_1,undefined4 param_2,int param_3,uint param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint local_440;
  int local_43c;
  uint local_438;
  int local_434;
  int local_430;
  undefined8 uStack_42c;
  double dStack_424;
  uint uStack_41c;
  int iStack_414;
  int iStack_410;
  int iStack_40c;
  int local_408;
  int iStack_404;
  int aiStack_400 [256];
  
  local_430 = param_1[0x20f];
  uVar8 = param_1[0x234];
  local_434 = param_1[0x235];
  local_440 = 0;
  local_43c = 0;
  local_438 = 0;
  if ((local_434 < 1) && (local_434 < 0)) {
    _SfAudio_FillSilence_12((int)param_1 + 0x50a,param_3,param_4);
    return param_4;
  }
  if (uVar8 != 0 || local_434 != 0) {
    if ((param_5 <= local_434) && ((param_5 < local_434 || (param_4 < uVar8)))) {
      local_434 = param_5;
      uVar8 = param_4;
    }
    _SfAudio_FillSilence_12((int)param_1 + 0x50a,param_3,uVar8);
    uVar5 = param_1[0x234];
    param_1[0x234] = uVar5 - uVar8;
    param_1[0x235] = (param_1[0x235] - local_434) - (uint)(uVar5 < uVar8);
    if (param_1[0x234] != 0 || param_1[0x235] != 0) {
      return param_4;
    }
    param_3 = param_3 + *(ushort *)((int)param_1 + 0x516) * uVar8;
    bVar9 = param_4 < uVar8;
    param_4 = param_4 - uVar8;
    param_5 = (param_5 - local_434) - (uint)bVar9;
    local_438 = uVar8;
  }
  uVar8 = param_1[0x1ae];
  uVar5 = param_1[0x1af];
  if ((uVar8 & uVar5) != 0xffffffff) {
    iVar3 = param_1[0x22b];
    uVar12 = param_1[0x22a];
    if ((iVar3 <= (int)uVar5) && ((iVar3 < (int)uVar5 || (uVar12 < uVar8)))) {
      iVar3 = (uVar5 - iVar3) - (uint)(uVar8 < uVar12);
      if ((iVar3 <= param_5) && ((iVar3 < param_5 || (uVar8 - uVar12 <= param_4)))) {
        param_4 = uVar8 - uVar12;
        param_5 = iVar3;
      }
    }
  }
  if ((((param_1[8] & 0x4000U) != 0) && (param_1[0x216] == 0)) && (param_1[0x217] == 0)) {
    _SfAudio_FillSilence_12((int)param_1 + 0x50a,param_3,param_4);
    SetEvent((HANDLE)param_1[0x204]);
    return local_438 + param_4;
  }
  if (((param_1[0x228] == 0) && (param_1[0x229] == 0)) &&
     ((param_1[0x12] != 0 &&
      ((**(code **)(*param_1 + 0xf8))(param_1,&local_408), local_408 == 0 && iStack_404 == 0)))) {
    (**(code **)(*param_1 + 0x2c))(param_1,0,0,0);
  }
  FUN_01185430(param_4,param_5);
  lVar11 = CONCAT44(uStack_42c._4_4_,(uint)uStack_42c);
  if (_DAT_011db3f0 == *(double *)(param_1 + 0x18)) {
    _SfAudio_FillSilence_12((int)param_1 + 0x50a,param_3,param_4);
    SetEvent((HANDLE)param_1[0x204]);
    uVar8 = param_1[0x22a];
    param_1[0x22a] = uVar8 + param_4;
    param_1[0x22b] = param_1[0x22b] + param_5 + (uint)CARRY4(uVar8,param_4);
    return local_438 + param_4;
  }
  while( true ) {
    iStack_410 = param_4 - local_440;
    iStack_40c = (param_5 - local_43c) - (uint)(param_4 < local_440);
    lVar10 = CONCAT44(iStack_40c,iStack_410);
    dStack_424 = (double)lVar10;
    if ((param_1[0x18] != 0) || (param_1[0x19] != 0x3ff00000)) {
      dStack_424 = dStack_424 * *(double *)(param_1 + 0x18);
      uStack_42c = lVar11;
      lVar10 = ftol();
      lVar11 = uStack_42c;
      if (*(longlong *)(param_1 + 0x210) <= lVar10) {
        lVar10 = *(longlong *)(param_1 + 0x210);
      }
    }
    uStack_42c = lVar11;
    lVar11 = FUN_011856e0(&local_430,lVar10);
    uVar8 = (uint)lVar11;
    if (lVar11 == -1) break;
    if (lVar11 == -2) {
      uVar5 = param_4 - local_440;
      uStack_42c._4_4_ = (param_5 - local_43c) - (uint)(param_4 < local_440);
      uStack_42c._0_4_ = uVar8;
      _SfAudio_FillSilence_12
                ((int)param_1 + 0x50a,*(ushort *)((int)param_1 + 0x516) * local_440 + param_3,uVar5)
      ;
      lVar11 = CONCAT44(uStack_42c._4_4_,(uint)uStack_42c);
      bVar9 = CARRY4(local_440,uVar5);
      local_440 = local_440 + uVar5;
      local_43c = local_43c + uStack_42c._4_4_ + (uint)bVar9;
      goto LAB_01196455;
    }
    if (lVar10 != lVar11) {
      dStack_424 = (double)lVar11;
    }
    if (((param_1[399] == 0) || ((param_1[8] & 0x1860U) == 0)) ||
       (*(double *)(param_1 + 0x18) == _DAT_011db3f0)) goto LAB_01196455;
    uStack_42c = lVar11;
    if ((param_1[0x18] != 0) || (param_1[0x19] != 0x3ff00000)) {
      lVar11 = ftol();
    }
    iStack_414 = (int)((ulonglong)lVar11 >> 0x20);
    uVar5 = (uint)lVar11;
    uVar1 = *(ushort *)(param_1 + 0x143);
    iVar3 = *(ushort *)((int)param_1 + 0x516) * local_440 + param_3;
    uVar2 = *(ushort *)((int)param_1 + 0x4fa);
    if (uVar1 == uVar2) {
      if (param_1[0x12] == 0) {
        _SfAudio_Copy_24((int)param_1 + 0x50a,iVar3,param_1 + 0x13e,local_430,uVar8,
                         (float)*(double *)(param_1 + 0x24));
        if ((param_1[0x18] != 0) || (lVar11 = uStack_42c, param_1[0x19] != 0x3ff00000)) {
          if (uVar8 == uVar5) {
            bVar9 = uStack_42c._4_4_ == iStack_414;
            goto LAB_01196259;
          }
          goto LAB_0119625f;
        }
      }
      else {
        _SfAudio_Reverse_24((int)param_1 + 0x50a,iVar3,param_1 + 0x13e,local_430,uVar8,
                            (float)*(double *)(param_1 + 0x24));
        if ((param_1[0x18] != 0) || (lVar11 = uStack_42c, param_1[0x19] != 0x3ff00000)) {
          if (uVar8 == uVar5) {
            bVar9 = uStack_42c._4_4_ == iStack_414;
LAB_01196259:
            lVar11 = uStack_42c;
            if (bVar9) goto LAB_0119630d;
          }
LAB_0119625f:
          uVar15 = 0;
          uVar14 = 0;
          uVar12 = uVar8;
          uVar13 = uVar5;
          uVar4 = _SfAudio_GetSampleType_4((int)param_1 + 0x50a);
          _SfAudio_ResampleReset_24(param_1[0x1a6],uVar4,uVar12,uVar13,uVar14,uVar15);
          _SfAudio_ResampleStupid_20(param_1[0x1a6],iVar3,uVar5,iVar3,uVar8);
          lVar11 = uStack_42c;
        }
      }
    }
    else {
      iVar6 = 0;
      if (uVar1 != 0) {
        uStack_41c = (uint)uVar1;
        dStack_424 = (double)CONCAT44(dStack_424._4_4_,(uint)uVar2);
        piVar7 = aiStack_400;
        do {
          *piVar7 = iVar6;
          iVar6 = iVar6 + 1;
          if ((int)(uint)uVar2 < iVar6) {
            iVar6 = 0;
          }
          piVar7 = piVar7 + 1;
          uStack_41c = uStack_41c - 1;
        } while (uStack_41c != 0);
      }
      _SfAudio_CopyChannels_24
                ((int)param_1 + 0x50a,iVar3,param_1 + 0x13e,local_430,uVar8,aiStack_400);
      lVar11 = uStack_42c;
    }
LAB_0119630d:
    uStack_42c._4_4_ = (int)((ulonglong)lVar11 >> 0x20);
    bVar9 = CARRY4(local_440,uVar5);
    local_440 = local_440 + uVar5;
    local_43c = local_43c + iStack_414 + (uint)bVar9;
    if (param_1[0x12] == 0) {
      uVar5 = param_1[0x212];
      param_1[0x212] = uVar5 + uVar8;
      param_1[0x213] = param_1[0x213] + uStack_42c._4_4_ + (uint)CARRY4(uVar5,uVar8);
    }
    uVar5 = param_1[0x216];
    param_1[0x216] = uVar5 - uVar8;
    param_1[0x217] = (param_1[0x217] - uStack_42c._4_4_) - (uint)(uVar5 < uVar8);
    if (param_1[0x12] == 0) {
      iVar3 = param_1[0x210] >> 0x1f;
      if ((iVar3 <= param_1[0x213]) &&
         ((iVar3 < param_1[0x213] || ((uint)param_1[0x210] <= (uint)param_1[0x212])))) {
        iVar3 = 0;
        param_1[0x212] = 0;
        goto LAB_011963b9;
      }
    }
    else if (param_1[0x212] == 0 && param_1[0x213] == 0) {
      iVar3 = param_1[0x211];
      param_1[0x212] = param_1[0x210];
LAB_011963b9:
      param_1[0x213] = iVar3;
    }
    if ((param_5 < local_43c) || ((param_5 <= local_43c && (param_4 <= local_440))))
    goto LAB_01196455;
  }
  local_440 = 0xfffffffe;
  local_43c = -1;
LAB_01196455:
  uStack_42c = lVar11;
  SetEvent((HANDLE)param_1[0x204]);
  if (-1 < local_43c) {
    uVar8 = param_1[0x22a];
    param_1[0x22a] = uVar8 + local_440;
    iVar3 = param_1[0x22b] + local_43c + (uint)CARRY4(uVar8,local_440);
    param_1[0x22b] = iVar3;
    if (param_1[0x1ac] != 0) {
      param_1[0x1ac] = 0;
      FUN_011af280(param_1[0x22a],iVar3,param_1);
    }
  }
  return local_440 + local_438;
}


