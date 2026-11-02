/* Module: vegas30k.dll
   Function: FUN_011992f0
   Address: 011992f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011992f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_011ea8d0;
  if ((void *)param_1[0xfe] != (void *)0x0) {
    free((void *)param_1[0xfe]);
  }
  param_1[0xfe] = 0;
  FUN_011972f0();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x128));
  if ((void *)param_1[0xe] != (void *)0x0) {
    free((void *)param_1[0xe]);
  }
  param_1[0xe] = 0;
  return;
}


