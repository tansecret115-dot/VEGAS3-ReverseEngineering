/* Module: mp3rw.dll
   Function: FUN_00427710
   Address: 00427710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00427710(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  uVar1 = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  if (DAT_004a6488 <= uVar1) {
    uVar1 = uVar1 % DAT_004a6488;
  }
  return (int)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_004a6488);
}


