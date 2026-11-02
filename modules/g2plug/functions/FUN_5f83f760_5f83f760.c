/* Module: g2plug.dll
   Function: FUN_5f83f760
   Address: 5f83f760
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f83f760(void)

{
  BOOL BVar1;
  LARGE_INTEGER local_8;
  
  BVar1 = QueryPerformanceFrequency(&local_8);
  return -(uint)(BVar1 != 0) & local_8.s.LowPart;
}


