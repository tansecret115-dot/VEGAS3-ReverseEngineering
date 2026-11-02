/* Module: vegas30.exe
   Function: FUN_005ac830
   Address: 005ac830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005ac830(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = **(int **)(param_1 + 4);
  if (0 < iVar1) {
    piVar2 = (int *)(*(int **)(param_1 + 4))[2];
    do {
      if ((*(int *)(*piVar2 + 0x458) != 0) && (param_2 == *(int *)(*piVar2 + 0x458))) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}


