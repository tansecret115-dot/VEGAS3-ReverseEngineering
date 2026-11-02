/* Module: vegas30.exe
   Function: FUN_005543e0
   Address: 005543e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005543e0(HWND param_1,int *param_2)

{
  HWND pHVar1;
  WPARAM wParam;
  undefined4 *puVar2;
  HWND unaff_EDI;
  UINT Msg;
  LPARAM lParam;
  
  pHVar1 = GetDlgItem(param_1,0x662);
  wParam = SendMessageA(pHVar1,0x147,0,0);
  if (wParam != 0xffffffff) {
    puVar2 = (undefined4 *)SendMessageA(pHVar1,0x150,wParam,0);
    *(undefined4 *)(*param_2 + 0x3284) = puVar2[2];
    (**(code **)(*(int *)*puVar2 + 0x2c))
              ((int *)*puVar2,*(undefined4 *)(*param_2 + 0x3284),0,*param_2 + 0x3288,0x104);
    if (puVar2[1] != *(int *)(*param_2 + 0x2eec)) {
      *(undefined4 *)(*param_2 + 0x2eec) = puVar2[1];
      param_2[0x1b] = 1;
    }
    lParam = 0;
    Msg = 0x468;
    pHVar1 = GetParent(unaff_EDI);
    SendMessageA(pHVar1,Msg,(WPARAM)unaff_EDI,lParam);
    param_2[2] = 1;
  }
  return;
}


