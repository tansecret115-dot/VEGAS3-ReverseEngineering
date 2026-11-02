/* Module: vegas30.exe
   Function: FUN_00542520
   Address: 00542520
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 FUN_00542520(int param_1,float param_2,int param_3)

{
  if (param_3 != 0) {
    *(float *)(param_1 + 0x20) = param_2 * *(float *)(param_1 + 0x20);
    return (float10)*(float *)(param_1 + 0x20);
  }
  *(float *)(param_1 + 0x20) = param_2;
  return (float10)*(float *)(param_1 + 0x20);
}


