/* Module: rmto3260.dll
   Function: FUN_662c7d20
   Address: 662c7d20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c7d20(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x46)) {
    piVar3 = *(int **)(param_1 + 0x42);
    while (piVar1 = (int *)*piVar3, piVar1 != param_2) {
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
      if (*(int *)(param_1 + 0x46) <= iVar2) {
        return 0;
      }
    }
    FUN_662ed6b0((void *)(param_1 + 0x42),iVar2,1);
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return 0;
}


