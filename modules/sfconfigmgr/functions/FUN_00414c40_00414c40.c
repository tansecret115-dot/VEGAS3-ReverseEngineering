/* Module: sfconfigmgr.dll
   Function: FUN_00414c40
   Address: 00414c40
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00414c40(void)

{
  BOOL BVar1;
  LARGE_INTEGER local_8;
  
  BVar1 = QueryPerformanceFrequency(&local_8);
  return -(uint)(BVar1 != 0) & local_8.s.LowPart;
}


