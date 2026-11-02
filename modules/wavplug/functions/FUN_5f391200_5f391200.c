/* Module: wavplug.dll
   Function: FUN_5f391200
   Address: 5f391200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f391200(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = param_1;
  if (param_1[0x96] != 0) {
    (**(code **)(*param_1 + 0x3c))(param_1,&param_1);
    if ((0 < (int)param_1) && (piVar1 = *(int **)(piVar2[0x96] + 0x20), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x28))(piVar1);
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
    FUN_5f393230(piVar2[0x97]);
  }
  return 0;
}


