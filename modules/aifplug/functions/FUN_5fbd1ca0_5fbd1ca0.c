/* Module: aifplug.dll
   Function: FUN_5fbd1ca0
   Address: 5fbd1ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbd1ca0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = param_1;
  if (param_1[0x92] != 0) {
    (**(code **)(*param_1 + 0x3c))(param_1,&param_1);
    if ((0 < (int)param_1) && (piVar1 = *(int **)(piVar2[0x92] + 0x20), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x28))(piVar1);
    }
  }
  if ((HANDLE)piVar2[0x85] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)piVar2[0x85]);
    piVar2[0x85] = -1;
  }
  if (piVar2[0x93] != 0) {
    FUN_5fbd3640(piVar2[0x93]);
  }
  return 0;
}


