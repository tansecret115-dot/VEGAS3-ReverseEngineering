/* Module: wmfplug2.dll
   Function: FUN_00402b10
   Address: 00402b10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00402b10(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_ESI;
  int iVar4;
  
  piVar2 = param_1;
  piVar1 = (int *)param_1[0x90];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1);
  }
  if (piVar2[0x92] != 0) {
    (**(code **)(*piVar2 + 0x3c))(piVar2,&param_1);
    iVar3 = 0;
    if (0 < unaff_ESI) {
      iVar4 = 0;
      do {
        piVar1 = *(int **)(piVar2[0x92] + 0x30 + iVar4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x28))(piVar1);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x38;
      } while (iVar3 < unaff_ESI);
    }
  }
  if (piVar2[2] != 0) {
    piVar2[2] = 0;
  }
  return 0;
}


