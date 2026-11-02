/* Module: vidcap30.exe
   Function: FUN_00405880
   Address: 00405880
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00405880(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xbc) != 0) {
    iVar1 = FUN_00405740(*(int *)(param_1 + 0xbc),param_2,param_3,param_4);
    return iVar1;
  }
  return param_1;
}


