/* Module: vidcap30.exe
   Function: FUN_00522d90
   Address: 00522d90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00522d90(LARGE_INTEGER *param_1)

{
  DWORD DVar1;
  
  DVar1 = (param_1->s).LowPart;
  QueryPerformanceCounter(param_1);
  return (param_1->s).LowPart - DVar1;
}


