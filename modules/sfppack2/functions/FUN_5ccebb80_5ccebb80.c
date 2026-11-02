/* Module: sfppack2.dll
   Function: FUN_5ccebb80
   Address: 5ccebb80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccebb80(int param_1,undefined4 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  *(undefined4 *)(param_1 + 0xec) = 1;
  *(undefined4 *)(param_1 + 0x230) = param_2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  return 0;
}


