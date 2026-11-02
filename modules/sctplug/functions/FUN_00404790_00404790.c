/* Module: sctplug.dll
   Function: FUN_00404790
   Address: 00404790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00404790(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (param_1[0x96] != 0) {
    (**(code **)(*param_1 + 0x3c))(param_1,&param_1);
    if (0 < (int)param_1) {
      (**(code **)(**(int **)(piVar1[0x96] + 0x20) + 0x28))(*(int **)(piVar1[0x96] + 0x20));
    }
  }
  if ((HANDLE)piVar1[0x85] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)piVar1[0x85]);
    piVar1[0x85] = -1;
  }
  if (piVar1[0x88] == 0) {
    if ((HANDLE)piVar1[0x86] != (HANDLE)0xffffffff) {
      CloseHandle((HANDLE)piVar1[0x86]);
      piVar1[0x86] = -1;
    }
    piVar1[0x87] = 0;
  }
  if (piVar1[0x97] != 0) {
    FUN_004071f0(piVar1[0x97]);
  }
  return 0;
}


