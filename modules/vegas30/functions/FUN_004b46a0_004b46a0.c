/* Module: vegas30.exe
   Function: FUN_004b46a0
   Address: 004b46a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b46a0(HWND param_1,int *param_2)

{
  HWND pHVar1;
  LRESULT LVar2;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0xf0;
  pHVar1 = GetDlgItem(param_1,0x4aa);
  LVar2 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  if (LVar2 == 1) {
    *(undefined4 *)(*param_2 + 0x21a4) = 0;
    *(undefined4 *)(*param_2 + 0x219c) = 0;
  }
  else {
    LVar5 = 0;
    WVar4 = 0;
    UVar3 = 0xf0;
    pHVar1 = GetDlgItem(param_1,0x4ab);
    LVar2 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    if (LVar2 == 1) {
      *(undefined4 *)(*param_2 + 0x219c) = 1;
      *(undefined4 *)(*param_2 + 0x21a4) = 0;
    }
    else {
      LVar5 = 0;
      WVar4 = 0;
      UVar3 = 0xf0;
      pHVar1 = GetDlgItem(param_1,0x4ac);
      LVar2 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
      if (LVar2 == 1) {
        *(undefined4 *)(*param_2 + 0x219c) = 1;
        *(undefined4 *)(*param_2 + 0x21a4) = 1;
      }
    }
  }
  FUN_004b4420(param_1,param_2);
  LVar5 = 0;
  UVar3 = 0x468;
  pHVar1 = GetParent(param_1);
  SendMessageA(pHVar1,UVar3,(WPARAM)param_1,LVar5);
  param_2[2] = 1;
  param_2[0x1d] = 1;
  return;
}


