/* Module: vegas30.exe
   Function: FUN_00553e70
   Address: 00553e70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00553e70(HWND param_1,int *param_2)

{
  HWND pHVar1;
  HWND wParam;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LPARAM LVar5;
  undefined4 uVar6;
  
  FUN_00553180(param_1,param_2);
  pHVar1 = GetDlgItem(param_1,0x486);
  LVar5 = 9;
  wParam = GetDlgItem(param_1,0x485);
  SendMessageA(pHVar1,0x624,(WPARAM)wParam,LVar5);
  SendMessageA(pHVar1,0x60e,0,-0x78);
  SendMessageA(pHVar1,0x60f,0,0);
  pHVar1 = GetDlgItem(param_1,0x5e8);
  SendMessageA(pHVar1,0x14b,0,0);
  puVar2 = &DAT_006452b8;
  do {
    LVar5 = _SfGetString_8(DAT_00647204,*puVar2);
    SendMessageA(pHVar1,0x143,0,LVar5);
    puVar2 = puVar2 + 1;
  } while (puVar2 < &DAT_006452c4);
  SendMessageA(pHVar1,0x14e,*(WPARAM *)(*param_2 + 0x2e70),0);
  pHVar1 = GetDlgItem(param_1,0x444);
  SfSetWindowText(pHVar1,*param_2 + 0x474);
  pHVar1 = GetDlgItem(param_1,0x556);
  SfSetWindowText(pHVar1,*param_2 + 0x243c);
  pHVar1 = GetDlgItem(param_1,0x557);
  SfSetWindowText(pHVar1,*param_2 + 0x2540);
  CheckRadioButton(param_1,0x46e,0x46f,0x46f - (uint)(*(int *)(*param_2 + 0x2438) != 0));
  FUN_005533c0(param_1,*(int *)(*param_2 + 0x2438) == 0);
  if (param_2[4] != 0) {
    uVar6 = 0x8001;
    uVar4 = 0;
    uVar3 = 0;
    pHVar1 = GetParent(param_1);
    _SfWndCenter_16(pHVar1,uVar3,uVar4,uVar6);
    param_2[4] = 0;
  }
  FUN_00553860(param_1,param_2);
  FUN_005539e0(param_1,param_2);
  FUN_00553bc0(param_1,param_2);
  FUN_00553da0(param_1,param_2);
  return;
}


