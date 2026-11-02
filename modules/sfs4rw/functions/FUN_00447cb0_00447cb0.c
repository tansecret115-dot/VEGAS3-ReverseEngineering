/* Module: sfs4rw.dll
   Function: FUN_00447cb0
   Address: 00447cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00447cb0(int param_1,byte *param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 9) == '\x01') && (*(char *)(param_1 + 8) == '\0')) {
    for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = ~*param_2;
      param_2 = param_2 + 1;
    }
  }
  return;
}


