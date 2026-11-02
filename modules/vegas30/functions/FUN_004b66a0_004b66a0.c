/* Module: vegas30.exe
   Function: FUN_004b66a0
   Address: 004b66a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004b66a0(HWND param_1,int *param_2)

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
  pHVar1 = GetDlgItem(param_1,0x48f);
  WVar4 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  if (WVar4 != 0xffffffff) {
    LVar5 = 0;
    UVar3 = 0x150;
    pHVar1 = GetDlgItem(param_1,0x48f);
    piVar2 = (int *)SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    if (*(char *)(*param_2 + 8000) == '\0') {
      *(undefined4 *)(*param_2 + 0x2070) = DAT_00641320;
    }
    if (piVar2 == (int *)0x0) {
      *(undefined1 *)(*param_2 + 8000) = 0;
    }
    else {
      (**(code **)(*piVar2 + 0x1c))(piVar2,*param_2 + 8000,0x104);
    }
    LVar5 = 0;
    UVar3 = 0x468;
    pHVar1 = param_1;
    hWnd = GetParent(param_1);
    SendMessageA(hWnd,UVar3,(WPARAM)pHVar1,LVar5);
    DAT_0064cb60 = 1;
    _DAT_0064cb5c = 1;
    param_2[2] = 1;
    param_2[0x1d] = 1;
  }
  FUN_004b5c20(param_1,param_2);
  FUN_004b5280(param_1,param_2);
  FUN_004b5290(param_1,param_2);
  FUN_004b59b0(param_1,param_2);
  return 1;
}


