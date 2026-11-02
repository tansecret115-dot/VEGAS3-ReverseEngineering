/* Module: vegas30.exe
   Function: FUN_004b4c70
   Address: 004b4c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b4c70(HWND param_1,int *param_2)

{
  HWND pHVar1;
  LRESULT LVar2;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0xf0;
  pHVar1 = GetDlgItem(param_1,0x4ad);
  LVar2 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  if (LVar2 == 1) {
    *(undefined4 *)(*param_2 + 0x22c0) = 0;
    *(undefined4 *)(*param_2 + 0x22bc) = 0;
  }
  else {
    LVar5 = 0;
    WVar4 = 0;
    UVar3 = 0xf0;
    pHVar1 = GetDlgItem(param_1,0x4ae);
    LVar2 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    if (LVar2 == 1) {
      *(undefined4 *)(*param_2 + 0x22bc) = 1;
      *(undefined4 *)(*param_2 + 0x22c0) = 0;
    }
  }
  FUN_004b4aa0(param_1,param_2);
  LVar5 = 0;
  UVar3 = 0x468;
  pHVar1 = GetParent(param_1);
  SendMessageA(pHVar1,UVar3,(WPARAM)param_1,LVar5);
  param_2[2] = 1;
  param_2[0x1d] = 1;
  return;
}


