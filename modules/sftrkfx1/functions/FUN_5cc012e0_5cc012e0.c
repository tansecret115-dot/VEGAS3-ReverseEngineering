/* Module: sftrkfx1.dll
   Function: FUN_5cc012e0
   Address: 5cc012e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cc012e0(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_5cc17da0 == (HMODULE)0x0) {
    return -0x23;
  }
  if (DAT_5cc17da8 == (FARPROC)0x0) {
    DAT_5cc17da8 = GetProcAddress(DAT_5cc17da0,s_KALib_Status_5cc113e4);
    if (DAT_5cc17da8 == (FARPROC)0x0) {
      return -0x2717;
    }
  }
  iVar1 = (*DAT_5cc17da8)(param_1);
  return iVar1;
}


