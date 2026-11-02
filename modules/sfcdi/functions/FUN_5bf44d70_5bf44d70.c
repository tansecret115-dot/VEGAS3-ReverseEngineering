/* Module: sfcdi.dll
   Function: FUN_5bf44d70
   Address: 5bf44d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf44d70(uint *param_1)

{
  uint uVar1;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  uVar1 = (local_c.s.HighPart - param_1[1]) - (uint)(local_c.s.LowPart < *param_1);
  if (DAT_5bf65dc0 <= uVar1) {
    uVar1 = uVar1 % DAT_5bf65dc0;
  }
  return (int)(CONCAT44(uVar1,local_c.s.LowPart - *param_1) / (ulonglong)DAT_5bf65dc0);
}


