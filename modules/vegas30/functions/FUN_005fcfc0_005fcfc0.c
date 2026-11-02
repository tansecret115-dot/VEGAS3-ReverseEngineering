/* Module: vegas30.exe
   Function: FUN_005fcfc0
   Address: 005fcfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_005fcfc0(undefined4 *param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,
                 undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int *unaff_EBX;
  uint uVar5;
  undefined4 unaff_EBP;
  undefined4 *puVar6;
  int iVar7;
  undefined4 unaff_EDI;
  undefined4 *puVar8;
  uint uVar9;
  int local_50;
  int local_4c;
  undefined4 *local_48;
  uint local_44;
  uint local_40;
  uint local_38;
  int local_34;
  uint local_28;
  int local_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int *piStack_4;
  
  iVar7 = param_10;
  uVar1 = param_2;
  local_48 = (undefined4 *)0x0;
  puVar6 = param_1;
  puVar8 = (undefined4 *)PTR_DAT_00646e70;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  DAT_00646e80 = param_3;
  DAT_00646e84 = param_4;
  DAT_00646e88 = param_5;
  DAT_00646e8c = param_6;
  local_4c = 0;
  DAT_00646e74 = param_10;
  DAT_00646e78 = param_2;
  DAT_00646e90 = param_7;
  DAT_00646e98 = param_8;
  DAT_00646e9c = param_9;
  iVar4 = Transport_IsPreviewStopped();
  if (iVar4 == 0) {
    return 1;
  }
  if (param_1 == (undefined4 *)0x0) {
    return -0x7fffbffb;
  }
  DAT_0065e530 = uVar1;
  if (iVar7 == 0) {
    local_40 = param_1[2];
    iVar4 = param_1[3];
    uVar9 = param_1[4];
    iVar7 = param_1[5];
    if (param_1[6] == 0) {
      local_50 = 0;
    }
    else {
      local_50 = FUN_005f13f0(2);
    }
    if (param_1[6] == 0) {
      local_4c = 0;
    }
    else {
      local_4c = FUN_005f13f0(3);
    }
    if ((local_50 != 0) &&
       ((local_44 = *(uint *)(*(int *)(local_50 + 8) + 0x134) >> 5 & 1, local_44 != 0 ||
        (local_44 = *(uint *)(local_50 + 0x8c) & 1, local_44 != 0)))) {
      local_50 = 0;
    }
    if ((local_4c != 0) &&
       ((local_44 = *(uint *)(*(int *)(local_4c + 8) + 0x134) >> 5 & 1, local_44 != 0 ||
        (local_44 = *(uint *)(local_4c + 0x8c) & 1, local_44 != 0)))) {
      local_4c = 0;
    }
    if ((local_50 == 0) && (local_4c == 0)) {
      return 1;
    }
    if ((iVar4 < 1) && ((iVar4 < 0 || (local_40 == 0)))) {
      local_40 = 0;
      iVar4 = 0;
    }
    if (((local_50 != 0) && (iVar7 < 1)) && (iVar7 < 0)) {
      uVar9 = *(uint *)(local_50 + 0x20) - local_40;
      iVar7 = (*(int *)(local_50 + 0x24) - iVar4) - (uint)(*(uint *)(local_50 + 0x20) < local_40);
    }
    if (local_4c != 0) {
      iVar2 = FUN_005f6990(&local_48);
      if (iVar2 < 0) {
        return 1;
      }
      uVar5 = DAT_00647e58;
      iVar2 = DAT_00647e5c;
      if (_DAT_00610fd8 != *(double *)(local_4c + 0x48)) {
        uVar5 = *(uint *)(local_4c + 0x20);
        iVar2 = *(int *)(local_4c + 0x24);
      }
      if ((iVar7 < 1) && (iVar7 < 0)) {
        uVar9 = uVar5 - local_40;
        iVar7 = (iVar2 - iVar4) - (uint)(uVar5 < local_40);
      }
      if ((iVar2 <= iVar7) && ((iVar2 < iVar7 || (uVar5 <= uVar9)))) {
        iVar7 = iVar2;
        uVar9 = uVar5;
      }
    }
    if (local_50 != 0) {
      iVar2 = *(int *)(local_50 + 0x24);
      if ((iVar2 <= iVar7) && ((iVar2 < iVar7 || (*(uint *)(local_50 + 0x20) <= uVar9)))) {
        iVar7 = iVar2;
        uVar9 = *(uint *)(local_50 + 0x20);
      }
    }
  }
  else {
    local_40 = param_1[2];
    iVar4 = param_1[3];
    uVar9 = *(uint *)(iVar7 + 0x20) + local_40;
    iVar7 = *(int *)(iVar7 + 0x24) + iVar4 + (uint)CARRY4(*(uint *)(iVar7 + 0x20),local_40);
    if (param_1[6] == 0) {
      local_50 = 0;
    }
    else {
      local_50 = FUN_005f13f0(2);
    }
  }
  DAT_0065e530 = param_2;
  DAT_0065e528 = DAT_0064b138;
  _DAT_0065e52c = DAT_00647630;
  Transport_SetClientContext(FUN_005fbce0,0x65e528);
  _DAT_0064b15c = DAT_0065e528;
  _DAT_0064b160 = local_50;
  _DAT_0064b164 = param_10;
  Mixer_SetContext(&DAT_0064b15c);
  local_18 = 0xffffffff;
  local_24 = param_6;
  local_14 = param_7;
  local_10 = param_7;
  local_38 = param_3;
  local_34 = param_4;
  local_28 = param_5;
  local_c = DAT_00647794;
  if ((-1 < param_4) && (-1 < param_6)) {
    iVar2 = param_4 + param_6 + (uint)CARRY4(param_3,param_5);
    if ((iVar2 <= iVar4) && ((iVar2 < iVar4 || (param_3 + param_5 < local_40)))) {
      local_14 = 0;
    }
  }
  uVar5 = 0;
  local_8 = 0;
  iVar2 = Transport_IsRecMonitoring();
  if ((iVar2 != 0) && (iVar2 = Transport_IsPlaying(), iVar2 == 0)) {
    FUN_005fb710(0xffffffff);
    uVar5 = 0x10800000;
  }
  if (local_50 != 0) {
    uVar5 = uVar5 | 0x20000000;
  }
  if (local_4c != 0) {
    param_2 = 0;
    uVar5 = uVar5 | 0xa0000000;
    (**(code **)*local_48)(local_48,&DAT_00633558,&param_2);
    if (piStack_4 != (int *)0x0) {
      FUN_00428df0(piStack_4,unaff_EBP);
      (**(code **)(*piStack_4 + 8))(piStack_4);
    }
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    local_48 = (undefined4 *)0x0;
  }
  param_2 = FUN_005ec620();
  if ((param_1[6] != 0) && (param_2 != 0)) {
    FUN_005b83b0(DAT_0064b138,1);
    FUN_005ed3f0(param_1[6]);
    FUN_005b84d0(DAT_0064b138,1);
    DAT_0064b148 = local_50;
    DAT_0064b14c = local_4c;
  }
  FUN_00429130(param_7,local_40,iVar4,param_3,param_4,param_5,param_6);
  _DAT_0065e534 = uVar5;
  Transport_SetClientContext(FUN_005fbce0,0x65e528);
  lVar3 = Transport_StartPreview
                    (CONCAT44(iVar4,local_40),CONCAT44(iVar7,uVar9),(_tag_looppoint *)&local_38,
                     (double)CONCAT44(unaff_EDI,param_9));
  if (lVar3 < 0) {
    _SfErrorHandler_MsgBox_24(DAT_00647624,0x30,0xb,lVar3,0,0);
    if ((uVar5 & 0x800000) != 0) {
      FUN_005fb6a0(0xffffffff);
    }
    if ((param_1[6] != 0) && (param_2 != 0)) {
      FUN_005b83b0(DAT_0064b138,1);
      FUN_005ed410(param_1[6],0,0);
      FUN_005b84d0(DAT_0064b138,1);
      DAT_0064b148 = 0;
      DAT_0064b14c = 0;
    }
  }
  return lVar3;
}


