/* Module: vidcap30.exe
   Function: FUN_00424e80
   Address: 00424e80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00424e80(int *param_1,int *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 == 7) {
    if (((param_1[0x52] & 4U) != 0) && ((param_1[0x52] & 0x400U) != 0)) {
      (**(code **)(*(int *)param_1[200] + 0x30))((int *)param_1[200],param_1 + 0xe8);
      *param_2 = param_1[0xe8];
      param_2[1] = param_1[0xe9];
    }
  }
  return;
}


