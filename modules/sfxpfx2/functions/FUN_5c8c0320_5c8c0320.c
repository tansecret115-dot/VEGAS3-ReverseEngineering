/* Module: sfxpfx2.dll
   Function: FUN_5c8c0320
   Address: 5c8c0320
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8c0320(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  local_c.s.HighPart = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  uVar1 = local_c.s.HighPart;
  if (DAT_5c8e8a94 <= (uint)local_c.s.HighPart) {
    uVar1 = (uint)local_c.s.HighPart % DAT_5c8e8a94;
  }
  local_c.s.LowPart =
       (DWORD)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_5c8e8a94);
  if (DAT_5c8e8a8c != 0) {
    MulDiv(local_c.s.LowPart,1000000,DAT_5c8e8a8c);
  }
  return;
}


