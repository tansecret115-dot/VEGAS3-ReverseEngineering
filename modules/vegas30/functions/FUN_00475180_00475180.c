/* Module: vegas30.exe
   Function: FUN_00475180
   Address: 00475180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00475180(HDC param_1,undefined4 param_2,int *param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  COLORREF color;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  uint local_70;
  undefined4 local_6c;
  RECT local_68;
  undefined8 local_58;
  LONG local_50;
  LONG local_4c;
  undefined1 local_48 [40];
  int local_20;
  
  iVar1 = *param_3;
  local_68.top = *(LONG *)(param_4 + 0x24);
  iVar2 = param_3[0x11];
  local_68.left = *(LONG *)(param_4 + 0x20);
  local_70 = 0;
  local_6c = DAT_0064b138;
  if (*(int *)(iVar1 + 4) != 3) {
    local_58._0_4_ = *(LONG *)(iVar2 + 0x20);
    local_58._4_4_ = *(LONG *)(iVar2 + 0x24);
    local_50 = *(LONG *)(iVar2 + 0x28);
    local_4c = *(LONG *)(iVar2 + 0x2c);
    color = SetBkColor(param_1,0x800080);
    InflateRect((LPRECT)&local_58,0,-5);
    local_68.top = local_58._4_4_;
    local_68.left = (LONG)local_58;
    local_68.right = local_50;
    local_68.bottom = local_4c;
    ExtTextOutA(param_1,0,0,2,&local_68,(LPCSTR)0x0,0,(INT *)0x0);
    SetBkColor(param_1,color);
    return 1;
  }
  fVar7 = (float10)FUN_005c9630(DAT_0064b138,iVar1,0,local_48,0,0);
  local_58 = (double)fVar7;
  if (*(int *)(iVar2 + 0xdc) == 0) {
    FUN_004725d0(local_6c,iVar1,local_68.left,local_68.top,iVar2);
    iVar3 = FUN_00543700(iVar2 + 0xdc,DAT_0064777c);
    if (-1 < iVar3) {
      FUN_005438c0(*(undefined4 *)(iVar2 + 0xdc),iVar2 + 0xb8,0);
      uVar4 = DAT_00647630;
      if ((*(uint *)(param_4 + 0x58) & 0x100) != 0) {
        uVar4 = FUN_004e4c90();
      }
      FUN_00543ac0(*(undefined4 *)(iVar2 + 0xdc),&LAB_00472400,iVar1,FUN_00472440,uVar4,
                   *(undefined4 *)(iVar1 + 0x30),200);
      if ((local_20 != 0) && (local_20 != -1)) {
        FUN_005438a0(*(undefined4 *)(iVar2 + 0xdc),0x1c);
      }
    }
  }
  FUN_00472670(local_6c,&local_70,iVar1,local_68.left,local_68.top,iVar2,
               *(undefined4 *)(param_4 + 0x28),(LONG)local_58,local_58._4_4_);
  local_70 = ((int)(local_70 << 0x1e) >> 0x1e ^ local_70) & 2 ^ local_70 | (DAT_00647764 & 1) << 1;
  if (((DAT_00647770 == 0) || ((*(uint *)(param_4 + 0x58) & 0x100) == 0)) ||
     (iVar3 = Transport_IsPreviewPlaying(), iVar3 != 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  local_70 = local_70 ^ (((int)(local_70 << 0x1f) >> 0x1f | uVar5) ^ local_70) & 1;
  uVar6 = *(uint *)(param_4 + 0x28) & 1;
  uVar5 = ((int)(local_70 << 0x1d) >> 0x1d ^ local_70) & 4 ^ local_70 | (uVar6 | 2) << 2;
  local_70 = ((int)(uVar5 << 0x1b) >> 0x1b ^ uVar5) & 0x10 ^ uVar5 | uVar6 << 4;
  if (((*(int *)(iVar1 + 0x50) != 0) &&
      (iVar3 = *(int *)(*(int *)(iVar1 + 0x50) + 0x18), iVar3 != 0)) &&
     ((*(byte *)(iVar3 + 0x134) & 2) == 0)) {
    uVar4 = FUN_00472b00(local_6c,param_1,param_3,param_5,iVar1,param_2,param_4,iVar2,&local_70,3);
    return uVar4;
  }
  return 0;
}


