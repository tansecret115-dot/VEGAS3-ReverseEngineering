/* Module: extmondrv.dll
   Function: FUN_00426ae0
   Address: 00426ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00426ae0(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  uVar1 = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  if (DAT_0045ac60 <= uVar1) {
    uVar1 = uVar1 % DAT_0045ac60;
  }
  return (int)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_0045ac60);
}


