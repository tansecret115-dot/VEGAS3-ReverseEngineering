/* Module: vidcap30.exe
   Function: FUN_0052bd80
   Address: 0052bd80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052bd80(int param_1,int param_2,double param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(float *)(param_2 + 0x28) = (float)param_3;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
  }
  return;
}


