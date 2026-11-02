/* Module: sfs4rw.dll
   Function: FUN_0047aed0
   Address: 0047aed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047aed0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((code *)param_1[0x13] != (code *)0x0) {
    (*(code *)param_1[0x13])(param_1,param_2,param_3);
    return;
  }
  FUN_00475ad0(param_1,"Call to NULL write function");
  return;
}


