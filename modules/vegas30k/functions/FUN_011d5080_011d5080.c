/* Module: vegas30k.dll
   Function: FUN_011d5080
   Address: 011d5080
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011d5080(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_011ec6d0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  if ((void *)param_1[0xa8] != (void *)0x0) {
    free((void *)param_1[0xa8]);
  }
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  return;
}


