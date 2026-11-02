/* Module: aviplug.dll
   Function: FUN_5f950150
   Address: 5f950150
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f950150(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    return -0x7ffbfda1;
  }
  if (*(int *)(param_1 + 0x14) == 1) {
    return 0;
  }
  iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
  if (-1 < iVar2) {
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  return iVar2;
}


