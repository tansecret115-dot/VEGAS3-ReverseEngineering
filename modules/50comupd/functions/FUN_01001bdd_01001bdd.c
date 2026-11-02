/* Module: 50comupd.exe
   Function: FUN_01001bdd
   Address: 01001bdd
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01001bdd(byte param_1)

{
  int iVar1;
  
  if ((param_1 & 2) == 0) {
    iVar1 = FUN_01001b20();
  }
  else {
    iVar1 = 2;
  }
  if (iVar1 == 2) {
    if ((param_1 & 4) == 0) {
      iVar1 = FUN_01003ce8((HWND)0x0,0x522,"",(LPCSTR)0x0,0x40,4);
    }
    else {
      iVar1 = 6;
    }
    if (iVar1 == 6) {
      if (DAT_0100bc04 == 0) {
        ExitWindowsEx(2,0);
      }
      else {
        FUN_01001b4a();
      }
    }
  }
  return;
}


