/* Module: sfs4rw.dll
   Function: FUN_004865c0
   Address: 004865c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004865c0(int param_1,char *param_2,int param_3)

{
  if (*(char *)(param_1 + 0xc) == '\0') {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      FUN_00486340(param_1,(int)*param_2,1);
      param_2 = param_2 + 1;
    }
  }
  return;
}


