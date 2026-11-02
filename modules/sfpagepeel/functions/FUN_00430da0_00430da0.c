/* Module: sfpagepeel.dll
   Function: FUN_00430da0
   Address: 00430da0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00430da0(LARGE_INTEGER *param_1)

{
  DWORD DVar1;
  
  DVar1 = (param_1->s).LowPart;
  QueryPerformanceCounter(param_1);
  return (param_1->s).LowPart - DVar1;
}


