/* Module: vidcap30.exe
   Function: FUN_00426ed0
   Address: 00426ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00426ed0(int *param_1,int *param_2,int *param_3)

{
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
    param_3[1] = 0;
  }
  if ((*param_1 == 8) && ((param_1[0x53] & 0x80U) != 0)) {
    *param_2 = param_1[0x1fe];
    param_2[1] = param_1[0x1ff];
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[0x200];
      param_3[1] = param_1[0x201];
    }
  }
  return 0;
}


