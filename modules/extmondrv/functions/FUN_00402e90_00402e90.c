/* Module: extmondrv.dll
   Function: FUN_00402e90
   Address: 00402e90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00402e90(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  OutputDebugStringA("CSfMiniPin::Disconnect\n");
  uVar2 = 0x80040209;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piVar1 = *(int **)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    piVar1 = *(int **)(param_1 + 0xc4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0xc4) = 0;
    }
    FUN_00416200(*(int **)(param_1 + 0x1c),0,-1,0);
    *(undefined4 *)(param_1 + 0x24) = 0;
    uVar2 = 0;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  return uVar2;
}


