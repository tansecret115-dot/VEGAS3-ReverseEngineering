/* Module: rn5a3260.dll
   Function: FUN_628a2470
   Address: 628a2470
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_628a2470(undefined4 param_1,int *param_2,undefined4 param_3)

{
  if (param_2 == (int *)0x0) {
    return 0x80040009;
  }
  (**(code **)(*param_2 + 0xc))(param_2,0x80004001,param_3);
  return 0;
}


