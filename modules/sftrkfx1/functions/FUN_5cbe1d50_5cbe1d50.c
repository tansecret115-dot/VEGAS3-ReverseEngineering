/* Module: sftrkfx1.dll
   Function: FUN_5cbe1d50
   Address: 5cbe1d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbe1d50(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  local_c.s.HighPart = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  uVar1 = local_c.s.HighPart;
  if (DAT_5cc10f4c <= (uint)local_c.s.HighPart) {
    uVar1 = (uint)local_c.s.HighPart % DAT_5cc10f4c;
  }
  local_c.s.LowPart =
       (DWORD)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_5cc10f4c);
  if (DAT_5cc10f44 != 0) {
    MulDiv(local_c.s.LowPart,1000000,DAT_5cc10f44);
  }
  return;
}


