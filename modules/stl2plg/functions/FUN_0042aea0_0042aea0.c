/* Module: stl2plg.dll
   Function: FUN_0042aea0
   Address: 0042aea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042aea0(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  local_c.s.HighPart = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  uVar1 = local_c.s.HighPart;
  if (DAT_00472354 <= (uint)local_c.s.HighPart) {
    uVar1 = (uint)local_c.s.HighPart % DAT_00472354;
  }
  local_c.s.LowPart =
       (DWORD)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_00472354);
  if (DAT_0047234c != 0) {
    MulDiv(local_c.s.LowPart,1000000,DAT_0047234c);
  }
  return;
}


