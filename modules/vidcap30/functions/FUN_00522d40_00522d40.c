/* Module: vidcap30.exe
   Function: FUN_00522d40
   Address: 00522d40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00522d40(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  uVar1 = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  if (DAT_005b8648 <= uVar1) {
    uVar1 = uVar1 % DAT_005b8648;
  }
  return (int)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_005b8648);
}


