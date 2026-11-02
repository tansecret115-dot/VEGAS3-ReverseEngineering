/* Module: vegas30k.dll
   Function: FUN_011b2d10
   Address: 011b2d10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011b2d10(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  piVar1 = *(int **)(param_1 + 0x1a0);
  local_4 = 0;
  iVar3 = 0;
  if (piVar1 != (int *)0x0) {
    iVar4 = 0;
    if (0 < *piVar1) {
      do {
        piVar2 = (int *)(piVar1[1] * iVar4 + piVar1[2]);
        if ((*(int *)(piVar1[1] * iVar4 + 4 + piVar1[2]) != *piVar2) &&
           (iVar3 = piVar2[5] - *(int *)(piVar2[2] + param_2 * 4), iVar3 != 0)) {
          local_4 = local_4 + iVar3;
        }
        iVar4 = iVar4 + 1;
        iVar3 = local_4;
      } while (iVar4 < *piVar1);
    }
  }
  return iVar3;
}


