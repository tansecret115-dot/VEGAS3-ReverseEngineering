/* Module: rn5a3260.dll
   Function: FUN_628a24a0
   Address: 628a24a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_628a24a0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  if (param_2 == (int *)0x0) {
    return 0x80040009;
  }
  (**(code **)(*param_2 + 0x10))(param_2,0x80004001,param_3,0);
  return 0;
}


