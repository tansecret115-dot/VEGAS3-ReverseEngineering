/* Module: Setup.exe
   Function: FUN_00415820
   Address: 00415820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00415820(void)

{
  int iVar1;
  
  iVar1 = FUN_00415950();
  if (iVar1 != 0) {
    PTR_FUN_00444078 = FUN_004157e0;
    PTR_FUN_0044407c = FUN_00415870;
    PTR_FUN_00444080 = FUN_004158a0;
    PTR_FUN_00444084 = FUN_00415800;
    PTR_FUN_00444088 = FUN_004158d0;
    PTR_FUN_0044408c = FUN_00415910;
    DAT_0044406c = 5;
  }
  return;
}


