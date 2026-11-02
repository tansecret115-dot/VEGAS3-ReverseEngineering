/* Module: vegas30k.dll
   Function: FUN_011af6c0
   Address: 011af6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x011af80d) */
/* WARNING: Removing unreachable block (ram,0x011afb5f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_011af6c0(int *param_1,tWAVEFORMATEX *param_2,void *param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,int param_7,int param_8,uint param_9,int param_10,undefined4 param_11
            ,int param_12,undefined4 param_13)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint unaff_EBP;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  int unaff_retaddr;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  tWAVEFORMATEX *ptVar15;
  uint local_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  longlong lStack_50;
  longlong lStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_4;
  
  local_58 = param_11;
  local_54 = param_12;
  local_5c = (*(int *)(param_1[0xb] + 0x7ec) << 0xe) >> 0x1f;
  local_60 = param_1[0x13b];
  ptVar15 = param_2;
  (**(code **)(*(int *)param_2 + 0xf0))(param_2,&local_38);
  lStack_48 = FUN_011a0640(param_2);
  if (((param_4 & 0x20000000) == 0) && (param_1[0x136] == 0)) {
    if (param_1[0x13d] == 0) {
      param_4 = param_4 & 0xefffffff;
    }
    else {
      param_4 = param_4 | 0x10000000;
    }
  }
  else {
    param_1[0x152] = param_7;
    param_1[0x136] = 1;
    param_1[0x153] = param_8;
    lStack_48 = 0;
  }
  puVar1 = (uint *)(param_1 + 0x152);
  lStack_50 = lStack_48;
  SFMixer_BoundbyLoop((_tag_looppoint *)&uStack_40,CONCAT44(*puVar1,param_1[0x14d]),
                      CONCAT44(&local_60,param_1[0x153]),
                      (__int64 *)(uint)((double)CONCAT44(param_6,param_5) < _DAT_011db3f0),
                      (int)ptVar15);
  while( true ) {
    if ((CONCAT44(param_10,param_9) <= lStack_50) && (unaff_EBP == 0)) {
      return (undefined4)lStack_50;
    }
    uVar13 = param_5;
    uVar14 = param_6;
    lVar9 = (**(code **)(*param_1 + 0x1b0))
                      (param_3,*puVar1,param_1[0x153],local_60,local_5c,param_4,param_5,param_6,
                       param_11,param_12,param_13);
    if (lVar9 == -3) {
      return 0xfffffffd;
    }
    uVar7 = param_4;
    uVar10 = uStack_1c;
    uVar11 = uStack_18;
    iVar4 = iStack_4;
    iVar12 = unaff_retaddr;
    lVar9 = (**(code **)(*param_1 + 400))
                      (param_3,*puVar1,param_1[0x153],uVar13,uVar14,param_4,uStack_1c,uStack_18,
                       iStack_4,unaff_retaddr,param_2);
    if (lVar9 == -3) break;
    if (uVar7 != 0) {
      if ((iVar4 == -2) && (iVar12 == -1)) {
        _SfAudio_FillSilence_12(local_54,param_3,local_38);
        iVar2 = local_38;
        iVar3 = FUN_011a0940(param_3,uStack_40,uStack_3c,local_38,iStack_34,param_4,lStack_48,
                             uStack_30,uStack_2c,uStack_28);
        if (iVar3 == 0) {
          iVar4 = iVar2;
          iVar12 = iStack_34;
        }
      }
      else {
        FUN_011a0940(param_3,uStack_40,uStack_3c,iVar4,iVar12,param_4,lStack_48,uStack_30,uStack_2c,
                     uStack_28);
      }
    }
    param_1[0x13d] = 0;
    lVar9 = FUN_011968b0(param_3,uVar10,uVar11,iVar4,iVar12);
    if (lVar9 == -2) {
      _SfAudio_FillSilence_12(local_54,param_3,uVar10);
      lVar9 = CONCAT44(uVar11,uVar10);
    }
    uVar7 = (uint)lVar9;
    iVar4 = (*(code *)param_1[0x147])
                      (param_1,0x31,param_1[0x148],local_54,param_3,0,lStack_48,*puVar1,
                       param_1[0x153],lVar9,uStack_30,uStack_2c,uStack_28);
    if (iVar4 == -3) {
      return 0xfffffffd;
    }
    if (iVar4 != -4) {
      SfAudio_SetGain(param_3,param_2,uVar7,(double *)(param_1 + 0x24));
    }
    FUN_011a0480(param_3,param_2,param_4,*puVar1,param_1[0x153],local_60,local_5c,uVar7,local_54);
    lVar9 = FUN_011a0640(param_2);
    if (param_1[0x13a] == 0) {
      if (param_1[0x13b] == 0) {
        if (lVar9 == lStack_48) {
          param_1[0x13b] = 1;
        }
        else if (lVar9 < CONCAT44(local_54,uVar7)) {
          param_1[0x13c] = 1;
          param_1[0x13a] = 1;
        }
        else {
          param_1[0x13a] = 1;
        }
      }
      else if (lVar9 != 0) {
        lStack_50 = lVar9;
        uVar5 = __alldiv(lVar9,param_9,param_10);
        if ((uVar5 & 0xfffffffc) < 5) {
          unaff_EBP = uVar5 >> 2;
        }
        else {
          unaff_EBP = 1;
        }
        param_1[0x13a] = 1;
        param_1[0x13b] = unaff_EBP;
        lVar9 = lStack_50;
      }
    }
    uVar5 = *puVar1;
    if ((double)CONCAT44(param_6,param_5) < _DAT_011db3f0) {
      *puVar1 = uVar5 - uVar7;
      iVar4 = (param_1[0x153] - local_54) - (uint)(uVar5 < uVar7);
    }
    else {
      *puVar1 = uVar5 + uVar7;
      iVar4 = param_1[0x153] + local_54 + (uint)CARRY4(uVar5,uVar7);
    }
    param_1[0x153] = iVar4;
    if ((uVar7 == local_60) && (local_54 == local_5c)) {
      local_60 = param_9;
      local_5c = param_10;
    }
    else {
      bVar8 = local_60 < uVar7;
      local_60 = local_60 - uVar7;
      local_5c = (local_5c - local_54) - (uint)bVar8;
    }
    param_1[0x136] = 0;
    param_4 = param_4 & 0xcfffffff;
    lStack_50 = lVar9;
    lVar6 = SFMixer_AdjustforLoop
                      ((_tag_looppoint *)&uStack_40,CONCAT44(puVar1,param_1[0x14d]),
                       (__int64 *)(uint)((double)CONCAT44(param_6,param_5) < _DAT_011db3f0),
                       (int)ptVar15);
    if (lVar6 == 0) {
      param_1[0x13d] = 1;
      param_4 = param_4 | 0x10000000;
    }
    SFMixer_BoundbyLoop((_tag_looppoint *)&uStack_40,CONCAT44(*puVar1,param_1[0x14d]),
                        CONCAT44(&local_60,param_1[0x153]),
                        (__int64 *)(uint)((double)CONCAT44(param_6,param_5) < _DAT_011db3f0),
                        (int)ptVar15);
    if (unaff_EBP != 0) {
      unaff_EBP = unaff_EBP - 1;
    }
  }
  return 0xfffffffd;
}


