/* Module: vidpcore.dll
   Function: FUN_5ded8940
   Address: 5ded8940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ded8940(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  uVar1 = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  if (DAT_5df3e830 <= uVar1) {
    uVar1 = uVar1 % DAT_5df3e830;
  }
  return (int)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_5df3e830);
}


