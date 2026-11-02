/* Module: vegas30k.dll
   Function: FUN_011c7960
   Address: 011c7960
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011c7960(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_011ec2ec;
  if (param_1[3] != 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  }
  return;
}


