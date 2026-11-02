/* Module: sfppack3.dll
   Function: FUN_5cc7739c
   Address: 5cc7739c
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5cc7739c(int param_1)

{
  FUN_5cc77303((void *)(param_1 + 4),1);
  FUN_5cc77303((void *)(param_1 + 8),0);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}


