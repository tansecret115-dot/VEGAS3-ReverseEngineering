/* Module: vidcap30.exe
   Function: FUN_00522e80
   Address: 00522e80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00522e80(void)

{
  BOOL BVar1;
  LARGE_INTEGER local_8;
  
  BVar1 = QueryPerformanceFrequency(&local_8);
  return -(uint)(BVar1 != 0) & local_8.s.LowPart;
}


