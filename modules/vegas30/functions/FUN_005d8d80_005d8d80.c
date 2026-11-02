/* Module: vegas30.exe
   Function: FUN_005d8d80
   Address: 005d8d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d8d80(HWND param_1,int param_2)

{
  HWND pHVar1;
  LRESULT LVar2;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0x147;
  pHVar1 = GetDlgItem(param_1,0x434);
  WVar4 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  LVar5 = 0;
  UVar3 = 0x150;
  pHVar1 = GetDlgItem(param_1,0x434);
  LVar2 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  if ((short)LVar2 != *(short *)(param_2 + 0xd28)) {
    *(short *)(param_2 + 0xd28) = (short)LVar2;
    if (*(int *)(param_2 + 0xd30) == 0) {
      LVar5 = 0;
      UVar3 = 0x468;
      pHVar1 = GetParent(param_1);
      SendMessageA(pHVar1,UVar3,(WPARAM)param_1,LVar5);
    }
    *(undefined4 *)(param_2 + 0xd4c) = 1;
    return 1;
  }
  return 1;
}


