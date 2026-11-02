/* Module: sfs4rw.dll
   Function: FUN_004276e0
   Address: 004276e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004276e0(LARGE_INTEGER *param_1)

{
  DWORD DVar1;
  
  DVar1 = (param_1->s).LowPart;
  QueryPerformanceCounter(param_1);
  return (param_1->s).LowPart - DVar1;
}


