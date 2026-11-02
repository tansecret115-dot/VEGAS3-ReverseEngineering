/* Module: vegas30.exe
   Function: FUN_004b4620
   Address: 004b4620
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004b4620(HWND param_1,int *param_2)

{
  HWND pHVar1;
  LRESULT LVar2;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0x147;
  pHVar1 = GetDlgItem(param_1,0x480);
  WVar4 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  if (WVar4 != 0xffffffff) {
    LVar5 = 0;
    UVar3 = 0x150;
    pHVar1 = GetDlgItem(param_1,0x480);
    LVar2 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    LVar5 = 0;
    UVar3 = 0x468;
    *(LRESULT *)(*param_2 + 0x21a8) = LVar2;
    pHVar1 = GetParent(param_1);
    SendMessageA(pHVar1,UVar3,(WPARAM)param_1,LVar5);
    param_2[2] = 1;
    param_2[0x1d] = 1;
    return 1;
  }
  return param_2[2];
}


