/* Module: rmme3260.dll
   Function: FUN_662024b0
   Address: 662024b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662024b0(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  if (param_2 != 0) {
    return 0x80004005;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    piVar3 = *(int **)(param_1 + 0x10);
    while (piVar1 = (int *)*piVar3, piVar1 != param_3) {
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
      if (*(int *)(param_1 + 0x14) <= iVar2) {
        return 0;
      }
    }
    FUN_6624ffe0((void *)(param_1 + 0x10),iVar2,1);
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return 0;
}


