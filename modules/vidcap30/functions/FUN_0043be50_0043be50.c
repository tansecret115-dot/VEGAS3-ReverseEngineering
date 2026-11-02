/* Module: vidcap30.exe
   Function: FUN_0043be50
   Address: 0043be50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043be50(int param_1)

{
  UINT uElapse;
  undefined4 uVar1;
  HCURSOR pHVar2;
  int iVar3;
  int iVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [12];
  
  uVar1 = DAT_005bb838;
  local_28 = 0;
  local_24 = 0;
  iVar4 = param_1 + 0xa48;
  RedrawWindow(DAT_005ba4bc,(RECT *)0x0,(HRGN)0x0,0x185);
  pHVar2 = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
  pHVar2 = SetCursor(pHVar2);
  KillTimer(*(HWND *)(param_1 + 8),3);
  FUN_0042bb70(iVar4,param_1 + 0x19b4);
  iVar3 = FUN_00422890(iVar4,param_1 + 0x17ac,0);
  if (((iVar3 < 0) || (iVar3 = FUN_0043e7f0(param_1,iVar4), iVar3 < 0)) ||
     (iVar3 = FUN_0042b180(iVar4,1), iVar3 < 0)) {
    if (DAT_005bb7c8 == 0) {
      SfMsgBox_CustomEx(*(undefined4 *)(param_1 + 8),0x1040,0,"&Do not show this message again",
                        &DAT_005bb7c8,
                        "The device \'%s\' could not be opened.\n\nPlease make sure that it is turned on and is not being used by another application or user."
                        ,param_1 + 0x17ac);
    }
    FUN_00422890(iVar4,"No Capture Device",0);
  }
  *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) & 0xfffffffb;
  iVar3 = FUN_00428c90(iVar4,local_10);
  if (-1 < iVar3) {
    FUN_0042ef50(uVar1,local_10);
  }
  iVar3 = FUN_00428b80(iVar4,&local_28);
  if (-1 < iVar3) {
    FUN_0042ed50(uVar1,local_28,local_24);
  }
  iVar3 = FUN_004289c0(iVar4,&local_20,0);
  if (-1 < iVar3) {
    FUN_0042e9c0(uVar1,local_20,local_1c);
  }
  iVar4 = FUN_00421a20(iVar4,&local_18);
  if (-1 < iVar4) {
    FUN_0042ee50(uVar1,local_18,local_14);
  }
  FUN_0043fe90(param_1,param_1 + 0x1ae8);
  FUN_00440040(param_1,param_1 + 0x1ae8,param_1 + 0x1aec);
  FUN_0043adc0(param_1);
  FUN_00441b30(param_1);
  iVar3 = FUN_0042f390(uVar1);
  if (iVar3 == 0) {
    FUN_0043b2a0(param_1,0);
    FUN_0043ae30(param_1);
  }
  FUN_0043efc0(param_1);
  *(undefined4 *)(param_1 + 0x1abc) = 0;
  *(undefined4 *)(param_1 + 0x1ad0) = 0;
  *(undefined4 *)(param_1 + 0x1ad4) = 0;
  *(undefined4 *)(param_1 + 0x1ad8) = 0;
  *(undefined4 *)(param_1 + 0x1c4c) = DAT_005bb45c;
  uElapse = DAT_005bb460;
  *(UINT *)(param_1 + 0x1c48) = DAT_005bb460;
  SetTimer(*(HWND *)(param_1 + 8),3,uElapse,(TIMERPROC)0x0);
  _TrackbarInst_Message_16(*(undefined4 *)(param_1 + 0x13c8),0x60e,0,0xfffffffa);
  _TrackbarInst_Message_16(*(undefined4 *)(param_1 + 0x13c8),0x60f,0,6);
  _TrackbarInst_Message_16(*(undefined4 *)(param_1 + 0x13c8),0x611,0,0);
  _TrackbarInst_Message_16(*(undefined4 *)(param_1 + 0x13c8),0x610,0,0);
  SetCursor(pHVar2);
  InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)0x0,1);
  return iVar4;
}


