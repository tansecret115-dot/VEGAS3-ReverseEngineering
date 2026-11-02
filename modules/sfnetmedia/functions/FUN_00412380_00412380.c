/* Module: sfnetmedia.dll
   Function: FUN_00412380
   Address: 00412380
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00412380(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004366d8;
  if ((FILE *)param_1[2] != (FILE *)0x0) {
    fclose((FILE *)param_1[2]);
    param_1[2] = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x87));
  return;
}


