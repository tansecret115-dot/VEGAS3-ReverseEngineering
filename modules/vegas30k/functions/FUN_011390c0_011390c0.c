/* Module: vegas30k.dll
   Function: FUN_011390c0
   Address: 011390c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011390c0(HWND param_1)

{
  LONG LVar1;
  HWND pHVar2;
  LRESULT LVar3;
  int *piVar4;
  UINT UVar5;
  WPARAM WVar6;
  WPARAM wParam;
  LPARAM LVar7;
  
  LVar1 = GetWindowLongA(param_1,8);
  _SfPlugIn_FreeList_4(*(undefined4 *)(LVar1 + 8));
  LVar7 = 0;
  WVar6 = 0;
  UVar5 = 0x18b;
  pHVar2 = GetDlgItem(param_1,0x426);
  LVar3 = SendMessageA(pHVar2,UVar5,WVar6,LVar7);
  WVar6 = 0;
  if (0 < LVar3) {
    do {
      LVar7 = 0;
      UVar5 = 0x199;
      wParam = WVar6;
      pHVar2 = GetDlgItem(param_1,0x426);
      piVar4 = (int *)SendMessageA(pHVar2,UVar5,wParam,LVar7);
      (**(code **)(*piVar4 + 8))(piVar4);
      WVar6 = WVar6 + 1;
    } while ((int)WVar6 < LVar3);
  }
  LVar7 = 0;
  WVar6 = 0;
  UVar5 = 0x184;
  pHVar2 = GetDlgItem(param_1,0x426);
  SendMessageA(pHVar2,UVar5,WVar6,LVar7);
  return;
}


