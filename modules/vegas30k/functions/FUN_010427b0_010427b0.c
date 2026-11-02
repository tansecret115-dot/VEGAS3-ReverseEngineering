/* Module: vegas30k.dll
   Function: FUN_010427b0
   Address: 010427b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010427b0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_010427f0(param_1,param_2,param_3);
    if (iVar1 == 0) {
      if (param_4 != 0) {
        return 0;
      }
    }
    else if (param_4 == 0) {
      return 0;
    }
  }
  return 1;
}


