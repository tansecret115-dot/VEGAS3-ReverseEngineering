/* Module: sfppack3.dll
   Function: FUN_5cc6aaf0
   Address: 5cc6aaf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cc6aaf0(LARGE_INTEGER *param_1)

{
  DWORD DVar1;
  
  DVar1 = (param_1->s).LowPart;
  QueryPerformanceCounter(param_1);
  return (param_1->s).LowPart - DVar1;
}


