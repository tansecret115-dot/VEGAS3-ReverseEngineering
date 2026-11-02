/* Module: vegas30.exe
   Function: FUN_004b5b60
   Address: 004b5b60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004b5b60(HWND param_1,int *param_2)

{
  HWND pHVar1;
  int *piVar2;
  HWND hWnd;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0x147;
  pHVar1 = GetDlgItem(param_1,0x454);
  WVar4 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  if (WVar4 != 0xffffffff) {
    LVar5 = 0;
    UVar3 = 0x150;
    pHVar1 = GetDlgItem(param_1,0x454);
    piVar2 = (int *)SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    if (piVar2 == (int *)0x0) {
      *(undefined1 *)(*param_2 + 0x21b0) = 0;
    }
    else {
      (**(code **)(*piVar2 + 0x1c))(piVar2,*param_2 + 0x21b0,0x104);
    }
    LVar5 = 0;
    UVar3 = 0x468;
    pHVar1 = param_1;
    hWnd = GetParent(param_1);
    SendMessageA(hWnd,UVar3,(WPARAM)pHVar1,LVar5);
    DAT_0064cb48 = 1;
    _DAT_0064cb44 = 1;
    param_2[2] = 1;
    param_2[0x1d] = 1;
  }
  FUN_004b5520(param_1,param_2);
  FUN_004b59b0(param_1,param_2);
  return 1;
}


