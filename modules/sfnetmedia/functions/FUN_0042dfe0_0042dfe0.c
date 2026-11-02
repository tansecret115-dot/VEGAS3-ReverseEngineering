/* Module: sfnetmedia.dll
   Function: FUN_0042dfe0
   Address: 0042dfe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042dfe0(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  local_c.s.HighPart = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  uVar1 = local_c.s.HighPart;
  if (DAT_00440324 <= (uint)local_c.s.HighPart) {
    uVar1 = (uint)local_c.s.HighPart % DAT_00440324;
  }
  local_c.s.LowPart =
       (DWORD)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_00440324);
  if (DAT_0044031c != 0) {
    MulDiv(local_c.s.LowPart,1000000,DAT_0044031c);
  }
  return;
}


