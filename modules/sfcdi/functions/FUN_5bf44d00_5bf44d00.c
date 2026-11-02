/* Module: sfcdi.dll
   Function: FUN_5bf44d00
   Address: 5bf44d00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf44d00(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  local_c.s.HighPart = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  uVar1 = local_c.s.HighPart;
  if (DAT_5bf65dc4 <= (uint)local_c.s.HighPart) {
    uVar1 = (uint)local_c.s.HighPart % DAT_5bf65dc4;
  }
  local_c.s.LowPart =
       (DWORD)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_5bf65dc4);
  if (DAT_5bf65dbc != 0) {
    MulDiv(local_c.s.LowPart,1000000,DAT_5bf65dbc);
  }
  return;
}


