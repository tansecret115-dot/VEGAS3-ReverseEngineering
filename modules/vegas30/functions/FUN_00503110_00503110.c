/* Module: vegas30.exe
   Function: FUN_00503110
   Address: 00503110
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00503110(HWND param_1,int param_2,int param_3)

{
  HWND hWnd;
  int iVar1;
  HWND pHVar2;
  UINT UVar3;
  LPARAM LVar4;
  
  if (param_3 != 0) {
    LVar4 = 0;
    UVar3 = 0x468;
    pHVar2 = param_1;
    hWnd = GetParent(param_1);
    SendMessageA(hWnd,UVar3,(WPARAM)pHVar2,LVar4);
  }
  iVar1 = FUN_005030c0(param_1);
  *(int *)(iVar1 + 0x178) = param_3;
  if (param_3 != 0) {
    LVar4 = 0;
    UVar3 = 0x468;
    pHVar2 = GetParent(param_1);
    SendMessageA(pHVar2,UVar3,(WPARAM)param_1,LVar4);
    *(undefined4 *)(param_2 + 8) = 1;
    *(undefined4 *)(param_2 + 0x6c) = 1;
  }
  return;
}


