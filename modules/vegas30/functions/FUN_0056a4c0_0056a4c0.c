/* Module: vegas30.exe
   Function: FUN_0056a4c0
   Address: 0056a4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0056a4c0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 0x2b0);
  if ((piVar3 != (int *)0x0) && (iVar1 = *piVar3, iVar1 != 0)) {
    iVar2 = 0;
    iVar4 = (*(int *)(param_1 + 0x224) - *(int *)(param_1 + 0x20c)) + *param_2;
    if (0 < iVar1) {
      piVar3 = (int *)piVar3[2];
      do {
        iVar4 = iVar4 - *(int *)(*piVar3 + 0x338);
        if (iVar4 < 1) {
          return iVar2;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < iVar1);
    }
  }
  return -1;
}


