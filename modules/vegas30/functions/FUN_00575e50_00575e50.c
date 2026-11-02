/* Module: vegas30.exe
   Function: FUN_00575e50
   Address: 00575e50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00575e50(HWND param_1,uint param_2)

{
  HWND hWnd;
  uint uVar1;
  LRESULT LVar2;
  
  hWnd = GetDlgItem(param_1,0x434);
  uVar1 = SendMessageA(hWnd,0x146,0,0);
  if (param_2 < uVar1) {
    LVar2 = SendMessageA(hWnd,0x150,param_2,0);
    if (LVar2 < 0) {
      LVar2 = -LVar2;
    }
    return LVar2 / 1000;
  }
  return -1;
}


