/* Module: sftrans1.dll
   Function: FUN_0048ace0
   Address: 0048ace0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0048ace0(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (param_3 < 0) {
    param_3 = **(int **)(param_1 + 0xa4) + -1;
  }
  if ((((-1 < param_2) && (param_2 < **(int **)(param_1 + 0xa4))) && (-1 < param_3)) &&
     ((param_3 < **(int **)(param_1 + 0xa4) && (param_2 <= param_3)))) {
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
    }
    iVar2 = param_3 + 1;
    param_3 = 0;
    if (0 < iVar2) {
      do {
        piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0xa4) + 8) + iVar4 * 4);
        if ((-1 < *piVar1) && (*piVar1 < **(int **)(param_1 + 0xac) + 3)) {
          iVar3 = FUN_0048b3d0(piVar1);
          if (iVar3 == 1 || iVar3 + -1 < 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_0048b3d0(piVar1);
            iVar3 = iVar3 + -1;
          }
          if ((iVar4 < param_2) && (param_4 != (int *)0x0)) {
            *param_4 = *param_4 + iVar3 * 2;
          }
          else {
            param_3 = param_3 + iVar3 * 2;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    return param_3 + 2;
  }
  return 0;
}


