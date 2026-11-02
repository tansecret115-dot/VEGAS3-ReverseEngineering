/* Module: sftrkfx1.dll
   Function: FUN_5cbe1e10
   Address: 5cbe1e10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cbe1e10(LARGE_INTEGER *param_1)

{
  DWORD DVar1;
  
  DVar1 = (param_1->s).LowPart;
  QueryPerformanceCounter(param_1);
  return (param_1->s).LowPart - DVar1;
}


