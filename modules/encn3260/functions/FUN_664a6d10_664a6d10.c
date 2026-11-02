/* Module: encn3260.dll
   Function: FUN_664a6d10
   Address: 664a6d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a6d10(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 100) == 0) {
    return 0x80040009;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x68) + 0xb4));
  if (param_2 == -1) {
    piVar1 = (int *)(*(int *)(param_1 + 100) + 4);
    iVar2 = (**(code **)(*piVar1 + 0x28))(piVar1);
    param_2 = iVar2 + -1;
  }
  piVar1 = (int *)(*(int *)(param_1 + 100) + 4);
  iVar2 = (**(code **)(*piVar1 + 0x28))(piVar1);
  if (iVar2 <= param_2) {
    piVar1 = (int *)(*(int *)(param_1 + 100) + 4);
    iVar2 = (**(code **)(*piVar1 + 0x28))(piVar1);
    param_2 = iVar2 + -1;
  }
  if (*(int *)(param_1 + 0xd8) != param_2) {
    FUN_664a6c50(*(void **)(param_1 + 100),param_1 + -4,*(int *)(param_1 + 0xd8),param_2);
  }
  if (*(void **)(param_1 + 0x68) != (void *)0x0) {
    FUN_664aa6d0(*(void **)(param_1 + 0x68),1,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x68) + 0xb4));
  return 0;
}


