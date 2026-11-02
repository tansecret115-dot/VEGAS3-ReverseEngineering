/* Module: mcplug.dll
   Function: FUN_00439fb0
   Address: 00439fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00439fb0(LARGE_INTEGER *param_1)

{
  DWORD DVar1;
  
  DVar1 = (param_1->s).LowPart;
  QueryPerformanceCounter(param_1);
  return (param_1->s).LowPart - DVar1;
}


