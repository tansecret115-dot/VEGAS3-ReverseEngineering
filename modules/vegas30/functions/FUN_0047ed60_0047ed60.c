/* Module: vegas30.exe
   Function: FUN_0047ed60
   Address: 0047ed60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047ed60(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int **)(param_1 + 0x18) == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)(param_1 + 0x18);
  }
  iVar3 = 0;
  if (iVar4 < 1) {
    return 0;
  }
  do {
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    if ((iVar3 < 0) || (iVar2 + -1 < iVar3)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(piVar1[2] + iVar3 * 4);
    }
    if ((iVar2 != 0) && ((param_2 < 0 || (param_2 == *(int *)(iVar2 + 0x10))))) {
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < iVar4);
  return 0;
}


