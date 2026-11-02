/* Module: Setup.exe
   Function: FUN_004155a0
   Address: 004155a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004155a0(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  local_c.s.HighPart = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  uVar1 = local_c.s.HighPart;
  if (DAT_00444064 <= (uint)local_c.s.HighPart) {
    uVar1 = (uint)local_c.s.HighPart % DAT_00444064;
  }
  local_c.s.LowPart =
       (DWORD)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_00444064);
  if (DAT_0044405c != 0) {
    MulDiv(local_c.s.LowPart,1000000,DAT_0044405c);
  }
  return;
}


