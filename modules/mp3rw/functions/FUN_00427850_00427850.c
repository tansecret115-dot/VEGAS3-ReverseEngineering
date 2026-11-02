/* Module: mp3rw.dll
   Function: FUN_00427850
   Address: 00427850
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00427850(void)

{
  BOOL BVar1;
  LARGE_INTEGER local_8;
  
  BVar1 = QueryPerformanceFrequency(&local_8);
  return -(uint)(BVar1 != 0) & local_8.s.LowPart;
}


