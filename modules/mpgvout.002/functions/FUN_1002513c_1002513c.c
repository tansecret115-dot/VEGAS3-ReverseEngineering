/* Module: mpgvout.002
   Function: FUN_1002513c
   Address: 1002513c
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_1002513c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x80) == 1) {
    if (*(int *)(param_1 + 0x5c8) == 0) {
      iVar1 = *(int *)(param_1 + 0x84) * 2;
    }
    else {
      iVar1 = *(int *)(&DAT_100336c0 + *(int *)(param_1 + 0x84) * 4);
    }
    *(int *)(param_1 + 0x3b8) = iVar1;
    return iVar1;
  }
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  return 4;
}


