/* Module: vidcap30.exe
   Function: FUN_00427010
   Address: 00427010
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00427010(int *param_1,undefined4 param_2,int param_3)

{
  if ((*param_1 == 8) && ((param_1[0x53] & 0x40U) != 0)) {
    if (param_3 != 0) {
      FUN_00427060(param_1,param_2);
      return;
    }
    FUN_00427160(param_1,param_2);
  }
  return;
}


