/* Module: rmbe3260.dll
   Function: FUN_6604f3b0
   Address: 6604f3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6604f3b0(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return 0x80004003;
  }
  param_1[5] = 0;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
  return uVar1;
}


