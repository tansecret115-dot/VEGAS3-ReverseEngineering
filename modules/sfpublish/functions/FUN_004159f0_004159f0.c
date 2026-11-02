/* Module: sfpublish.dll
   Function: FUN_004159f0
   Address: 004159f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004159f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00436978;
  if ((FILE *)param_1[2] != (FILE *)0x0) {
    fclose((FILE *)param_1[2]);
    param_1[2] = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x87));
  return;
}


