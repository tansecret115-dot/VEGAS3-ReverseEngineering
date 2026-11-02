/* Module: vidcap30.exe
   Function: FUN_0040ec10
   Address: 0040ec10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040ec10(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  if ((piVar1 != (int *)0x0) && (1 < *piVar1)) {
    iVar3 = 1;
    piVar2 = (int *)piVar1[2];
    while ((param_2 < piVar2[2] + -1 || (piVar2[0x12] + 1 < param_2))) {
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x12;
      if (*piVar1 <= iVar3) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x90) = 1;
    *(int *)(param_1 + 0x94) = iVar3;
  }
  return;
}


