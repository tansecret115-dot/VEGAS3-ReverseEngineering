/* Module: aifplug.dll
   Function: FUN_5fbf7c40
   Address: 5fbf7c40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbf7c40(LARGE_INTEGER *param_1)

{
  DWORD DVar1;
  
  DVar1 = (param_1->s).LowPart;
  QueryPerformanceCounter(param_1);
  return (param_1->s).LowPart - DVar1;
}


