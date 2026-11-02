/* Module: wmfplug2.dll
   Function: FUN_0044b030
   Address: 0044b030
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044b030(LARGE_INTEGER *param_1)

{
  DWORD DVar1;
  
  DVar1 = (param_1->s).LowPart;
  QueryPerformanceCounter(param_1);
  return (param_1->s).LowPart - DVar1;
}


