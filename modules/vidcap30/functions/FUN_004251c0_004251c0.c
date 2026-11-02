/* Module: vidcap30.exe
   Function: FUN_004251c0
   Address: 004251c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004251c0(int *param_1,uint *param_2)

{
  *param_2 = 0;
  if (*param_1 == 7) {
    if ((param_1[0x52] & 4U) != 0) {
      if ((param_1[0x52] & 0x10000U) != 0) {
        *param_2 = 2;
      }
      if ((param_1[0x52] & 0x4000U) != 0) {
        *param_2 = *param_2 | 1;
      }
    }
  }
  return;
}


