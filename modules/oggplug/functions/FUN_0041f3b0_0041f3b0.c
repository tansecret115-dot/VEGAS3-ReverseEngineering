/* Module: oggplug.dll
   Function: FUN_0041f3b0
   Address: 0041f3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041f3b0(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  uVar1 = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  if (DAT_00450c78 <= uVar1) {
    uVar1 = uVar1 % DAT_00450c78;
  }
  return (int)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_00450c78);
}


