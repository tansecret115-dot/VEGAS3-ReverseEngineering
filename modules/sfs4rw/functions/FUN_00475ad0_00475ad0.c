/* Module: sfs4rw.dll
   Function: FUN_00475ad0
   Address: 00475ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00475ad0(int *param_1,undefined4 param_2)

{
  if ((code *)param_1[0x10] != (code *)0x0) {
    (*(code *)param_1[0x10])(param_1,param_2);
  }
  FUN_00475c30(param_1,param_2);
  return;
}


