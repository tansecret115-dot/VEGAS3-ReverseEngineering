/* Module: g2plug.dll
   Function: FUN_5f83f620
   Address: 5f83f620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f83f620(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  uVar1 = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  if (DAT_5f876f10 <= uVar1) {
    uVar1 = uVar1 % DAT_5f876f10;
  }
  return (int)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_5f876f10);
}


