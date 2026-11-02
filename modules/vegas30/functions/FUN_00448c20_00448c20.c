/* Module: vegas30.exe
   Function: FUN_00448c20
   Address: 00448c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00448c20(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0xb4) != 0) {
    _SfVideoKeyframe_SetTransformParam_20
              (*(int *)(param_1 + 0xb4),param_2,param_3,0xffffffff,0xffffffff);
  }
  return;
}


