/* Module: InstMsi-x86w.exe
   Function: FUN_01001bfb
   Address: 01001bfb
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01001bfb(byte param_1)

{
  int iVar1;
  
  if ((param_1 & 2) == 0) {
    iVar1 = FUN_01001b3e();
  }
  else {
    iVar1 = 2;
  }
  if (iVar1 == 2) {
    if ((param_1 & 4) == 0) {
      iVar1 = FUN_01003cb8((HWND)0x0,0x522,"",(LPCSTR)0x0,0x40,4);
    }
    else {
      iVar1 = 6;
    }
    if (iVar1 == 6) {
      if (DAT_0100bc04 == 0) {
        ExitWindowsEx(2,0);
      }
      else {
        FUN_01001b68();
      }
    }
  }
  return;
}


