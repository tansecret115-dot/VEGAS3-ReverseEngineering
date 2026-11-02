/* Module: sftrans1.dll
   Function: FUN_00508b40
   Address: 00508b40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00508b40(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  uVar1 = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  if (DAT_005764d0 <= uVar1) {
    uVar1 = uVar1 % DAT_005764d0;
  }
  return (int)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_005764d0);
}


