/* Module: qt4plug.dll
   Function: FUN_5f549930
   Address: 5f549930
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f549930(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  uVar1 = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  if (DAT_5f5a3cc0 <= uVar1) {
    uVar1 = uVar1 % DAT_5f5a3cc0;
  }
  return (int)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_5f5a3cc0);
}


