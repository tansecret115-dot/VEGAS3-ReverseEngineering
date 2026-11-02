/* Module: sfs4rw.dll
   Function: FUN_004277d0
   Address: 004277d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004277d0(void)

{
  BOOL BVar1;
  LARGE_INTEGER local_8;
  
  BVar1 = QueryPerformanceFrequency(&local_8);
  return -(uint)(BVar1 != 0) & local_8.s.LowPart;
}


