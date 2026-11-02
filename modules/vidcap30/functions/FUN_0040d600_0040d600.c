/* Module: vidcap30.exe
   Function: FUN_0040d600
   Address: 0040d600
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040d600(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x8c);
  iVar2 = 0;
  if (0 < *piVar1) {
    do {
      if (param_2 < *(int *)(piVar1[1] * iVar2 + 8 + piVar1[2])) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *piVar1);
  }
  return -1;
}


