/* Module: Setup.exe
   Function: FUN_00415610
   Address: 00415610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00415610(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  uVar1 = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  if (DAT_00444060 <= uVar1) {
    uVar1 = uVar1 % DAT_00444060;
  }
  return (int)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_00444060);
}


