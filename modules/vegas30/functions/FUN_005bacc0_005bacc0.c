/* Module: vegas30.exe
   Function: FUN_005bacc0
   Address: 005bacc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005bacc0(undefined4 *param_1,int param_2)

{
  if (param_2 == 0) {
    if (DAT_00648838 == 0) {
      return 0;
    }
  }
  else {
    if ((param_2 < 2) || (3 < param_2)) {
      param_2 = 0;
    }
    if (param_2 == DAT_00648838) {
      param_2 = 0;
    }
  }
  FUN_005b83b0(param_1,1);
  DAT_00648838 = param_2;
  *(uint *)*param_1 = *(uint *)*param_1 | 0x200;
  FUN_005b84d0(param_1,1);
  return 0;
}


