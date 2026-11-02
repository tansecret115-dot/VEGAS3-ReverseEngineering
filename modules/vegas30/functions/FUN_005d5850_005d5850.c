/* Module: vegas30.exe
   Function: FUN_005d5850
   Address: 005d5850
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005d5850(HWND param_1,int param_2)

{
  HWND pHVar1;
  LPARAM LVar2;
  WPARAM wParam;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  BOOL bEnable;
  
  pHVar1 = GetDlgItem(param_1,0x434);
  LVar2 = _SfGetString_8(DAT_00647204,0x5638);
  SendMessageA(pHVar1,0x143,0,LVar2);
  LVar2 = _SfGetString_8(DAT_00647204,0x5617);
  SendMessageA(pHVar1,0x143,0,LVar2);
  LVar2 = _SfGetString_8(DAT_00647204,0x5618);
  SendMessageA(pHVar1,0x143,0,LVar2);
  LVar2 = _SfGetString_8(DAT_00647204,0x5619);
  SendMessageA(pHVar1,0x143,0,LVar2);
  LVar2 = _SfGetString_8(DAT_00647204,0x563e);
  SendMessageA(pHVar1,0x143,0,LVar2);
  LVar2 = _SfGetString_8(DAT_00647204,0x563f);
  SendMessageA(pHVar1,0x143,0,LVar2);
  LVar2 = _SfGetString_8(DAT_00647204,0x5640);
  SendMessageA(pHVar1,0x143,0,LVar2);
  if (*(int *)(param_2 + 8) == 0) {
    wParam = 0;
  }
  else {
    wParam = *(int *)(param_2 + 0x18) + 1;
  }
  SendMessageA(pHVar1,0x14e,wParam,0);
  uVar5 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  puVar3 = &DAT_00619d20;
  pHVar1 = GetDlgItem(param_1,0x4b2);
  SfSetWindowText(pHVar1,puVar3,uVar4,uVar5);
  bEnable = *(BOOL *)(param_2 + 8);
  pHVar1 = GetDlgItem(param_1,0x4b2);
  EnableWindow(pHVar1,bEnable);
  pHVar1 = GetDlgItem(param_1,0x503);
  SendMessageA(pHVar1,0x60e,0,DAT_0065ae00);
  SendMessageA(pHVar1,0x60f,0,DAT_0065adfc);
  LVar2 = ftol();
  SendMessageA(pHVar1,0x610,0,LVar2);
  EnableWindow(pHVar1,*(BOOL *)(param_2 + 8));
  pHVar1 = GetDlgItem(param_1,0x4b1);
  SendMessageA(pHVar1,0x143,0,0x61b0f4);
  SendMessageA(pHVar1,0x143,0,0x62a234);
  SendMessageA(pHVar1,0x143,0,0x62a220);
  SendMessageA(pHVar1,0x14e,*(WPARAM *)(param_2 + 0x28),0);
  return;
}


