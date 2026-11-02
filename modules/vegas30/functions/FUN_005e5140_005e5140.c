/* Module: vegas30.exe
   Function: FUN_005e5140
   Address: 005e5140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005e5140(HWND param_1,HWND param_2,int param_3,int param_4)

{
  BOOL *pBVar1;
  LRESULT LVar2;
  HWND pHVar3;
  BOOL BVar4;
  
  if (param_4 == 1) {
    LVar2 = SendMessageA(param_2,0x147,0,0);
    pBVar1 = (BOOL *)(param_3 + 0x18);
    if (LVar2 == 0) {
      *pBVar1 = 0;
    }
    else {
      *pBVar1 = 1;
      *(LRESULT *)(param_3 + 0x1c) = LVar2 + -1;
    }
    BVar4 = *pBVar1;
    pHVar3 = GetDlgItem(param_1,0x4b2);
    EnableWindow(pHVar3,BVar4);
    BVar4 = *pBVar1;
    pHVar3 = GetDlgItem(param_1,0x503);
    EnableWindow(pHVar3,BVar4);
    return 1;
  }
  return 0;
}


