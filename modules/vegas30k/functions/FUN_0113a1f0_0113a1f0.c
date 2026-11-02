/* Module: vegas30k.dll
   Function: FUN_0113a1f0
   Address: 0113a1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0113a1f0(HWND param_1)

{
  int *piVar1;
  LONG LVar2;
  HWND pHVar3;
  LRESULT LVar4;
  UINT UVar5;
  WPARAM WVar6;
  LPARAM LVar7;
  
  LVar2 = GetWindowLongA(param_1,8);
  piVar1 = *(int **)(LVar2 + 4);
  LVar7 = 0;
  WVar6 = 0;
  UVar5 = 0x147;
  pHVar3 = GetDlgItem(param_1,0x43a);
  WVar6 = SendMessageA(pHVar3,UVar5,WVar6,LVar7);
  if (WVar6 != 0xffffffff) {
    LVar7 = 0;
    UVar5 = 0x150;
    pHVar3 = GetDlgItem(param_1,0x43a);
    LVar4 = SendMessageA(pHVar3,UVar5,WVar6,LVar7);
    (**(code **)(*piVar1 + 0xa8))(piVar1,LVar4);
  }
  return;
}


