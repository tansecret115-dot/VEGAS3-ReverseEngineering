/* Module: vidcap30.exe
   Function: FUN_0043bb50
   Address: 0043bb50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043bb50(int param_1)

{
  int iVar1;
  HCURSOR hCursor;
  LPCSTR lpString2;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  HCURSOR local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_10c [8];
  CHAR local_104 [259];
  undefined1 local_1;
  
  uVar4 = DAT_005bb838;
  iVar1 = param_1 + 0xd8;
  local_120 = FUN_0042b6a0(iVar1);
  local_104[0] = '\0';
  RedrawWindow(DAT_005ba4bc,(RECT *)0x0,(HRGN)0x0,0x185);
  hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
  local_124 = SetCursor(hCursor);
  KillTimer(*(HWND *)(param_1 + 8),3);
  *(uint *)(param_1 + 0x220) = *(uint *)(param_1 + 0x220) & 0xffffffdf;
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_1 + 0x224);
  lpString2 = (LPCSTR)FUN_00441ab0(0);
  if (lpString2 != (LPCSTR)0x0) {
    lstrcpynA(local_104,lpString2,0x104);
    local_1 = 0;
  }
  FUN_00422870(iVar1,*(undefined4 *)(param_1 + 0x1c68));
  iVar2 = FUN_00422890(iVar1,local_104,0);
  if (iVar2 < 0) {
    if (iVar2 == -0x7ffb1ff6) {
      iVar2 = -0x7ffb1ff9;
    }
    SfErrorHandler_DetailsAddString(iVar2,"The file \'%s\' could not be opened.",local_104);
    _SfErrorHandler_MsgBox_24(DAT_005ba4bc,0x30,0x16,iVar2,0,0);
    FUN_00417cb0(DAT_005ba4bc,local_104,&DAT_005bb848);
    FUN_00422890(iVar1,&DAT_00586c70,0);
  }
  *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) & 0xfffffffd;
  iVar2 = FUN_00424cd0(iVar1);
  if (-1 < iVar2) {
    iVar2 = FUN_00424d80(iVar1,&local_11c);
    if (-1 < iVar2) {
      FUN_0042ed50(uVar4,local_11c,local_118);
    }
    iVar2 = FUN_00424de0(iVar1,local_10c);
    if (-1 < iVar2) {
      FUN_0042ef50(uVar4,local_10c);
    }
    iVar2 = FUN_00424e40(iVar1,&local_134);
    if (-1 < iVar2) {
      FUN_0042ea40(uVar4,local_134,local_130);
      FUN_0042eac0(uVar4,2,local_134,local_130);
    }
    iVar2 = FUN_00424e80(iVar1,&local_12c);
    if (-1 < iVar2) {
      FUN_0042e9c0(uVar4,local_12c,local_128);
    }
    iVar2 = FUN_00421a20(iVar1,&local_114);
    if (-1 < iVar2) {
      FUN_0042ee50(uVar4,local_114,local_110);
    }
    uVar5 = __allshl();
    *(uint *)(param_1 + 0x220) = (uint)uVar5 | *(uint *)(param_1 + 0x220) & 0xffffffdf;
    *(uint *)(param_1 + 0x224) = (uint)((ulonglong)uVar5 >> 0x20) | *(uint *)(param_1 + 0x224);
    iVar3 = FUN_0042b6a0(iVar1);
    if (iVar3 != 0) {
      iVar2 = FUN_0042b6d0(iVar1,1);
    }
  }
  FUN_0043fe90(param_1,param_1 + 0x1ae8);
  FUN_00440040(param_1,param_1 + 0x1ae8,param_1 + 0x1aec);
  FUN_0043adc0(param_1);
  FUN_0043ae30(param_1);
  uVar4 = FUN_00441a60();
  FUN_0043b2a0(param_1,uVar4);
  FUN_0043efc0(param_1);
  SetTimer(*(HWND *)(param_1 + 8),3,*(UINT *)(param_1 + 0x1c48),(TIMERPROC)0x0);
  SetCursor(local_124);
  _TrackbarInst_Message_16(*(undefined4 *)(param_1 + 0x13c8),0x60e,0,0);
  _TrackbarInst_Message_16(*(undefined4 *)(param_1 + 0x13c8),0x60f,0,local_134);
  _TrackbarInst_Message_16(*(undefined4 *)(param_1 + 0x13c8),0x611,0,0);
  _TrackbarInst_Message_16(*(undefined4 *)(param_1 + 0x13c8),0x610,0,local_12c);
  InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)0x0,1);
  return iVar2;
}


