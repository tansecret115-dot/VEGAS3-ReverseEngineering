/* Module: sfppack2.dll
   Function: FUN_5cd3f468
   Address: 5cd3f468
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_5cd3f468(int param_1)

{
  FUN_5cd3f3cf((void *)(param_1 + 4),1);
  FUN_5cd3f3cf((void *)(param_1 + 8),0);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}


