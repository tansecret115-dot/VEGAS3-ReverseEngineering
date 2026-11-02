/* Module: vegas30.exe
   Function: FUN_005e2b80
   Address: 005e2b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005e2b80(HWND param_1,int param_2)

{
  int dwNewLong;
  HWND pHVar1;
  HWND hWnd;
  undefined4 uVar2;
  UINT UVar3;
  undefined4 uVar4;
  WPARAM WVar5;
  undefined4 uVar6;
  char *pcVar7;
  LPARAM LVar8;
  char local_40 [64];
  
  dwNewLong = *(int *)(param_2 + 0x1c);
  SetWindowLongA(param_1,8,dwNewLong);
  _SfSetEditCtrlFont_8(param_1,0);
  if (*(int *)(dwNewLong + 0xd54) != 0) {
    uVar6 = 0x8001;
    uVar4 = 0;
    uVar2 = 0;
    pHVar1 = GetParent(param_1);
    _SfWndCenter_16(pHVar1,uVar2,uVar4,uVar6);
    *(undefined4 *)(dwNewLong + 0xd54) = 0;
  }
  pcVar7 = (char *)(dwNewLong + 0x24);
  pHVar1 = GetDlgItem(param_1,0x445);
  SfSetWindowText(pHVar1,pcVar7);
  SfFormatDiskFreeSpace((char *)(dwNewLong + 0x24),local_40);
  pcVar7 = local_40;
  pHVar1 = GetDlgItem(param_1,0x482);
  SfSetWindowText(pHVar1,pcVar7);
  pHVar1 = GetDlgItem(param_1,0x45b);
  if (pHVar1 != (HWND)0x0) {
    LVar8 = 9;
    UVar3 = 0x624;
    hWnd = GetDlgItem(param_1,0x45c);
    SendMessageA(hWnd,UVar3,(WPARAM)pHVar1,LVar8);
    LVar8 = 0;
    WVar5 = 0;
    UVar3 = 0x60e;
    pHVar1 = GetDlgItem(param_1,0x45c);
    SendMessageA(pHVar1,UVar3,WVar5,LVar8);
    WVar5 = 0;
    UVar3 = 0x60f;
    LVar8 = DAT_0064868c;
    pHVar1 = GetDlgItem(param_1,0x45c);
    SendMessageA(pHVar1,UVar3,WVar5,LVar8);
  }
  FUN_005e2490(param_1,dwNewLong);
  FUN_005e27c0(param_1,dwNewLong + 0x23c);
  FUN_005e29e0(param_1,dwNewLong + 0x23c);
  FUN_005e2ad0(param_1,dwNewLong);
  return;
}


