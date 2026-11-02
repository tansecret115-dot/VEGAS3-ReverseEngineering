/* Module: sftrans1.dll
   Function: FUN_00508b90
   Address: 00508b90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00508b90(LARGE_INTEGER *param_1)

{
  DWORD DVar1;
  
  DVar1 = (param_1->s).LowPart;
  QueryPerformanceCounter(param_1);
  return (param_1->s).LowPart - DVar1;
}


