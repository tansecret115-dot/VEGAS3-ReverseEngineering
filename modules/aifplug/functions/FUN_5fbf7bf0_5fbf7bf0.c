/* Module: aifplug.dll
   Function: FUN_5fbf7bf0
   Address: 5fbf7bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbf7bf0(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  uVar1 = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  if (DAT_5fc095e0 <= uVar1) {
    uVar1 = uVar1 % DAT_5fc095e0;
  }
  return (int)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_5fc095e0);
}


