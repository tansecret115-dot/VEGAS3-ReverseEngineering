/* Module: enlv3260.dll
   Function: FUN_661d28f0
   Address: 661d28f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_661d28f0(int param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  
  iVar1 = *(int *)(param_1 + 0x14);
  while (iVar1 != 0) {
    pvVar3 = (void *)FUN_661d34b0((int *)(param_1 + 4));
    if (pvVar3 != (void *)0x0) {
      piVar2 = *(int **)((int)pvVar3 + 0x10);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *(undefined4 *)((int)pvVar3 + 0x10) = 0;
      }
      operator_delete(pvVar3);
    }
    iVar1 = *(int *)(param_1 + 0x14);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  CloseHandle(*(HANDLE *)(param_1 + 0x48));
  thunk_FUN_661d31c0((undefined4 *)(param_1 + 0x18));
  FUN_661d3410((int *)(param_1 + 4));
  return;
}


