/* Module: qt4plug.dll
   Function: FUN_5f549a70
   Address: 5f549a70
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f549a70(void)

{
  BOOL BVar1;
  LARGE_INTEGER local_8;
  
  BVar1 = QueryPerformanceFrequency(&local_8);
  return -(uint)(BVar1 != 0) & local_8.s.LowPart;
}


