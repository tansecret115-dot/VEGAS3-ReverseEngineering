/* Module: sfpublish.dll
   Function: FUN_0042e4f0
   Address: 0042e4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042e4f0(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  local_c.s.HighPart = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  uVar1 = local_c.s.HighPart;
  if (DAT_0044024c <= (uint)local_c.s.HighPart) {
    uVar1 = (uint)local_c.s.HighPart % DAT_0044024c;
  }
  local_c.s.LowPart =
       (DWORD)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_0044024c);
  if (DAT_00440244 != 0) {
    MulDiv(local_c.s.LowPart,1000000,DAT_00440244);
  }
  return;
}


