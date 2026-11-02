/* Module: vegas30.exe
   Function: FUN_0052f7c0
   Address: 0052f7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052f7c0(HWND param_1,int param_2)

{
  HWND pHVar1;
  uint wParam;
  UINT UVar2;
  LPARAM LVar3;
  WPARAM wParam_00;
  int nCmdShow;
  BOOL BVar4;
  
  if (*(int *)(param_2 + 0x1464) != 0) {
    nCmdShow = 0;
    pHVar1 = GetDlgItem(param_1,0x47b);
    ShowWindow(pHVar1,nCmdShow);
    return;
  }
  if ((*(byte *)(param_2 + 0xb3c) & 3) != 0) {
    BVar4 = *(BOOL *)(param_2 + 0x179c);
    pHVar1 = GetDlgItem(param_1,0x47b);
    EnableWindow(pHVar1,BVar4);
    wParam = (uint)(*(int *)(param_2 + 0xb44) != 0);
    LVar3 = 0;
    UVar2 = 0xf1;
    pHVar1 = GetDlgItem(param_1,0x47b);
    SendMessageA(pHVar1,UVar2,wParam,LVar3);
    return;
  }
  BVar4 = 0;
  pHVar1 = GetDlgItem(param_1,0x47b);
  EnableWindow(pHVar1,BVar4);
  LVar3 = 0;
  wParam_00 = 0;
  UVar2 = 0xf1;
  pHVar1 = GetDlgItem(param_1,0x47b);
  SendMessageA(pHVar1,UVar2,wParam_00,LVar3);
  return;
}


