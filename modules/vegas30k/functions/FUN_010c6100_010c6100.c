/* Module: vegas30k.dll
   Function: FUN_010c6100
   Address: 010c6100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010c6100(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  uVar1 = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  if (DAT_01206530 <= uVar1) {
    uVar1 = uVar1 % DAT_01206530;
  }
  return (int)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_01206530);
}


