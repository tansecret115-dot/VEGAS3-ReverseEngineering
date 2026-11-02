/* Module: stl2plg.dll
   Function: FUN_0042af60
   Address: 0042af60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042af60(LARGE_INTEGER *param_1)

{
  DWORD DVar1;
  
  DVar1 = (param_1->s).LowPart;
  QueryPerformanceCounter(param_1);
  return (param_1->s).LowPart - DVar1;
}


