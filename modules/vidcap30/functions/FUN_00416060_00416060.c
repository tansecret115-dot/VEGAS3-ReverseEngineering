/* Module: vidcap30.exe
   Function: FUN_00416060
   Address: 00416060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00416060(HWND param_1,LPCSTR param_2)

{
  LONG LVar1;
  
  if (param_1 != (HWND)0x0) {
    LVar1 = GetWindowLongA(param_1,8);
    lstrcpynA((LPSTR)(LVar1 + 0x28),param_2,0x104);
    *(undefined1 *)(LVar1 + 299) = 0;
    SetDlgItemTextA(param_1,0x4fb,param_2);
  }
  return;
}


