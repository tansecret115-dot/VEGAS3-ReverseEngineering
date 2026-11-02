/* Module: vidcap30.exe
   Function: FUN_004533a0
   Address: 004533a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004533a0(HWND param_1,int param_2)

{
  HWND pHVar1;
  LRESULT LVar2;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  
  LVar5 = 0;
  WVar4 = 0;
  UVar3 = 0x147;
  pHVar1 = GetDlgItem(param_1,0x442);
  WVar4 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  LVar5 = 0;
  UVar3 = 0x150;
  pHVar1 = GetDlgItem(param_1,0x442);
  LVar2 = SendMessageA(pHVar1,UVar3,WVar4,LVar5);
  if (LVar2 != *(int *)(param_2 + 0x38)) {
    *(LRESULT *)(param_2 + 0x38) = LVar2;
    if (*(int *)(param_2 + 0xe0) == 0) {
      LVar5 = 0;
      UVar3 = 0x468;
      pHVar1 = GetParent(param_1);
      SendMessageA(pHVar1,UVar3,(WPARAM)param_1,LVar5);
    }
    *(undefined4 *)(param_2 + 0xf4) = 1;
    return 1;
  }
  return 1;
}


