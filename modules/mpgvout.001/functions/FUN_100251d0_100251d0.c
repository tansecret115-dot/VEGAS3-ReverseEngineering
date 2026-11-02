/* Module: mpgvout.001
   Function: FUN_100251d0
   Address: 100251d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_100251d0(int param_1)

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


