/* Module: vegas30k.dll
   Function: FUN_01138c90
   Address: 01138c90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01138c90(HWND param_1,int param_2)

{
  undefined4 *puVar1;
  HWND pHVar2;
  LRESULT LVar3;
  int iVar4;
  UINT UVar5;
  WPARAM WVar6;
  WPARAM wParam;
  LPARAM LVar7;
  
  puVar1 = (undefined4 *)GetWindowLongA(param_1,8);
  LVar7 = 0;
  WVar6 = 0;
  UVar5 = 0x188;
  pHVar2 = GetDlgItem(param_1,0x426);
  WVar6 = SendMessageA(pHVar2,UVar5,WVar6,LVar7);
  if (WVar6 != 0xffffffff) {
    LVar7 = 0;
    UVar5 = 0x199;
    wParam = WVar6;
    pHVar2 = GetDlgItem(param_1,0x426);
    LVar3 = SendMessageA(pHVar2,UVar5,wParam,LVar7);
    iVar4 = (**(code **)(*(int *)*puVar1 + 0x98))((int *)*puVar1,LVar3,param_2);
    if (iVar4 == 0) {
      FUN_01138590(param_1,WVar6 + param_2);
      FUN_01138a00(param_1);
    }
  }
  return;
}


