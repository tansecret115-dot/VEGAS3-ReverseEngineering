/* Module: vegas30.exe
   Function: FUN_0050ffa0
   Address: 0050ffa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050ffa0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  *param_3 = 100000;
  param_3[1] = 100000;
  param_3[2] = -100000;
  param_3[3] = -100000;
  if (0 < param_2) {
    do {
      iVar1 = *param_3;
      if (*param_1 <= *param_3) {
        iVar1 = *param_1;
      }
      *param_3 = iVar1;
      iVar1 = param_3[2];
      if (param_3[2] <= *param_1) {
        iVar1 = *param_1;
      }
      param_3[2] = iVar1;
      iVar1 = param_3[1];
      if (param_1[1] <= param_3[1]) {
        iVar1 = param_1[1];
      }
      param_3[1] = iVar1;
      iVar1 = param_3[3];
      if (param_3[3] <= param_1[1]) {
        iVar1 = param_1[1];
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
      param_3[3] = iVar1;
    } while (param_2 != 0);
  }
  return;
}


