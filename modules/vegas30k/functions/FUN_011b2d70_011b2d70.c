/* Module: vegas30k.dll
   Function: FUN_011b2d70
   Address: 011b2d70
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_011b2d70(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = *(int **)(param_1 + 0x1a0);
  piVar2 = (int *)0x0;
  uVar5 = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    iVar4 = 0;
    if (0 < *piVar1) {
      do {
        piVar3 = (int *)(piVar1[1] * iVar4 + piVar1[2]);
        if (((piVar3[1] != *piVar3) && (*(uint *)(piVar3[2] + param_2 * 4) < (uint)piVar3[5])) &&
           ((uint)piVar3[4] < uVar5)) {
          piVar2 = piVar3;
          uVar5 = piVar3[4];
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *piVar1);
    }
  }
  return piVar2;
}


