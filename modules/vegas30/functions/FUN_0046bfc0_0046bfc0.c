/* Module: vegas30.exe
   Function: FUN_0046bfc0
   Address: 0046bfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0046bfc0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6,undefined4 param_7,int param_8)

{
  undefined4 uVar1;
  
  if ((*(int **)(param_2 + 0x18) != (int *)0x0) && (0 < **(int **)(param_2 + 0x18))) {
    if (param_8 != 0) {
      uVar1 = FUN_0047e740(param_2,param_3,param_4,-param_5,-(param_6 + (uint)(param_5 != 0)),
                           param_7);
      return uVar1;
    }
    uVar1 = FUN_0047e330(param_2,param_3,param_4,param_5,param_6,param_7);
    return uVar1;
  }
  return 1;
}


