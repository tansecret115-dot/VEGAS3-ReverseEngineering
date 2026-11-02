/* Module: vegas30.exe
   Function: FUN_00429a90
   Address: 00429a90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00429a90(HWND param_1,int param_2)

{
  HWND pHVar1;
  LRESULT LVar2;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0x147;
  pHVar1 = GetDlgItem(param_1,0x5e9);
  WVar4 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  LVar5 = 0;
  UVar3 = 0x150;
  pHVar1 = GetDlgItem(param_1,0x5e9);
  LVar2 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  FUN_004296a0(param_2,LVar2);
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0x147;
  pHVar1 = GetDlgItem(param_1,0x61a);
  WVar4 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  LVar5 = 0;
  UVar3 = 0x150;
  pHVar1 = GetDlgItem(param_1,0x61a);
  LVar2 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0x60a;
  *(LRESULT *)(param_2 + 0x3118) = LVar2;
  pHVar1 = GetDlgItem(param_1,0xe1a);
  LVar2 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  *(LRESULT *)(param_2 + 0x3228) = LVar2;
  UVar3 = IsDlgButtonChecked(param_1,0x622);
  *(UINT *)(param_2 + 0x322c) = UVar3;
  return;
}


