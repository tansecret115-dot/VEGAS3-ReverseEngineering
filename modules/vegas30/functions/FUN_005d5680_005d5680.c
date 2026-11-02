/* Module: vegas30.exe
   Function: FUN_005d5680
   Address: 005d5680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d5680(HWND param_1,HWND param_2,undefined4 *param_3,int param_4)

{
  LRESULT LVar1;
  HWND pHVar2;
  BOOL BVar3;
  
  if (param_4 == 1) {
    LVar1 = SendMessageA(param_2,0x147,0,0);
    if (LVar1 == 0) {
      param_3[2] = 0;
    }
    else {
      param_3[2] = 1;
      param_3[6] = LVar1 + -1;
    }
    BVar3 = param_3[2];
    pHVar2 = GetDlgItem(param_1,0x4b2);
    EnableWindow(pHVar2,BVar3);
    BVar3 = param_3[2];
    pHVar2 = GetDlgItem(param_1,0x503);
    EnableWindow(pHVar2,BVar3);
    *param_3 = 1;
    return 1;
  }
  return 1;
}


