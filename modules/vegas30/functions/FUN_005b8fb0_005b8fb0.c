/* Module: vegas30.exe
   Function: FUN_005b8fb0
   Address: 005b8fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005b8fb0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  FUN_005b83b0(param_1,1);
  piVar1 = *(int **)(param_1 + 0x1dc);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      FUN_005cbf20(*(undefined4 *)(piVar1[2] + iVar3 * 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  FUN_005b84d0(param_1,1);
  return 1;
}


