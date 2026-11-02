/* Module: sftrans1.dll
   Function: FUN_00426510
   Address: 00426510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00426510(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    return 0x80004005;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
  uVar2 = (**(code **)(*(int *)(param_1 + -0xc) + 0x24))(param_1 + 0x164,param_2);
  *(undefined4 *)(param_1 + 0x144) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return uVar2;
}


