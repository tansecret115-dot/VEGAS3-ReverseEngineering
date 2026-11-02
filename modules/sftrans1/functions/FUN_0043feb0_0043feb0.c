/* Module: sftrans1.dll
   Function: FUN_0043feb0
   Address: 0043feb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043feb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x65c));
  *(undefined4 *)(param_1 + 0xc28) = param_2;
  *(undefined4 *)(param_1 + 0xc2c) = param_3;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x65c));
  return 0;
}


