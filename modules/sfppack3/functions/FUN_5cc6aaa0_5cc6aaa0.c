/* Module: sfppack3.dll
   Function: FUN_5cc6aaa0
   Address: 5cc6aaa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc6aaa0(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  uVar1 = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  if (DAT_5cc979c8 <= uVar1) {
    uVar1 = uVar1 % DAT_5cc979c8;
  }
  return (int)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_5cc979c8);
}


