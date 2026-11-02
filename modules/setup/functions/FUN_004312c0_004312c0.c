/* Module: Setup.exe
   Function: FUN_004312c0
   Address: 004312c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004312c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_0044f3b0 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_0044f3b4 == (FARPROC)0x0) {
    DAT_0044f3b4 = GetProcAddress(DAT_0044f3b0,s_KALib_Validate_00446bcc);
    if (DAT_0044f3b4 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_0044f3b4)(param_1,param_2,param_3);
  return iVar1;
}


