/* Module: qt4plug.dll
   Function: FUN_5f5498c0
   Address: 5f5498c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f5498c0(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  local_c.s.HighPart = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  uVar1 = local_c.s.HighPart;
  if (DAT_5f5a3cc4 <= (uint)local_c.s.HighPart) {
    uVar1 = (uint)local_c.s.HighPart % DAT_5f5a3cc4;
  }
  local_c.s.LowPart =
       (DWORD)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_5f5a3cc4);
  if (DAT_5f5a3cbc != 0) {
    MulDiv(local_c.s.LowPart,1000000,DAT_5f5a3cbc);
  }
  return;
}


