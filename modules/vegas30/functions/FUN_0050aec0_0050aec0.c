/* Module: vegas30.exe
   Function: FUN_0050aec0
   Address: 0050aec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050aec0(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = *param_2;
  local_4 = param_2[1];
  if ((param_3[2] != *param_3 && -1 < param_3[2] - *param_3) && (param_3[3] != param_3[1])) {
    FUN_0044e9f0(param_1,param_3,&local_8,&DAT_0064b188);
  }
  return;
}


