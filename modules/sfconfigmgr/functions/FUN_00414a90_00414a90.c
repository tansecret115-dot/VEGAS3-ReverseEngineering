/* Module: sfconfigmgr.dll
   Function: FUN_00414a90
   Address: 00414a90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00414a90(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  local_c.s.HighPart = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  uVar1 = local_c.s.HighPart;
  if (DAT_00422e74 <= (uint)local_c.s.HighPart) {
    uVar1 = (uint)local_c.s.HighPart % DAT_00422e74;
  }
  local_c.s.LowPart =
       (DWORD)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_00422e74);
  if (DAT_00422e6c != 0) {
    MulDiv(local_c.s.LowPart,1000000,DAT_00422e6c);
  }
  return;
}


