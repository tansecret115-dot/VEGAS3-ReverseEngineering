/* Module: sfpagepeel.dll
   Function: FUN_00403c50
   Address: 00403c50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00403c50(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    return 0x80004005;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  uVar2 = (**(code **)(*(int *)(param_1 + -0xc) + 0x24))(param_1 + 0xf4,param_2);
  *(undefined4 *)(param_1 + 0xd4) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  piVar1 = *(int **)(param_1 + 0x48);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return uVar2;
}


