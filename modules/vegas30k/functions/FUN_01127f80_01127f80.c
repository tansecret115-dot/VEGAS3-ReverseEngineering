/* Module: vegas30k.dll
   Function: FUN_01127f80
   Address: 01127f80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01127f80(int param_1,int param_2,double param_3,double param_4,double param_5,
                 double param_6,double param_7,double param_8,double param_9,double param_10)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(float *)(param_2 + 0x71) = (float)param_3;
    *(float *)(param_2 + 0x75) = (float)param_4;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 4;
    *(float *)(param_2 + 0x79) = (float)param_5;
    *(float *)(param_2 + 0x7d) = (float)param_6;
    *(float *)(param_2 + 0x81) = (float)param_7;
    *(float *)(param_2 + 0x85) = (float)param_8;
    *(float *)(param_2 + 0x89) = (float)param_9;
    *(float *)(param_2 + 0x8d) = (float)param_10;
  }
  return;
}


