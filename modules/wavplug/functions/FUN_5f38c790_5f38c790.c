/* Module: wavplug.dll
   Function: FUN_5f38c790
   Address: 5f38c790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f38c790(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = param_1;
  if (param_1[0x96] != 0) {
    (**(code **)(*param_1 + 0x3c))(param_1,&param_1);
    iVar3 = 0;
    if (0 < (int)param_1) {
      iVar4 = 0;
      do {
        piVar1 = *(int **)(iVar4 + 0x28 + piVar2[0x96]);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x28))(piVar1);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x30;
      } while (iVar3 < (int)param_1);
    }
  }
  if ((HANDLE)piVar2[0x85] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)piVar2[0x85]);
    piVar2[0x85] = -1;
  }
  if (piVar2[0x88] == 0) {
    if ((HANDLE)piVar2[0x86] != (HANDLE)0xffffffff) {
      CloseHandle((HANDLE)piVar2[0x86]);
      piVar2[0x86] = -1;
    }
    piVar2[0x87] = 0;
  }
  if (piVar2[0x97] != 0) {
    FUN_5f38e920(piVar2[0x97]);
  }
  return 0;
}


