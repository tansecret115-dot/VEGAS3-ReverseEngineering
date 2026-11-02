/* Module: sfmarket2.dll
   Function: FUN_00441cc0
   Address: 00441cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00441cc0(LARGE_INTEGER *param_1)

{
  DWORD DVar1;
  
  DVar1 = (param_1->s).LowPart;
  QueryPerformanceCounter(param_1);
  return (param_1->s).LowPart - DVar1;
}


