/* Module: sfpaplug.dll
   Function: FUN_0040c800
   Address: 0040c800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040c800(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = param_1;
  if (param_1[0x9a] != 0) {
    (**(code **)(*param_1 + 0x3c))(param_1,&param_1);
    iVar3 = 0;
    if (0 < (int)param_1) {
      iVar4 = 0;
      do {
        piVar1 = *(int **)(iVar4 + 0x20 + piVar2[0x9a]);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x28))(piVar1);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x28;
      } while (iVar3 < (int)param_1);
    }
  }
  if ((HANDLE)piVar2[0x85] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)piVar2[0x85]);
    piVar2[0x85] = -1;
  }
  return 0;
}


