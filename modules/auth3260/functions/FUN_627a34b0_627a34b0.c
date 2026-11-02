/* Module: auth3260.dll
   Function: FUN_627a34b0
   Address: 627a34b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627a34b0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  if (param_2 == (int *)0x0) {
    return 0x80040009;
  }
  (**(code **)(*param_2 + 0xc))(param_2,0x80004001,param_3);
  return 0;
}


