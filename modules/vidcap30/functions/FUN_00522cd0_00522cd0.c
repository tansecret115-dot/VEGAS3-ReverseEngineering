/* Module: vidcap30.exe
   Function: FUN_00522cd0
   Address: 00522cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00522cd0(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  local_c.s.HighPart = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  uVar1 = local_c.s.HighPart;
  if (DAT_005b864c <= (uint)local_c.s.HighPart) {
    uVar1 = (uint)local_c.s.HighPart % DAT_005b864c;
  }
  local_c.s.LowPart =
       (DWORD)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_005b864c);
  if (DAT_005b8644 != 0) {
    MulDiv(local_c.s.LowPart,1000000,DAT_005b8644);
  }
  return;
}


