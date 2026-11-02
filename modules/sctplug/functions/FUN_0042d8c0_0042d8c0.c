/* Module: sctplug.dll
   Function: FUN_0042d8c0
   Address: 0042d8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042d8c0(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  uVar1 = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  if (DAT_0043ca00 <= uVar1) {
    uVar1 = uVar1 % DAT_0043ca00;
  }
  return (int)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_0043ca00);
}


