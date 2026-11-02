/* Module: vidcap30.exe
   Function: FUN_00424ef0
   Address: 00424ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00424ef0(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_1 == 7) {
    if (((param_1[0x52] & 4U) != 0) && ((param_1[0x52] & 0x400U) != 0)) {
      param_1[0xe8] = param_2;
      param_1[0xe9] = param_3;
      uVar1 = (**(code **)(*(int *)param_1[200] + 0x38))((int *)param_1[200],param_1 + 0xe8,1,0,0);
    }
  }
  return uVar1;
}


