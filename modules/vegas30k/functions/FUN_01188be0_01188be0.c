/* Module: vegas30k.dll
   Function: FUN_01188be0
   Address: 01188be0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0118903a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
FUN_01188be0(int *param_1,tWAVEFORMATEX *param_2,undefined4 param_3,uint param_4,void *param_5,
            uint param_6,int param_7,int param_8,int param_9,uint param_10,undefined4 param_11,
            undefined4 param_12)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint unaff_EBP;
  undefined4 unaff_EDI;
  bool bVar8;
  longlong lVar9;
  code *unaff_retaddr;
  int iVar10;
  tWAVEFORMATEX *ptVar11;
  undefined4 *puVar12;
  uint local_58;
  int local_54;
  undefined8 local_50;
  longlong lStack_48;
  _tag_looppoint a_Stack_40 [4];
  code *pcStack_3c;
  undefined4 local_38 [2];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_4;
  
  local_50._0_4_ = param_12;
  local_50._4_4_ = 0;
  local_58 = param_1[0x13b];
  local_54 = (*(int *)(param_1[0xb] + 0x7ec) << 0xe) >> 0x1f;
  puVar12 = local_38;
  ptVar11 = param_2;
  (**(code **)(*(int *)param_2 + 0xf0))(param_2,puVar12);
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
    param_1[0x152] = param_8;
    param_1[0x136] = 1;
    param_1[0x153] = param_9;
    lStack_48 = 0;
  }
  puVar1 = (uint *)(param_1 + 0x152);
  local_50 = lStack_48;
  SFMixer_BoundbyLoop(a_Stack_40,CONCAT44(param_1[0x152],param_1[0x14d]),
                      CONCAT44(&local_58,param_1[0x153]),
                      (__int64 *)(uint)((double)CONCAT44(param_7,param_6) < _DAT_011db3f0),
                      (int)ptVar11);
  do {
    if ((-1 < local_50) &&
       (((0xffffffff < local_50 || (param_10 <= (uint)local_50)) && (unaff_EBP == 0)))) {
      return (uint)local_50;
    }
    iVar3 = param_1[0x14a];
    uVar5 = param_6;
    iVar10 = param_7;
    uVar2 = (*unaff_retaddr)(param_1,0x20,param_3,param_2,param_5);
    uVar4 = uStack_2c;
    iVar7 = (int)uVar2 >> 0x1f;
    if (uVar2 == 0xfffffffd) {
      return 0xfffffffd;
    }
    if ((param_4 & 0x30000000) == 0 && iVar3 == 0) {
LAB_01188e74:
      if ((uVar2 == 0xfffffffe) && (iVar7 == -1)) goto LAB_01188e7e;
    }
    else {
      if (uVar2 != 0xfffffffe) {
        FUN_011a0a60(uStack_2c,*puVar1,param_1[0x153],uVar2,iVar7,uStack_30,uStack_28,uStack_24,
                     uStack_14,uStack_10,uStack_c);
        goto LAB_01188e74;
      }
      _SfAudio_FillSilence_12(local_38[0],uStack_2c,uVar5);
      uVar2 = uVar5;
      iVar7 = iVar10;
      iVar3 = FUN_011a0a60(uVar4,*puVar1,param_1[0x153],uVar5,iVar10,uStack_30,uStack_28,uStack_24,
                           uStack_14,uStack_10,uStack_c);
      uVar5 = uVar2;
      iVar10 = iVar7;
      if (iVar3 == 0) goto LAB_01188e74;
LAB_01188e7e:
      iVar7 = iVar10;
      uVar2 = uVar5;
      _SfAudio_FillSilence_12(local_38[0],uStack_2c,uVar2);
    }
    iVar3 = (*pcStack_3c)(param_1,0x32,param_1[0x148],local_38[0],uStack_2c,0,uStack_28,uStack_24,
                          *puVar1,param_1[0x153],uVar2,iVar7,uStack_14,uStack_10,uStack_c);
    if (iVar3 == -3) {
      return 0xfffffffd;
    }
    if ((param_1[100] == 0) && (param_1[0x65] == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    (**(code **)(*param_1 + 0xb4))
              (param_1,*puVar1,param_1[0x153],unaff_EDI,uVar2,iVar7,0,0x3ff00000,0,
               (uint)puVar12 & 0x10000000,uVar4);
    if (iStack_4 != -4) {
      SfAudio_SetGain(param_5,param_2,uVar2,(double *)(param_1 + 0x44));
    }
    param_1[0x13d] = 0;
    FUN_011a0480(param_5,param_2,param_4,*puVar1,param_1[0x153],local_58,local_54,uVar2,iVar7);
    lVar9 = FUN_011a0640(param_2);
    if (param_1[0x13a] == 0) {
      if (param_1[0x13b] == 0) {
        if (lVar9 == lStack_48) {
          param_1[0x13b] = 1;
        }
        else if (lVar9 < CONCAT44(iVar7,uVar2)) {
          param_1[0x13c] = 1;
          param_1[0x13a] = 1;
        }
        else {
          param_1[0x13a] = 1;
        }
      }
      else if (lVar9 != 0) {
        local_50 = lVar9;
        uVar5 = __alldiv(lVar9,param_10,0);
        if ((uVar5 & 0xfffffffc) < 5) {
          unaff_EBP = uVar5 >> 2;
        }
        else {
          unaff_EBP = 1;
        }
        param_1[0x13a] = 1;
        param_1[0x13b] = unaff_EBP;
        lVar9 = local_50;
      }
    }
    uVar5 = *puVar1;
    *puVar1 = uVar5 + uVar2;
    param_1[0x153] = param_1[0x153] + iVar7 + (uint)CARRY4(uVar5,uVar2);
    if ((uVar2 == local_58) && (iVar7 == local_54)) {
      local_58 = param_10;
      local_54 = 0;
    }
    else {
      bVar8 = local_58 < uVar2;
      local_58 = local_58 - uVar2;
      local_54 = (local_54 - iVar7) - (uint)bVar8;
    }
    bVar8 = (double)CONCAT44(param_7,param_6) < _DAT_011db3f0;
    param_4 = param_4 & 0xcfffffff;
    param_1[0x136] = 0;
    local_50 = lVar9;
    lVar6 = SFMixer_AdjustforLoop
                      (a_Stack_40,CONCAT44(puVar1,param_1[0x14d]),(__int64 *)(uint)bVar8,
                       (int)ptVar11);
    if (lVar6 == 0) {
      param_1[0x13d] = 1;
      param_4 = param_4 | 0x10000000;
    }
    SFMixer_BoundbyLoop(a_Stack_40,CONCAT44(*puVar1,param_1[0x14d]),
                        CONCAT44(&local_58,param_1[0x153]),
                        (__int64 *)(uint)((double)CONCAT44(param_7,param_6) < _DAT_011db3f0),
                        (int)ptVar11);
    if (unaff_EBP != 0) {
      unaff_EBP = unaff_EBP - 1;
    }
  } while( true );
}


