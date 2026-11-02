/* Module: vidcap30.exe
   Function: FUN_005698b0
   Address: 005698b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005698b0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_3 < param_4) {
    iVar1 = param_3 + -1;
    do {
      FUN_0055eba0(param_1,iVar1,param_1,param_3,1,param_2);
      param_3 = param_3 + 1;
    } while (param_3 < param_4);
  }
  return;
}


