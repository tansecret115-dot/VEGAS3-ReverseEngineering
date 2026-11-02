/* Module: vegas30.exe
   Function: FUN_0055f4f0
   Address: 0055f4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0055f4f0(HWND param_1,int param_2)

{
  HWND pHVar1;
  UINT UVar2;
  WPARAM WVar3;
  LPARAM LVar4;
  
  if (param_2 == 1) {
    LVar4 = 1;
    WVar3 = 0;
    UVar2 = 0xf4;
    pHVar1 = GetDlgItem(param_1,0x54d);
    PostMessageA(pHVar1,UVar2,WVar3,LVar4);
    LVar4 = 1;
    WVar3 = 0;
    UVar2 = 0xf4;
    pHVar1 = GetDlgItem(param_1,0x54e);
    PostMessageA(pHVar1,UVar2,WVar3,LVar4);
    LVar4 = 1;
    WVar3 = 1;
    UVar2 = 0xf4;
    pHVar1 = GetDlgItem(param_1,1);
    PostMessageA(pHVar1,UVar2,WVar3,LVar4);
  }
  else {
    if (param_2 == 0x54d) {
      LVar4 = 1;
      WVar3 = 1;
      UVar2 = 0xf4;
      pHVar1 = GetDlgItem(param_1,0x54d);
      PostMessageA(pHVar1,UVar2,WVar3,LVar4);
      LVar4 = 1;
      WVar3 = 0;
      UVar2 = 0xf4;
      pHVar1 = GetDlgItem(param_1,0x54e);
      PostMessageA(pHVar1,UVar2,WVar3,LVar4);
      LVar4 = 1;
      WVar3 = 0;
      UVar2 = 0xf4;
      pHVar1 = GetDlgItem(param_1,1);
      PostMessageA(pHVar1,UVar2,WVar3,LVar4);
      return;
    }
    if (param_2 == 0x54e) {
      LVar4 = 1;
      WVar3 = 0;
      UVar2 = 0xf4;
      pHVar1 = GetDlgItem(param_1,0x54d);
      PostMessageA(pHVar1,UVar2,WVar3,LVar4);
      LVar4 = 1;
      WVar3 = 1;
      UVar2 = 0xf4;
      pHVar1 = GetDlgItem(param_1,0x54e);
      PostMessageA(pHVar1,UVar2,WVar3,LVar4);
      LVar4 = 1;
      WVar3 = 0;
      UVar2 = 0xf4;
      pHVar1 = GetDlgItem(param_1,1);
      PostMessageA(pHVar1,UVar2,WVar3,LVar4);
      return;
    }
  }
  return;
}


