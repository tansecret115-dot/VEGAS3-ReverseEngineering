/* Module: sfcd.cdd
   Function: FUN_00424d80
   Address: 00424d80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00424d80(LARGE_INTEGER *param_1)

{
  DWORD DVar1;
  
  DVar1 = (param_1->s).LowPart;
  QueryPerformanceCounter(param_1);
  return (param_1->s).LowPart - DVar1;
}


