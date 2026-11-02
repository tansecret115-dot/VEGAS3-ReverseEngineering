/* Module: oggplug.dll
   Function: FUN_0041f400
   Address: 0041f400
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041f400(LARGE_INTEGER *param_1)

{
  DWORD DVar1;
  
  DVar1 = (param_1->s).LowPart;
  QueryPerformanceCounter(param_1);
  return (param_1->s).LowPart - DVar1;
}


