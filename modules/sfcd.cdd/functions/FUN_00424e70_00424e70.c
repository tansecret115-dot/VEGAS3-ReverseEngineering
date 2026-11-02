/* Module: sfcd.cdd
   Function: FUN_00424e70
   Address: 00424e70
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00424e70(void)

{
  BOOL BVar1;
  LARGE_INTEGER local_8;
  
  BVar1 = QueryPerformanceFrequency(&local_8);
  return -(uint)(BVar1 != 0) & local_8.s.LowPart;
}


