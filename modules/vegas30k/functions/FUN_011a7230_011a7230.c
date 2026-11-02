/* Module: vegas30k.dll
   Function: FUN_011a7230
   Address: 011a7230
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x011a7347) */
/* WARNING: Removing unreachable block (ram,0x011a74d1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_011a7230(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            uint param_10,int param_11,undefined4 param_12,undefined4 param_13,undefined4 param_14)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int unaff_EDI;
  _tag_looppoint *p_Var8;
  bool bVar9;
  longlong lVar10;
  uint local_54;
  uint local_50;
  int local_4c;
  longlong local_48;
  longlong local_40;
  _tag_looppoint local_38 [56];
  
  local_4c = param_11;
  local_50 = param_10;
  puVar7 = (undefined4 *)(param_2 + 0x728);
  p_Var8 = local_38;
  for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)p_Var8 = *puVar7;
    puVar7 = puVar7 + 1;
    p_Var8 = p_Var8 + 4;
  }
  local_54 = 1;
  local_40 = FUN_011a7070(param_3);
  if (((param_5 & 0x20000000) == 0) && (*(int *)(param_1 + 0x6c) == 0)) {
    if (*(int *)(param_1 + 0x90) == 0) {
      param_5 = param_5 & 0xefffffff;
    }
    else {
      param_5 = param_5 | 0x10000000;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x80) = param_8;
    *(undefined4 *)(param_1 + 0x6c) = 1;
    *(undefined4 *)(param_1 + 0x84) = param_9;
    local_40 = 0;
  }
  puVar1 = (uint *)(param_1 + 0x80);
  local_48 = local_40;
  SFMixer_BoundbyLoop(local_38,CONCAT44(*(undefined4 *)(param_1 + 0x80),
                                        *(undefined4 *)(param_1 + 0x8c)),
                      CONCAT44(&local_50,*(undefined4 *)(param_1 + 0x84)),
                      (__int64 *)(uint)((double)CONCAT44(param_7,param_6) < _DAT_011db3f0),unaff_EDI
                     );
  while ((local_48 < CONCAT44(param_11,param_10) || (local_54 != 0))) {
    uVar3 = (**(code **)(param_1 + 0x2c))
                      (param_2,0x20,*(undefined4 *)(param_1 + 0x30),param_3,param_4,param_5,param_6,
                       param_7,*puVar1,*(undefined4 *)(param_1 + 0x84),local_50,local_4c,param_12,
                       param_13,param_14);
    iVar5 = local_4c;
    uVar2 = local_50;
    if (uVar3 == 0xfffffffd) {
      return 0xfffffffd;
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    iVar6 = (int)uVar3 >> 0x1f;
    if (uVar3 == 0xfffffffe) {
      _SfAudio_FillSilence_12(param_3,param_4,local_50);
      iVar6 = iVar5;
      uVar3 = uVar2;
    }
    FUN_011a6ed0(param_4,param_3,param_5,*puVar1,*(undefined4 *)(param_1 + 0x84),local_50,local_4c,
                 uVar3,iVar6);
    lVar10 = FUN_011a7070(param_3);
    if (*(int *)(param_1 + 0x94) == 0) {
      if (*(int *)(param_1 + 0x98) == 0) {
        if (lVar10 == local_40) {
          *(undefined4 *)(param_1 + 0x98) = 1;
        }
        else if (lVar10 < CONCAT44(iVar6,uVar3)) {
          *(undefined4 *)(param_1 + 0x9c) = 1;
          *(undefined4 *)(param_1 + 0x94) = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x94) = 1;
        }
      }
      else if (lVar10 != 0) {
        local_48 = lVar10;
        local_54 = __alldiv(lVar10,param_10,param_11);
        if ((local_54 & 0xfffffffc) < 5) {
          local_54 = local_54 >> 2;
        }
        else {
          local_54 = 1;
        }
        *(undefined4 *)(param_1 + 0x94) = 1;
        *(uint *)(param_1 + 0x98) = local_54;
        lVar10 = local_48;
      }
    }
    uVar2 = *puVar1;
    if ((double)CONCAT44(param_7,param_6) < _DAT_011db3f0) {
      *puVar1 = uVar2 - uVar3;
      iVar5 = (*(int *)(param_1 + 0x84) - iVar6) - (uint)(uVar2 < uVar3);
    }
    else {
      *puVar1 = uVar2 + uVar3;
      iVar5 = *(int *)(param_1 + 0x84) + iVar6 + (uint)CARRY4(uVar2,uVar3);
    }
    *(int *)(param_1 + 0x84) = iVar5;
    if ((uVar3 == local_50) && (iVar6 == local_4c)) {
      local_50 = param_10;
      local_4c = param_11;
    }
    else {
      bVar9 = local_50 < uVar3;
      local_50 = local_50 - uVar3;
      local_4c = (local_4c - iVar6) - (uint)bVar9;
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
    param_5 = param_5 & 0xcfffffff;
    local_48 = lVar10;
    lVar4 = SFMixer_AdjustforLoop
                      (local_38,CONCAT44(puVar1,*(undefined4 *)(param_1 + 0x8c)),
                       (__int64 *)(uint)((double)CONCAT44(param_7,param_6) < _DAT_011db3f0),
                       unaff_EDI);
    if (lVar4 == 0) {
      *(undefined4 *)(param_1 + 0x90) = 1;
      param_5 = param_5 | 0x10000000;
    }
    SFMixer_BoundbyLoop(local_38,CONCAT44(*puVar1,*(undefined4 *)(param_1 + 0x8c)),
                        CONCAT44(&local_50,*(undefined4 *)(param_1 + 0x84)),
                        (__int64 *)(uint)((double)CONCAT44(param_7,param_6) < _DAT_011db3f0),
                        unaff_EDI);
    if (local_54 != 0) {
      local_54 = local_54 - 1;
    }
  }
  return (undefined4)local_48;
}


