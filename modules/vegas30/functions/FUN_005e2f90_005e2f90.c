/* Module: vegas30.exe
   Function: FUN_005e2f90
   Address: 005e2f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005e2f90(HWND param_1,int param_2)

{
  HWND pHVar1;
  LRESULT LVar2;
  HWND hWnd;
  UINT UVar3;
  WPARAM WVar4;
  WPARAM wParam;
  LPARAM LVar5;
  
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0x147;
  pHVar1 = GetDlgItem(param_1,0x457);
  WVar4 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  if (WVar4 != 0xffffffff) {
    LVar5 = 0;
    UVar3 = 0x150;
    wParam = WVar4;
    pHVar1 = GetDlgItem(param_1,0x457);
    LVar2 = SendMessageA(pHVar1,UVar3,wParam,LVar5);
    if (*(int *)(param_2 + 0xd04) != LVar2) {
      if (*(int *)(param_2 + 0xd30) == 0) {
        LVar5 = 0;
        UVar3 = 0x468;
        pHVar1 = param_1;
        hWnd = GetParent(param_1);
        SendMessageA(hWnd,UVar3,(WPARAM)pHVar1,LVar5);
      }
      *(undefined4 *)(param_2 + 0xd4c) = 1;
    }
    LVar5 = 0;
    UVar3 = 0x150;
    pHVar1 = GetDlgItem(param_1,0x457);
    LVar2 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
    *(LRESULT *)(param_2 + 0xd04) = LVar2;
  }
  return;
}


