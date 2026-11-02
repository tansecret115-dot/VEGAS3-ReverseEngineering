/* Module: sftrans1.dll
   Function: FUN_0053a300
   Address: 0053a300
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0053a300(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_00622464 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_0062246c == (FARPROC)0x0) {
    DAT_0062246c = GetProcAddress(DAT_00622464,s_KALib_Status_005768b8);
    if (DAT_0062246c == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_0062246c)(param_1);
  return iVar1;
}


