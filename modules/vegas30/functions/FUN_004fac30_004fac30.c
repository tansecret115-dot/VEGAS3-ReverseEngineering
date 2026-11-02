/* Module: vegas30.exe
   Function: FUN_004fac30
   Address: 004fac30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fac30(int *param_1)

{
  HWND pHVar1;
  BOOL BVar2;
  
  pHVar1 = GetFocus();
  if (pHVar1 == (HWND)*param_1) {
    FUN_004fabd0(param_1);
    BVar2 = PtInRect((RECT *)(param_1 + 4),(POINT)0x1400000014);
    if (BVar2 != 0) {
      SetCaretPos(0x14,0x14);
      ShowCaret((HWND)*param_1);
      param_1[3] = param_1[3] | 1;
    }
  }
  return;
}


