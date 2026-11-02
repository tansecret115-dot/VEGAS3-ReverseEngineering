/* Module: sfpaplug.dll
   Function: FUN_00442d70
   Address: 00442d70
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00442d70(void)

{
  BOOL BVar1;
  LARGE_INTEGER local_8;
  
  BVar1 = QueryPerformanceFrequency(&local_8);
  return -(uint)(BVar1 != 0) & local_8.s.LowPart;
}


