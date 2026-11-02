/* Module: extmondrv.dll
   Function: FUN_00426b30
   Address: 00426b30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00426b30(LARGE_INTEGER *param_1)

{
  DWORD DVar1;
  
  DVar1 = (param_1->s).LowPart;
  QueryPerformanceCounter(param_1);
  return (param_1->s).LowPart - DVar1;
}


