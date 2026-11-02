/* Module: vidcap30.exe
   Function: FUN_00416000
   Address: 00416000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00416000(HWND param_1,undefined4 param_2)

{
  LONG LVar1;
  HWND pHVar2;
  BOOL BVar3;
  
  if (param_1 != (HWND)0x0) {
    LVar1 = GetWindowLongA(param_1,8);
    BVar3 = 0;
    *(undefined4 *)(LVar1 + 0x18) = param_2;
    pHVar2 = GetDlgItem(param_1,0x959c);
    EnableWindow(pHVar2,BVar3);
    BVar3 = 0;
    pHVar2 = GetDlgItem(param_1,0x95ce);
    EnableWindow(pHVar2,BVar3);
    SetDlgItemTextA(param_1,0x9600,"Close");
  }
  return;
}


