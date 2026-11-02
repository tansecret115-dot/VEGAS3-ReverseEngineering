/* Module: sfpagepeel.dll
   Function: FUN_00430ce0
   Address: 00430ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00430ce0(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  local_c.s.HighPart = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  uVar1 = local_c.s.HighPart;
  if (DAT_0047cfdc <= (uint)local_c.s.HighPart) {
    uVar1 = (uint)local_c.s.HighPart % DAT_0047cfdc;
  }
  local_c.s.LowPart =
       (DWORD)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_0047cfdc);
  if (DAT_0047cfd4 != 0) {
    MulDiv(local_c.s.LowPart,1000000,DAT_0047cfd4);
  }
  return;
}


