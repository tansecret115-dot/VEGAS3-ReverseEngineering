/* Module: sfpaplug.dll
   Function: FUN_00406170
   Address: 00406170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00406170(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = param_1;
  if (param_1[0x9c] != 0) {
    (**(code **)(*param_1 + 0x3c))(param_1,&param_1);
    piVar1 = *(int **)(piVar2[0x9c] + 0x20);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x28))(piVar1);
    }
  }
  if ((HANDLE)piVar2[0x85] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)piVar2[0x85]);
    piVar2[0x85] = -1;
  }
  return 0;
}


