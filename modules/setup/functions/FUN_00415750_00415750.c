/* Module: Setup.exe
   Function: FUN_00415750
   Address: 00415750
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00415750(void)

{
  BOOL BVar1;
  LARGE_INTEGER local_8;
  
  BVar1 = QueryPerformanceFrequency(&local_8);
  return -(uint)(BVar1 != 0) & local_8.s.LowPart;
}


