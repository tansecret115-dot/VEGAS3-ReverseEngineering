/* Module: vidcap30.exe
   Function: FUN_00461120
   Address: 00461120
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00461120(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != param_2) {
    if (iVar1 != 0) {
      FUN_00431d30(iVar1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4));
    }
    *(int *)(param_1 + 0x24) = param_2;
    if (param_2 != 0) {
      FUN_00461160(param_1);
    }
  }
  return;
}


