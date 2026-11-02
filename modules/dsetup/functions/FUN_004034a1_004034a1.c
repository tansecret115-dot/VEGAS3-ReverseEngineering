/* Module: dsetup.dll
   Function: FUN_004034a1
   Address: 004034a1
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004034a1(void)

{
  FUN_00404f72();
  if (DAT_00408050 != 0xffffffff) {
    TlsFree(DAT_00408050);
    DAT_00408050 = 0xffffffff;
  }
  return;
}


