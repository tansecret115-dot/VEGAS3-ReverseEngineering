/* Module: vidpcore.dll
   Function: FUN_5ded88d0
   Address: 5ded88d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ded88d0(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  local_c.s.HighPart = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  uVar1 = local_c.s.HighPart;
  if (DAT_5df3e834 <= (uint)local_c.s.HighPart) {
    uVar1 = (uint)local_c.s.HighPart % DAT_5df3e834;
  }
  local_c.s.LowPart =
       (DWORD)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_5df3e834);
  if (DAT_5df3e82c != 0) {
    MulDiv(local_c.s.LowPart,1000000,DAT_5df3e82c);
  }
  return;
}


