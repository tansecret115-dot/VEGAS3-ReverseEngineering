/* Module: vegas30k.dll
   Function: FUN_01138d50
   Address: 01138d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01138d50(HWND param_1)

{
  HWND pHVar1;
  LRESULT LVar2;
  int *piVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  
  GetWindowLongA(param_1,8);
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0x147;
  pHVar1 = GetDlgItem(param_1,0x427);
  WVar5 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  if (WVar5 != 0xffffffff) {
    LVar6 = 0;
    UVar4 = 0x150;
    pHVar1 = GetDlgItem(param_1,0x427);
    LVar2 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
    LVar6 = 0;
    WVar5 = 0;
    UVar4 = 0x188;
    pHVar1 = GetDlgItem(param_1,0x426);
    WVar5 = SendMessageA(pHVar1,UVar4,WVar5,LVar6);
    if (WVar5 != 0xffffffff) {
      LVar6 = 0;
      UVar4 = 0x199;
      pHVar1 = GetDlgItem(param_1,0x426);
      piVar3 = (int *)SendMessageA(pHVar1,UVar4,WVar5,LVar6);
      (**(code **)(*piVar3 + 0x3c))(piVar3,LVar2);
      FUN_01138a00(param_1);
    }
  }
  return;
}


