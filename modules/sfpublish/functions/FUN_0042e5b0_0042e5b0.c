/* Module: sfpublish.dll
   Function: FUN_0042e5b0
   Address: 0042e5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042e5b0(LARGE_INTEGER *param_1)

{
  DWORD DVar1;
  
  DVar1 = (param_1->s).LowPart;
  QueryPerformanceCounter(param_1);
  return (param_1->s).LowPart - DVar1;
}


