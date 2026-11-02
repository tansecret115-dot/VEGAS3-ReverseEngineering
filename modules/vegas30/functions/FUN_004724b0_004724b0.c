/* Module: vegas30.exe
   Function: FUN_004724b0
   Address: 004724b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004724b0(uint param_1,uint param_2,uint param_3)

{
  if ((int)param_3 < 1) {
    return 1;
  }
  return (int)(((ulonglong)param_3 * (ulonglong)param_2 + (ulonglong)(param_1 >> 1)) /
              (ulonglong)param_1);
}


