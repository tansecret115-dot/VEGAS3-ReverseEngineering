/* Module: vidcap30.exe
   Function: FUN_00471610
   Address: 00471610
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00471610(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 0x120);
  if ((piVar1 != (int *)0x0) && (-1 < param_3)) {
    iVar2 = 0;
    if (0 < *piVar1) {
      piVar3 = (int *)piVar1[2];
      do {
        if (*(int *)(*piVar3 + 4) == param_2) {
          if (param_3 == 0) {
            return *piVar3;
          }
          param_3 = param_3 + -1;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < *piVar1);
    }
  }
  return 0;
}


