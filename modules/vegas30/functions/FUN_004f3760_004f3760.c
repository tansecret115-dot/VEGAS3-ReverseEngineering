/* Module: vegas30.exe
   Function: FUN_004f3760
   Address: 004f3760
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f3760(int *param_1,HWND param_2)

{
  HWND pHVar1;
  uint wParam;
  UINT Msg;
  undefined4 uVar2;
  undefined4 uVar3;
  LPARAM lParam;
  undefined4 uVar4;
  
  FUN_004f3610(param_2,param_1);
  lParam = 0;
  wParam = (uint)(*(int *)(*param_1 + 0x1194) != 0);
  Msg = 0xf1;
  pHVar1 = GetDlgItem(param_2,0x487);
  SendMessageA(pHVar1,Msg,wParam,lParam);
  if (param_1[4] != 0) {
    uVar4 = 0x8001;
    uVar3 = 0;
    uVar2 = 0;
    pHVar1 = GetParent(param_2);
    _SfWndCenter_16(pHVar1,uVar2,uVar3,uVar4);
    param_1[4] = 0;
  }
  return;
}


