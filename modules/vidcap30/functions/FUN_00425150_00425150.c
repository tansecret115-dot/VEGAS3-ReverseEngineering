/* Module: vidcap30.exe
   Function: FUN_00425150
   Address: 00425150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00425150(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_1 == 7) {
    if (((param_1[0x52] & 4U) != 0) && ((param_1[0x52] & 0x400U) != 0)) {
      param_1[0xe4] = param_2;
      param_1[0xe5] = param_3;
      uVar1 = (**(code **)(*(int *)param_1[200] + 0x38))((int *)param_1[200],0,0,param_1 + 0xe4,1);
    }
  }
  return uVar1;
}


