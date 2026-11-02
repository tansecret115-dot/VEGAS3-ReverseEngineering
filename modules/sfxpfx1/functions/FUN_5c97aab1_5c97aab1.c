/* Module: sfxpfx1.dll
   Function: FUN_5c97aab1
   Address: 5c97aab1
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c97aab1(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(HWND *)(param_1 + 0x14) == (HWND)0x0) {
    uVar1 = 0x8000ffff;
  }
  else if (((param_2 == 5) || (param_2 == 1)) || (param_2 == 0)) {
    ShowWindow(*(HWND *)(param_1 + 0x14),param_2);
    InvalidateRect(*(HWND *)(param_1 + 0x14),(RECT *)0x0,1);
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80070057;
  }
  return uVar1;
}


