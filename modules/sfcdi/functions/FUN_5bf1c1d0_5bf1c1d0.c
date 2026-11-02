/* Module: sfcdi.dll
   Function: FUN_5bf1c1d0
   Address: 5bf1c1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf1c1d0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  piVar2 = *(int **)(param_1 + 0x3c);
  if (piVar2 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar2;
  }
  if ((-1 < iVar1) && (iVar1 <= iVar3 + -1)) {
    return *(undefined4 *)(piVar2[2] + iVar1 * 4);
  }
  return 0;
}


