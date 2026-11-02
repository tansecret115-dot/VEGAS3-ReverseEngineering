/* Module: sctplug.dll
   Function: FUN_0042d850
   Address: 0042d850
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042d850(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  local_c.s.HighPart = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  uVar1 = local_c.s.HighPart;
  if (DAT_0043ca04 <= (uint)local_c.s.HighPart) {
    uVar1 = (uint)local_c.s.HighPart % DAT_0043ca04;
  }
  local_c.s.LowPart =
       (DWORD)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_0043ca04);
  if (DAT_0043c9fc != 0) {
    MulDiv(local_c.s.LowPart,1000000,DAT_0043c9fc);
  }
  return;
}


