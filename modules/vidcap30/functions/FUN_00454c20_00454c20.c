/* Module: vidcap30.exe
   Function: FUN_00454c20
   Address: 00454c20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00454c20(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = **(int **)(param_1 + 0x2c);
  if (0 < iVar1) {
    piVar3 = (int *)(*(int **)(param_1 + 0x2c))[2];
    do {
      iVar2 = *piVar3;
      if ((((*(int *)(iVar2 + 0x14) <= *param_2) && (*param_2 < *(int *)(iVar2 + 0x1c))) &&
          (*(int *)(iVar2 + 0x18) <= param_2[1])) && (param_2[1] < *(int *)(iVar2 + 0x20))) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < iVar1);
  }
  return -1;
}


