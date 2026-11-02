/* Module: wmfdist2.exe
   Function: FUN_01001d04
   Address: 01001d04
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01001d04(byte param_1)

{
  int iVar1;
  
  if ((param_1 & 2) == 0) {
    iVar1 = FUN_01001c47();
  }
  else {
    iVar1 = 2;
  }
  if (iVar1 == 2) {
    if ((param_1 & 4) == 0) {
      iVar1 = FUN_01003e44((HWND)0x0,0x522,"",(LPCSTR)0x0,0x40,4);
    }
    else {
      iVar1 = 6;
    }
    if (iVar1 == 6) {
      if (DAT_0100bc04 == 0) {
        ExitWindowsEx(2,0);
      }
      else {
        FUN_01001c71();
      }
    }
  }
  return;
}


