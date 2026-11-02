/* Module: sfmarket2.dll
   Function: FUN_0041fd90
   Address: 0041fd90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0041fd90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00498178;
  if ((FILE *)param_1[2] != (FILE *)0x0) {
    fclose((FILE *)param_1[2]);
    param_1[2] = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x87));
  return;
}


