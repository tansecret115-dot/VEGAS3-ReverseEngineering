/* Module: oggplug.dll
   Function: FUN_0041f340
   Address: 0041f340
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041f340(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  local_c.s.HighPart = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  uVar1 = local_c.s.HighPart;
  if (DAT_00450c7c <= (uint)local_c.s.HighPart) {
    uVar1 = (uint)local_c.s.HighPart % DAT_00450c7c;
  }
  local_c.s.LowPart =
       (DWORD)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_00450c7c);
  if (DAT_00450c74 != 0) {
    MulDiv(local_c.s.LowPart,1000000,DAT_00450c74);
  }
  return;
}


