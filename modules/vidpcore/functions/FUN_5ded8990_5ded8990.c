/* Module: vidpcore.dll
   Function: FUN_5ded8990
   Address: 5ded8990
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5ded8990(LARGE_INTEGER *param_1)

{
  DWORD DVar1;
  
  DVar1 = (param_1->s).LowPart;
  QueryPerformanceCounter(param_1);
  return (param_1->s).LowPart - DVar1;
}


