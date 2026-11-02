/* Module: vegas30.exe
   Function: FUN_0046e540
   Address: 0046e540
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046e540(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  HWND pHVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_78;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  HCURSOR local_60;
  undefined4 local_5c;
  int local_58;
  undefined1 local_54 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined **local_30 [12];
  
  local_64 = 0;
  if ((DAT_00647890 != 0) || (pHVar2 = GetClipboardOwner(), pHVar2 != *(HWND *)(param_1 + 4))) {
    FUN_0046dbf0(param_1);
  }
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  if (**(int **)(param_1 + 0xcd4) < 1) {
    return;
  }
  iVar3 = FUN_0046e4a0(param_1,*(int **)(param_1 + 0xcd4),&local_64);
  if (iVar3 == 0) {
    return;
  }
  local_5c = _SfGetMillisec_0();
  local_60 = (HCURSOR)0x0;
  FUN_004694a0(*(undefined4 *)(param_1 + 0xcd4),0,0,&local_38,0,0,local_54);
  local_40 = (double)CONCAT44(uStack_34,local_38);
  local_78 = 1;
  if (param_3 < 1) {
    local_40 = (double)CONCAT44(DAT_006488a4,DAT_006488a0);
    local_6c = DAT_00648898;
    local_78 = DAT_00648894;
    param_3 = DAT_0064889c;
    iVar3 = FUN_005014c0(*(undefined4 *)(param_1 + 4),&param_3,&local_40,&local_78,&local_6c);
    if (iVar3 != 0) {
      if (-1 < iVar3) {
        return;
      }
      _SfErrorHandler_MsgBox_24(*(undefined4 *)(param_1 + 4),0x30,8,iVar3,0,0);
      return;
    }
    DAT_006488a0 = (undefined4)local_40;
    DAT_006488a4 = local_40._4_4_;
    DAT_00648894 = local_78;
    DAT_00648898 = local_6c;
    DAT_0064889c = param_3;
  }
  FUN_0049d860(param_1);
  FUN_004e9f70(uVar1,0x17,0);
  FUN_004ea880(uVar1);
  local_50 = *(undefined4 *)(param_1 + 0xb70);
  local_4c = *(undefined4 *)(param_1 + 0xb74);
  if ((*(int *)(param_1 + 0xbc8) == 0) ||
     (iVar3 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar3 == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = _DAT_00000000;
    if (*(int *)(param_1 + 0xbc8) != 0) {
      piVar4 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      iVar3 = *piVar4;
    }
  }
  iVar6 = *(int *)(param_1 + 0xcbc);
  if ((iVar6 < 0) || (iVar3 <= iVar6)) {
    iVar6 = 0;
  }
  _SfList_Sort_12(*(undefined4 *)(param_1 + 0xcd4),0,&LAB_0046b9b0);
  uVar7 = __allmul(param_3,param_3 >> 0x1f,local_38,uStack_34);
  if (local_78 == 0) {
    uVar7 = ftol();
  }
  local_68 = 0;
  FUN_004694a0(*(undefined4 *)(param_1 + 0xcd4),0,&local_68,0,0,0,0);
  local_30[0] = &PTR_FUN_0061296c;
  local_6c = FUN_0046a990(uVar1,param_1,local_68);
  if (param_2 == 0) {
    if (DAT_00647784 == 0) goto LAB_0046e80e;
    FUN_0046a9b0(iVar3,iVar6);
    FUN_0046bc80(param_1,*(undefined4 *)(param_1 + 0xcd4),iVar6,local_30,local_50,local_4c);
    uVar10 = 0;
    uVar9 = 0x100000;
  }
  else {
    uVar9 = 0;
    uVar10 = DAT_0064a588;
  }
  FUN_0046cb60(param_1,uVar9,local_50,local_4c,uVar7,1,uVar10,0,1);
LAB_0046e80e:
  uVar10 = local_50;
  iVar5 = 0;
  if (0 < param_3) {
    do {
      local_48._0_4_ = *(undefined4 *)(param_1 + 0xb70);
      local_48._4_4_ = *(undefined4 *)(param_1 + 0xb74);
      FUN_0046a9b0(iVar3,iVar6);
      local_6c = FUN_0046af80(param_1,*(undefined4 *)(param_1 + 0xcd4),
                              *(undefined4 *)(param_1 + 0xcd0),*(undefined4 *)(param_1 + 0xb70),
                              *(undefined4 *)(param_1 + 0xb74),&local_48,iVar6,0xffffffff,local_30,
                              local_5c,&local_60,local_64);
      lVar8 = CONCAT44(local_48._4_4_,(uint)local_48);
      local_48 = lVar8;
      if (local_6c < 0) goto LAB_0046e936;
      if (local_78 == 0) {
        local_58 = iVar5 + 1;
        lVar8 = ftol();
        lVar8 = lVar8 + CONCAT44(local_4c,uVar10);
      }
      local_48._4_4_ = (int)((ulonglong)lVar8 >> 0x20);
      local_48._0_4_ = (uint)lVar8;
      if ((*(int *)(param_1 + 0xccc) <= local_48._4_4_) &&
         ((*(int *)(param_1 + 0xccc) < local_48._4_4_ ||
          (*(uint *)(param_1 + 0xcc8) < (uint)local_48)))) {
        *(longlong *)(param_1 + 0xcc8) = lVar8;
        local_48 = lVar8;
        FUN_00457e90(param_1,lVar8);
        lVar8 = local_48;
      }
      local_48 = lVar8;
      FUN_00453970(param_1,lVar8,0);
      FUN_00455090(param_1,0xf);
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_3);
  }
  if (-1 < local_6c) {
    FUN_0046ee50(param_1);
    FUN_004eb2b0(uVar1);
  }
LAB_0046e936:
  FUN_004ea040(uVar1,0);
  FUN_005c9070(uVar1,*(undefined4 *)(param_1 + 0xcd0),0xffffffff,0x10);
  FUN_0048f940(*(undefined4 *)(param_1 + 0xbc8),*(undefined4 *)(param_1 + 0xcd0),2);
  FUN_005da080(*(undefined4 *)(param_1 + 0xbc8),*(undefined4 *)(param_1 + 0xcd0));
  if (local_60 != (HCURSOR)0x0) {
    SetCursor(local_60);
  }
  FUN_00456c20(param_1);
  DAT_0064767c = DAT_0064767c | 4;
  if (local_6c < 0) {
    _SfErrorHandler_MsgBox_24(*(undefined4 *)(param_1 + 4),0x30,8,local_6c,0,0);
  }
  FUN_0046ac50();
  return;
}


