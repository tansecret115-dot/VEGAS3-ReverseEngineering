/* Module: wmfplug2.dll
   Function: FUN_0044af70
   Address: 0044af70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044af70(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  local_c.s.HighPart = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  uVar1 = local_c.s.HighPart;
  if (DAT_00489a8c <= (uint)local_c.s.HighPart) {
    uVar1 = (uint)local_c.s.HighPart % DAT_00489a8c;
  }
  local_c.s.LowPart =
       (DWORD)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_00489a8c);
  if (DAT_00489a84 != 0) {
    MulDiv(local_c.s.LowPart,1000000,DAT_00489a84);
  }
  return;
}


