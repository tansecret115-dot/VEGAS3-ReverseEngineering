/* Module: vegas30.exe
   Function: FUN_00567b80
   Address: 00567b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00567b80(HWND param_1,uint *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  HWND pHVar3;
  HWND pHVar4;
  uint uVar5;
  int bEnable;
  BOOL BVar6;
  uint uVar7;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  FUN_00401160();
  iVar1 = FUN_005624d0(&DAT_0064b538);
  if (iVar1 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_00562c70(iVar1);
  }
  if ((param_3 != 0) || (local_14 != param_2[0x38])) {
    iVar2 = FUN_00562b10(&DAT_0064b538,param_2 + 0xe,param_2 + 0x12,1);
    if (iVar2 == 0) {
      CheckRadioButton(param_1,0x623,0x624,0x623);
      *param_2 = *param_2 & 0xfffffffd;
      if ((param_2[0x32] & 0x10) != 0) {
        KillTimer(param_1,0x65);
        param_2[0x32] = param_2[0x32] & 0xffffffef;
      }
    }
    bEnable = iVar2;
    pHVar3 = GetDlgItem(param_1,0x624);
    EnableWindow(pHVar3,bEnable);
    BVar6 = 0;
    pHVar3 = GetDlgItem(param_1,0x438);
    EnableWindow(pHVar3,BVar6);
    if ((iVar2 == 0) || ((*param_2 & 2) == 0)) {
      BVar6 = 0;
    }
    else {
      BVar6 = 1;
    }
    pHVar3 = GetDlgItem(param_1,0x439);
    EnableWindow(pHVar3,BVar6);
    if (iVar2 != 0) {
      iVar2 = 1;
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      local_4 = 0;
      pHVar3 = GetDlgItem(param_1,0x438);
      if ((iVar1 != 0) && (iVar2 = FUN_00562bb0(iVar1), iVar2 == 0)) {
        iVar2 = FUN_00562c10(iVar1,&local_10,&local_8);
        if ((param_2[0x32] & 0x10) == 0) {
          SetTimer(param_1,0x65,500,(TIMERPROC)0x0);
        }
        param_2[0x32] = param_2[0x32] | 0x10;
      }
      if ((*param_2 & 4) == 0) {
        param_2[10] = local_10;
        param_2[0xb] = local_c;
        FUN_00567a70(pHVar3,local_10,local_c);
      }
      param_2[0x3a] = local_10;
      param_2[0x3b] = local_c;
      uVar5 = local_10;
      uVar7 = local_c;
      pHVar4 = GetDlgItem(param_1,0x43a);
      FUN_00567a70(pHVar4,uVar5,uVar7);
      param_2[0xc] = local_8;
      param_2[0xd] = local_4;
      if (iVar2 != 0) {
        EnableWindow(pHVar3,0);
      }
    }
  }
  param_2[0x38] = local_14;
  if (iVar1 != 0) {
    FUN_00562540(&DAT_0064b538,iVar1);
  }
  return;
}


