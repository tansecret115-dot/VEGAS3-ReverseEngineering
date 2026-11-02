/* Module: vidcap30.exe
   Function: FUN_0057b7f0
   Address: 0057b7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0057b7f0(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (*param_2 == 0) {
    *param_1 = param_2[1];
  }
  else {
    *(int *)(*param_2 + 4) = param_2[1];
  }
  if ((int *)param_2[1] == (int *)0x0) {
    param_1[1] = *param_2;
  }
  else {
    *(int *)param_2[1] = *param_2;
  }
  iVar1 = param_2[2];
  if (param_1[4] < param_1[3]) {
    param_2[1] = param_1[5];
    param_1[5] = (int)param_2;
    param_1[4] = param_1[4] + 1;
    param_1[2] = param_1[2] + -1;
    return iVar1;
  }
  FUN_00404b20(param_2);
  param_1[2] = param_1[2] + -1;
  return iVar1;
}


