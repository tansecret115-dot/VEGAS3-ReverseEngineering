/* Module: sfxpfx1.dll
   Function: FUN_5c96ea60
   Address: 5c96ea60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c96ea60(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  uVar1 = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  if (DAT_5c997e58 <= uVar1) {
    uVar1 = uVar1 % DAT_5c997e58;
  }
  return (int)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_5c997e58);
}


