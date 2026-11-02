/* Module: vegas30.exe
   Function: FUN_00468fb0
   Address: 00468fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00468fb0(int *param_1,int *param_2,int param_3,int param_4)

{
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_10 = ((param_2[2] - *param_2) - param_3) / 2 + *param_2;
  local_8 = local_10 + param_3;
  local_c = ((param_2[3] - param_2[1]) - param_4) / 3 + param_2[1];
  local_4 = local_c + param_4;
  _SfForceRectOntoDesktop_12(&local_10,0,0);
  *param_1 = local_10;
  param_1[1] = local_c;
  param_1[2] = local_8;
  param_1[3] = local_4;
  return;
}


