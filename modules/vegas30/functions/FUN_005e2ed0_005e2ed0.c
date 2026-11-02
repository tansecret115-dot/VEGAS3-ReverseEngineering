/* Module: vegas30.exe
   Function: FUN_005e2ed0
   Address: 005e2ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005e2ed0(HWND param_1,int param_2)

{
  HWND pHVar1;
  LRESULT LVar2;
  HWND hWnd;
  UINT UVar3;
  WPARAM WVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  
  LVar6 = 0;
  WVar4 = 0;
  UVar3 = 0x147;
  pHVar1 = GetDlgItem(param_1,0x456);
  WVar4 = SendMessageA(pHVar1,UVar3,WVar4,LVar6);
  if (WVar4 != 0xffffffff) {
    LVar6 = 0;
    UVar3 = 0x150;
    WVar5 = WVar4;
    pHVar1 = GetDlgItem(param_1,0x456);
    LVar2 = SendMessageA(pHVar1,UVar3,WVar5,LVar6);
    if (*(int *)(param_2 + 0x360) != LVar2) {
      LVar6 = 0;
      UVar3 = 0x150;
      WVar5 = WVar4;
      pHVar1 = GetDlgItem(param_1,0x456);
      SendMessageA(pHVar1,UVar3,WVar5,LVar6);
      if (*(int *)(param_2 + 0xd30) == 0) {
        LVar6 = 0;
        UVar3 = 0x468;
        pHVar1 = param_1;
        hWnd = GetParent(param_1);
        SendMessageA(hWnd,UVar3,(WPARAM)pHVar1,LVar6);
      }
      *(undefined4 *)(param_2 + 0xd4c) = 1;
    }
    LVar6 = 0;
    UVar3 = 0x150;
    pHVar1 = GetDlgItem(param_1,0x456);
    LVar2 = SendMessageA(pHVar1,UVar3,WVar4,LVar6);
    *(LRESULT *)(param_2 + 0x360) = LVar2;
  }
  return;
}


